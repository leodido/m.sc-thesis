# CTBN

This repository contains the `tex` source of my M.Sc. thesis on Continuos time Bayesian Networks (CTBNs).

## Topics

* Theory
    - Continuos time Bayesian Networks
    - Continuos time Bayesian Network Classifiers
    - Continuos time Bayesian Network structure learning
* Development
    - Analysis of the relative `R` packages developed
    - Analysis and description of the `.dll` extension developed to generate traffic dataset from [TSIS](http://mctrans.ce.ufl.edu/featured/tsis/)
* Case Studies
    - Tutorials about the main `R` package
    - Experimentations and performance analysis

## Tex

Based on a customization of the `ClassicThesis` style, obtained through the `ArsClassica` package and other customizations made by me.

### How to compile

#### Prerequisites

* Texlive (or similar) complete distribution
* ArsClassica package installed
* Sublime Text 2
* Sublime Text 2 LaTeXTools package installed
* <del>Graphviz installed (`dot` utility have to be in the `$PATH` variable)</del>
* <del>Compiling: `pdflatex` with option `-shell-escape`</del>

#### Steps

1. Use the LaTeX `sublime text 2` build tool provided to compile `tesi.tex`
2. Open `tesi-frn.tex` and compile it to generate the frontispiece related `tesi-frn.pdf` file
3. Compile again `tesi.tex` to insert the frontispiece
4. Run `makeindex -s classic tesi` in the shell (into the project directory) to build the definitive (and better) `arclassica` analytical index<sup>(*)</sup>
5. Recompile `tesi.tex`

Note: `tesi.sublime-project` file set `tesi.tex` file as the `tex` root file for the project.

<sub>(*) Thi step is required each time a new indexed term (or keyword) is added.</sub>
