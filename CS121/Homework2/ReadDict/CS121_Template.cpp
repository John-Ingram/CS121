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
	ifstream dictionary;
	string word;
	unsigned int word_count = 0;
	dictionary.open("C:/Temp/dictionary.txt");
	while (!dictionary.eof())
	{
		dictionary >> word;
		word_count++;
		cout << setw(5) << word;
		if (word_count % 15 == 0)
		{
			cout << endl;
		}
	}
	cout << "There are " << word_count
		<< " words in the dictionary" << endl;
	dictionary.close();
	dictionary.open("C:/Temp/dictionary.txt");//Resets to beginning (not smooth)
	/*
	dictionary.clear()//clears set flags(like eof
	dictionary.seekg(0, ios::beg)`*/
	system("pause");
	return 0;
}

