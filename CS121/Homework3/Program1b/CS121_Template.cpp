//
// 
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	ifstream infile;
	int letterCounts[26];
	char currentChar;
	for (int i = 0; i < 26; i++) letterCounts[i] = 0;

	infile.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework3/Program1a/UAH_sample.txt");
	if (!infile)
	{
		cout << "Error. Not able to open file.";
		system("pause");
		return(3);
	}

	while (!infile.eof())
	{
		infile >> currentChar;
		if (isalpha(currentChar)) letterCounts[(int)tolower(currentChar) - 97]++;	//add one to the index corresponding to the letter
	}

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 97) << ": " << letterCounts[i] << endl;
	}

	infile.close();
	system("pause");
	return 0;
}

