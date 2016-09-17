#include <iostream>
#include <string>
using namespace std;

//Make a program to create and interpet Punnet Squares!
//Function for intepretting a entered parent genotype, or have a function for entering a set number of genotypes?
//Det. function more impressive.  Just need it to read a string, find spaces.  Then parse into genotypes.
//Then analyze 'genotypes' for presence/abscence of capitals letters- if have one, set that to dominant.
//If not caps, set to recessive.  
//Def. need classes, set up a cap number of classes, have one allele be a class.
//Sends out requests to user, after figuring out alleles, to enter what hte phenotypes are/dominance, recessive relations between alleles for the gene
// ex: "Please answer as y/n: were four genes entered for the parents?"
// "The Dominant alelle for gene 1, 'dom', is B.  Correct?"
// "Great!  What phenotype does this correspond to?"
//Then stores and uses, etc.
void getPGen()
{
	cout << "Enter number of independtly assorting alleles of interest: " << endl;
	int alleleNumber = 0;
	cin >> alleleNumber;
	while (alleleNumber == 0)
	{
		cout << "Invalid number, please enter at least 1 allele." << endl;
		cin >> alleleNumber;
	}
	int counter = 0, endCount = alleleNumber;
	for (counter = 0, counter = endCount, counter++)
	{
		cout << "Enter genotype parent one: " << endl;
		string p1 = "";
		cin >> p1;
	}
	
	
}