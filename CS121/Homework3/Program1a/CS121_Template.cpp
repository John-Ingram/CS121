//
// Program 1a
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	ifstream infile;
	infile.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework3/Program1a/UAH_sample.txt");
	if (!infile)
	{
		cout << "Error. Not able to open file.";
		system("pause");
		return(3);
	}

	cout << setw(15) << "Word Length" << setw(15) << "Count" << endl;
	for (int i = 1; i <= 10; i++)
	{
		int count = 0;
		string word;
		while (!infile.eof())
		{
			infile >> word;
			int wordLength = word.length();
			string digits = "1234567890";
			if (word.find(',', 0) < string::npos) wordLength--;
			if (word.find('.', 0) < string::npos) wordLength--;
			if (word.find(';', 0) < string::npos) wordLength--;

			for (int k = 0; k < word.length(); k++)
			{
				if (digits.find(word[k], 0) < string::npos)
				{
					count--;
					break;
				}
				
			}
			if (digits.find(word,0))
			if (wordLength == i) count++;
		}
		cout << setw(15) << i << setw(15) << count << endl;

		infile.clear();
		infile.seekg(0, ios::beg);
	}

	system("pause");
	return 0;
}

