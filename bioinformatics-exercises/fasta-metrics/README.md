# Protein Similarity Search Using Jaccard Index (C++)

## Overview

This project implements a simplified protein database search tool inspired by BLAST. The program compares a query protein sequence against a database of protein sequences and identifies the most similar matches using the Jaccard index of tetrapeptide composition.

Developed as part of a bioinformatics programming course, this project demonstrates biological sequence analysis, similarity metrics, FASTA parsing, and algorithm design in C++.

## Biological Background

Proteins can be compared based on the sequence patterns they contain. In this project, each protein is represented by its set of overlapping tetrapeptides (4-amino-acid subsequences). Similarity between proteins is measured using the Jaccard index:

Similarity = Shared Tetrapeptides / Total Unique Tetrapeptides

The program identifies the top protein matches within a sequence database.

## Concepts Demonstrated

- FASTA file parsing
- Protein sequence analysis
- Jaccard similarity calculation
- Database searching
- Biological data structures
- File I/O and error handling
- Scientific programming in C++

## Files

| File | Description |
|--------|------------|
| 10_fasta_metrics.cpp | Main C++ implementation |
| ProteinSimilaritySearch_Assignment.pdf | Original assignment instructions |
| SampleInput.fasta | Example input data |
| README.md | Project documentation |

## Build & Run

```bash
g++ -std=c++17 10_fasta_metrics.cpp -o protein_search
./protein_search query.fasta database.fasta
```

## Learning Outcomes

Through this project I gained experience working with biological sequence data, implementing similarity metrics, and designing algorithms for protein database searching. The project introduced concepts commonly used in computational biology and bioinformatics for sequence comparison and functional inference.

