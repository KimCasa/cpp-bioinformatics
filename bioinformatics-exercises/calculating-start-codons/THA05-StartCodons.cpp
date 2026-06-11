/*
Reads a FASTA file with multiple gene seqeunces and counts how many genes start with ATG, GTG, TTG.


Input:
A FASTA file with multiple seqeunces (genes)

Output:
Counts and percentages of genes starting with ATG, GTG, TTG
Also reports any genes that start a different codon

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*******************************************************/

int main(int argc, char **argv) {

	if (argc<2)  {
		cout << "Use as:  " << argv[0] << " <FASTA_file_name>\n";
		cout << "Example: " << argv[0] << " Ecoli-genes.fasta\n";
		return 0;
	}
	
	ifstream InFile(argv[1]);  //Opening the FASTA file
	if (!InFile.is_open())  {
		cout << "Cannot open file \"" << argv[1] << "\"\n";
		return 0;
	}
	
// Setting up counters
	int ATG=0;
	int GTG=0;
	int TTG=0;
	int NGenes=0;  // counter for all genes
	

// checking if the first line starts with >
	string Line1;  // for sequence header
	string Line2;  // for the first line of the sequence

// starting the loop to read the file and count start codons
	while (getline(InFile,Line1))  {	
		if (Line1[0]=='>')  {
			++NGenes;
// if the line starts with >, I read the next line and count the start codon. If not, I ignore it and read the next line
			getline(InFile,Line2);  // read the second line in the file (first line of the first gene sequecne)
			if ( (Line2[1]=='T' || Line2[1]=='t' || Line2[1]=='U' || Line2[1]=='u') && (Line2[2]=='G' || Line2[2]=='g') )  {
// this checks if the second and third nucleotides are TG or UG, allowing also for lowercase letters
				if (Line2[0]=='A' || Line2[0]=='a')  ++ATG;  // I already know that secind and third are TG, so if the first nuclotide is A, it must be ATG
				else if (Line2[0]=='G' || Line2[0]=='g')  ++GTG;  // GTG
				else if (Line2[0]=='T' || Line2[0]=='t' || Line2[0]=='U' || Line2[0]=='u')  ++TTG;  // TTG
				else  cout << "WARNING: gene \"" << Line1 << "\" starts with " << Line2[0] << Line2[1] << Line2[2] << ".\n";
// if none of the three, report the gene
			}
			else  cout << "WARNING: gene \"" << Line1 << "\" starts with " << Line2[0] << Line2[1] << Line2[2] << ".\n";
// and again here -- the previous one was for not having A,G, or T in the first position, now it is for not having TG in the second and third
		}
	}
	
// Printing the results:
	cout << "\nNumber of genes: " << NGenes << "\n";
	cout << "Genes starting with:\n";
	cout << "\tATG: " << ATG << " (" << 100.0*ATG/(ATG+TTG+GTG) << "%)\n";
	cout << "\tGTG: " << GTG << " (" << 100.0*GTG/(ATG+TTG+GTG) << "%)\n";
	cout << "\tTTG: " << TTG << " (" << 100.0*TTG/(ATG+TTG+GTG) << "%)\n";
	cout << "\tOther: " << NGenes-ATG-GTG-TTG << "\n";

  return 0;
}


