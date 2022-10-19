//
// Program 4
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

string reverse(string word);

int main(void)
{
	ifstream dictionary, scramble;
	string word, line;
	char findChar = ' ';

	dictionary.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework3/Program4/dictionary_four_letter_words.txt");
	if (!dictionary)
	{
		cout << "Error. Not able to open file.";
		system("pause");
		return(3);
	}

	scramble.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework3/Program4/word_puzzle.txt");
	if (!scramble)
	{
		cout << "Error. Not able to open file.";
		system("pause");
		return(3);
	}
	cout << "Starting..." << endl;
	while (!scramble.eof())
	{
		getline(scramble, line);
		while (!dictionary.eof())
		{

			dictionary >> word;
			if (line.find(word) != string::npos || line.find(reverse(word)) != string::npos)
			{
				cout << word << endl;
			}
		}
		dictionary.clear();
		dictionary.seekg(0, ios::beg);
	}
	dictionary.close();
	scramble.close();
	cout << "Process complete. Files closed." << endl;
	system("pause");
	return 0;

	
}

string reverse(string word)
{
	string reversed = "";
	for (int i = 0; i < word.length(); i++)
	{
		reversed.push_back(word[i]);
	}
	return reversed;
}

