## Dieses Dokument umfasst:
- Überblick über die Schritte, die nötig sind, um für eine Sprache Language-Support in Atom mit Tree-sitter zu erstellen
- Verweise auf Dokumentationen, Posts und anderen hilfreichen Links
- Informationen, die aufgrund von Lücken in der Tree-sitter-Dokumentation (da Tree-sitter noch recht neu ist) schwer zu finden sind. Dies betrifft vor allem die Integration des Parsers in Atom.

### tree-sitter Parser erstellen

Die Tree-sitter Dokumentation hat eine gute Anleitung: [creating parsers](http://tree-sitter.github.io/tree-sitter/creating-parsers). Deswegen hier nicht näher berichtet.
Außerdem kann es helfen sich andere Grammatiken anzusehen. Hier zum Beispiel zu finden: https://github.com/tree-sitter
### Parser in einem Atom-Language-Package verwenden
Hier die vorbereitenden Schritte:
- Languagepackage anlegen: siehe dazu [Atom Flight Manual: Create the Package](https://flight-manual.atom.io/hacking-atom/sections/creating-a-grammar/#create-the-package)
- Erstelle eine `tree-sitter-<...>.cson` Datei im Ordner `grammars`: [Max Brunsfeld](https://github.com/maxbrunsfeld) schrieb etwas [hier](https://github.com/atom/atom/pull/16299#issuecomment-363022293) darüber.

#### Syntaxhighlighting in Atom mit tree-sitter Parser

A few notes on the `scopes` section (which is the important part for syntax highlighting):  

1. The keys in that object are CSS selectors that select nodes in the syntax tree, similar to how normal CSS selectors select nodes in a DOM tree. Only a subset of CSS is supported. You can combine nodes with the `>` (direct child) operator, and the `:nth-child(n)` pseudo-class.

Example: https://github.com/atom/language-python/blob/master/grammars/tree-sitter-python.cson#L59

2. In Tree-sitter's syntax tree, there is a distinction between the *named* nodes (which correspond to a property of the grammar's `rules` object) and the *anonymous* nodes, which are just specified as string literals within some other rule. To refer to the anonymous nodes in the syntax tree, you must wrap them in double quotes.

Example: https://github.com/atom/language-python/blob/master/grammars/tree-sitter-python.cson#L78-L98

---
Damit die definierten Scopes in verschiedenen Themes farbig markiert werden, kann diese Konvention verwendet werden: [macromates.com: language grammars:](https://macromates.com/manual/en/language_grammars) Abschnitt 12.4 Naming conventions.
#### Codefolding in Atom mit Tree-sitter Parser
Also, if you want to set up code folding based on the syntax tree, you'll need to use the `folds` field in the `.cson` file. The value of that field should be an array of objects, where each object does two things:  

1. It will be checked against a given node of the syntax tree, and it will either match or not. If it matches, it indicates that the syntax node can be folded.

2. If it matches, it specifies where the fold should start and end.

The fold objects have three fields:  

1. `type` - this means that this type of fold can only occur on syntax nodes with the given type(s).

Example: https://github.com/atom/language-python/blob/master/grammars/tree-sitter-python.cson#L22-L32

2. `start` - this is an object with the following keys, both optional:  

* `index` - the fold should start *after* the child at the given index. Negative numbers indicate offsets from the last child (e.g. -1 means the last child). If there is no child at the given index, the fold will not match

* `type` - this fold should start *after* the first child with the given type. If there is no child with the given type, the fold will not match. The `index` and `type` fields can be combined to further restrict the matching.

3. `end` - this works similarly to `start`, but it indicates that the fold should end *before* the given child.


#### Fehler: "compiled against a different Node.js version"
Man kann in dem `cson` file unter `parser` [(hier)](https://github.com/spechub/scone-atom/blob/master/grammars/tree-sitter-scone.cson#L4) auch einen relativen Pfad zum Parser angeben, um es bei der Entwicklung leichter zu haben.
Dabei stieß ich in Atom auf diesen Fehler:
```
Failed to load a language-scone package grammar

At The module '/home/lukas/github/tree-sitter-scone/build/Release/tree_sitter_scone_binding.node'
was compiled against a different Node.js version using
NODE_MODULE_VERSION 57. This version of Node.js requires
NODE_MODULE_VERSION 54. Please try re-compiling or re-installing
the module (for instance, using `npm rebuild` or`npm install`). in /home/lukas/.atom/packages/Verknüpfung mit scone-atom/grammars/tree-sitter-scone.cson
```
##### Die Behebung des Fehlers:
Beim Kompilieren des Parsers mit dem Befehl `node-gyp rebuild` ist zu beachten welche Atom- bzw. Electronversion vorhanden ist. Mit `atom -v` erhält man die verwendete Electronversion und kann sie als Ziel angeben.
Der neue Befehl sollte dieser Form aussehen:
`node-gyp rebuild --target=1.7.11 --arch=x64 --dist-url=https://atom.io/download/electron`
Wobei unter `--target=......` die entsprechende Electronversion steht.
Siehe dazu auch diesen [Post von Aerijo](https://discuss.atom.io/t/help-setting-up-tree-sitter-grammar-development/52113/3).
###  Parser und Atompackage veröffentlichen
Beim Veröffentlichen des Language-packages empfiehlt es sich den Parser als eigenes npm module zu veröffentlichen. [publishing-npm-packages](https://docs.npmjs.com/getting-started/publishing-npm-packages)
Im Atompackage wird dieses module als dependency in der `package.json` angegeben [(Beispiel)](https://github.com/spechub/scone-atom/blob/master/package.json#L13-L15) und kann dann mit dem Atompackagemanager veröffentlicht werden. [Siehe: Atom Flight Manual: Publishing](https://flight-manual.atom.io/hacking-atom/sections/publishing/)
### Weitere Links
- hilfreiches Package, um Tree-sitter-Syntaxbaum zu visualisieren: [tree-sitter-syntax-visualizer](https://atom.io/packages/tree-sitter-syntax-visualizer)
- [Aerijo](https://github.com/Aerijo) ist momentan dabei einen [Guide](https://gist.github.com/Aerijo/df27228d70c633e088b0591b8857eeef#guide-to-your-first-tree-sitter-grammarandere) zu schreiben
