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
* Graphviz installed (`dot` utility have to be in the `$PATH` variable)
* Compiling: `pdflatex` with option `-shell-escape`

#### Steps

* Use the LaTeX build tool provided to compile `tesi.tex`
* Open `tesi-frn.tex` and compile it to generate the frontispiece related `tesi-frn.pdf` file
* Compile again `tesi.tex` to insert the frontispiece and get completed the project

Note: `tesi.sublime-project` file set `tesi.tex` file as the `tex` root file for the project.
