# Start Codon Analysis in Bacterial Genomes (C++)

## Overview

This project analyzes coding sequences from bacterial genomes to identify the frequency of alternative start codons. The program reads gene sequences from FASTA files and counts the number of genes that begin with the canonical start codon (ATG) as well as the alternative bacterial start codons GTG and TTG.

The project was developed as part of a bioinformatics programming course and demonstrates biological sequence analysis, FASTA parsing, and comparative genomics using C++.

## Biological Background

While ATG is the most common translation start codon, many bacteria also utilize alternative start codons such as GTG and TTG. The frequency of alternative start codon usage varies among species and may be influenced by genome composition.

This project investigates whether bacterial genomes with higher GC content tend to use GTG start codons more frequently than genomes with lower GC content.

## Features

- Reads nucleotide sequences from FASTA files
- Identifies gene start codons
- Counts ATG, GTG, and TTG start codons
- Reports percentages for each start codon category
- Detects and reports unexpected start codons
- Supports comparative analysis across multiple bacterial genomes

## Concepts Demonstrated

- FASTA file parsing
- Biological sequence analysis
- Codon identification
- Comparative genomics
- File I/O
- String processing
- Scientific programming in C++

## Files

| File | Description |
|--------|------------|
| THA05-StartCodons.cpp | Main C++ implementation |
| Calculating Start Codons(THA05).pdf | Original assignment instructions |
| README.md | Project documentation |

## Build & Run

```bash
g++ -std=c++17 THA05-StartCodons.cpp -o start_codon_analysis
./start_codon_analysis genome_genes.fasta
```

## Example Output

```text
Number of genes: 1543

Genes starting with:
    ATG: 1310 (84.9%)
    GTG: 184 (11.9%)
    TTG: 41 (2.7%)
    Other: 8
```

## Learning Outcomes

Through this project, I gained experience working with genomic sequence data, implementing FASTA parsers, and analyzing biologically meaningful sequence features. The project introduced concepts in bacterial genome evolution, codon usage bias, and comparative genomics while strengthening my skills in scientific programming and data analysis.

## Assignment Context

This project was developed for a bioinformatics programming course assignment investigating whether bacterial genomes with higher GC content exhibit increased usage of alternative start codons. The analysis combined computational sequence processing with biological hypothesis testing.
