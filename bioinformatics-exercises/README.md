# Correlation Matrix Generator (C++)

## Overview

This project generates a pairwise correlation matrix from a tab-delimited dataset containing multiple samples and numerical variables. Similarity between samples is measured using the Pearson correlation coefficient.

Developed as part of a bioinformatics programming course, this project demonstrates statistical computing, matrix operations, and analysis of multidimensional biological datasets.

## Biological Background

Correlation matrices are widely used in bioinformatics, genomics, microbiome research, and systems biology to identify relationships among samples based on quantitative measurements.

Examples include:

- Microbiome community composition
- Gene expression profiles
- Metabolomics datasets
- Ecological community analyses
- Comparative genomics studies

The resulting matrix provides a quantitative measure of similarity between every pair of samples.

## Features

- Reads tab-delimited input tables
- Processes datasets containing multiple samples and variables
- Calculates pairwise Pearson correlation coefficients
- Generates symmetric correlation matrices
- Produces formatted output suitable for downstream analysis
- Supports biological and environmental datasets

## Concepts Demonstrated

- Pearson correlation analysis
- Matrix manipulation
- Statistical computing
- File I/O
- Data parsing
- Scientific programming in C++
- Bioinformatics data analysis

## Files

| File | Description |
|--------|------------|
| 11_table_processor.cpp | Main C++ implementation |
| 11-Table12.txt | Example input dataset |
| 11-SampleOutput-Table12.txt | Example correlation matrix output |
| CorrelationMatrixGenerator_Assignment.pdf | Original assignment instructions |
| README.md | Project documentation |

## Build & Run

```bash
g++ -std=c++17 11_table_processor.cpp -o correlation_matrix
./correlation_matrix 11-Table12.txt output.txt
```

## Example Output

```text
          Sample1   Sample2   Sample3
Sample1      *
Sample2      0.81      *
Sample3      0.43     0.67      *
```

## Learning Outcomes

Through this project, I gained experience implementing statistical methods from first principles, working with multidimensional biological datasets, and developing computational tools for exploratory data analysis. The project strengthened my understanding of correlation analysis, matrix operations, and reproducible scientific computing.

## Assignment Context

This project was developed for a bioinformatics programming course assignment focused on generating pairwise similarity matrices from biological datasets using Pearson correlation coefficients.
