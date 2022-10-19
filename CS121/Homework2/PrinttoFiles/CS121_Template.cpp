//
// Prints to text file
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	ifstream textin;
	ofstream textout;
	string word, line;
	unsigned int count = 0;
	textin.open("C:/Temp/UAH_sample.txt");
	if (! textin)
	{
		cout << "File one could not be opened.";
		system("pause");
		return 3;
	}
	textout.open("C:/Temp/Copy_UAH.txt");
	if (! textout)
	{
		cout << "File two could not be opened.";
		system("pause");
		return 3;
	}
	/*
	while (!textin.eof())
	{
		textin >> word;
		cout << word << endl;
		textout << word << " ";
		count++;
	}
	*/
	while (!textin.eof());
	{
		getline(textin, line); //Read a full line and remove it's endl
		textout << line << endl;
		cout << line << endl;
		count++;
	}
	cout << "There are " << setw(4) << count << " words in the file." << endl;
	textin.close();
	textout.close();
	system("pause");
	return 0;
}

