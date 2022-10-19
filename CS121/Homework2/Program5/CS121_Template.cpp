//
// Program 5
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	ifstream dictionary;
	string restart;

	dictionary.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework2/Program5/Dictionary.txt");
	if (!dictionary)
	{
		cout << "Error. Not able to open file.";
		system("pause");
		return(3);
	}

	do
	{
		string word, input;
		cout << "Enter a four letter word to check it's spelling: ";
		cin >> input;
		do
		{
			dictionary >> word;
		} while (word != input && !dictionary.eof());

		if (word == input) cout << "The word was spelled correctly" << endl;
		else cout << "The word was not spelled correctly" << endl;

		cout << "Check another word? Y/N ";
		cin >> restart;
		dictionary.clear();
		dictionary.seekg(0, ios::beg);
	} while (restart == "Y");
	dictionary.close();
	system("pause");
	return 0;
}

