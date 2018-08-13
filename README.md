# scone-atom
Provides Syntaxhighlighting for Scone (Scenario based Ontology Evaluation) in Atom.

Link to the Scone User-Guide: [Scone-User-Guide](https://bitbucket.org/malefort/scone/src/e84d5dea61c7b6186ce093d02d67b63e9f7e241e/documentation/SCONEUserGuide.pdf?at=default&fileviewer=file-view-default)

***

The package uses tree-sitter-parser.
 > Make sure that tree-sitter-parser is enabled in the core settings of Atom.

 ## Installation

### Linux and Mac
Common Atom package installation with ```apm install language-scone``` or install it in Atom.


 
### Windows
On a computer with Windows you can do this first to get it work:
 - Open powershell as **administrator**.
 - Install windows-build-tools and set python environment variable:


```powershell
apm install windows-build-tools
apm config set python $env:USERPROFILE\.atom\.node-gyp\.windows-builds-tools\python27\python.exe
```
 - Then install the package in Atom or ```apm install language-scone```.
