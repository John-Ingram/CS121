//
// Program1c
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	ifstream infile;
	string word;
	char findChar = ' ';

	infile.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework3/Program1a/UAH_sample.txt");
	if (!infile)
	{
		cout << "Error. Not able to open file.";
		system("pause");
		return(3);
	}
	cout << "Enter the letter you would like to search for: ";
	cin >> findChar;
	findChar = tolower(findChar);
	while (!infile.eof())
	{
		infile >> word;
		if ((isalpha(word[0])) && (tolower(word[0]) == findChar)) cout << word << endl;
	}
	
	infile.close();
	system("pause");
	return 0;
}

