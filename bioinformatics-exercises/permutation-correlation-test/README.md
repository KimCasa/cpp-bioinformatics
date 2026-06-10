# Permutation Test for Pearson Correlation (C++)

## Overview

This project implements a permutation test to assess the statistical significance of a Pearson product-moment correlation coefficient. The program calculates the observed correlation between two variables and estimates a two-tailed p-value by repeatedly randomizing the data and comparing the resulting correlations to the observed value.

Developed as part of a bioinformatics programming course, this project demonstrates statistical computing, hypothesis testing, randomization methods, and scientific programming in C++.

## Biological Background

Correlation analysis is commonly used in bioinformatics and genomics to investigate relationships between biological variables. Examples include examining associations between gene expression levels, genomic features, environmental variables, or evolutionary traits.

Traditional significance tests often rely on assumptions about data distributions. Permutation tests provide a non-parametric alternative by estimating statistical significance through repeated randomization of the data.

## Features

- Reads tab-delimited numerical data
- Calculates Pearson correlation coefficients
- Implements the Fisher-Yates shuffle algorithm
- Performs permutation-based significance testing
- Computes two-tailed p-values
- Supports user-defined numbers of permutations
- Generates reproducible statistical results

## Concepts Demonstrated

- Statistical hypothesis testing
- Pearson correlation analysis
- Permutation testing
- Monte Carlo simulation methods
- Random number generation (mt19937)
- Fisher-Yates shuffling
- File I/O and data parsing
- Scientific programming in C++

## Files

| File | Description |
|--------|------------|
| 8_sequence_filtering.cpp | Main C++ implementation |
| THA08-SampleInput10.txt | Example input dataset |
| Permutation Test for Pearson(THA08).pdf | Original assignment instructions |
| README.md | Project documentation |

## Build & Run

```bash
g++ -std=c++17 8_sequence_filtering.cpp -o permutation_test
./permutation_test THA08-SampleInput10.txt 10000
```

## Example Output

```text
Correlation coefficient: 0.82
Two-tailed p-value: 0.003
```

*Results may vary slightly between runs because the permutation procedure uses random sampling.*

## Learning Outcomes

Through this project, I gained experience implementing statistical methods from first principles, working with biological datasets, and applying computational approaches to evaluate the significance of observed relationships. The project strengthened my understanding of hypothesis testing, randomization algorithms, and reproducible scientific computing.
