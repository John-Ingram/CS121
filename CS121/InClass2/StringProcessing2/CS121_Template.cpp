//
// 
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

string reverse(string line);

int main(void)
{
	string sentence = "CS 121 meets from 11:10 to 12:30 on Monday and Wednesday";
	string part = " ";
	string ecnetnes = "";
	char letter;
	int len = 0, position = 0, i = 0;
	cout << "STRING PROCESSING Functions" << endl;
	cout << sentence << endl;
	//length()
	len = sentence.length();
	cout << "The sentence is " << len << " letters long." << endl;
	//size()
	cout << "The size of the sentence is " << sentence.size() << endl;
	//find
	position = sentence.find("121"); //Finds the index of the first character in the given string;
	cout << "121 begins at position " << position << endl;
	position = sentence.find("1221");
	if (position < sentence.length())
	{
		cout << "1221 begins at position " << position << endl;
	}
	else//or: if(position == string::npos)
	{
		cout << "The substring \"1221\" was not found in the sentence" << endl;
	}
	position = sentence.find("12");
	if (position == string::npos)
	{
		cout << "Substring not found"<<endl;
	}
	else
	{
		cout << "12 found at position " << position << endl;
	}
	position = sentence.find("12", position + 1); // Start looking for "12" at position + 1
	if (position == string::npos)
		cout << "Substring not found." << endl;
	else
		cout << "12 found at position " << position << endl;
	// find
	position = sentence.find("12");
	while (position != string::npos)
	{
		cout << position << endl;
		position = sentence.find("12", position + 1);
	}
	//substr
	part = sentence.substr(3, 9);//substr(position, length)
	cout << part << endl;
	position = sentence.find("11:10");
	part = sentence.substr(position, 5);
	cout << part << endl;
	//at
	letter = sentence.at(7);
	cout << "Letter = " << letter << endl;
	letter = sentence[7];
	cout << "Letter = " << letter << endl;
	// erase
	position = sentence.find("11:10");
	if (position != string::npos)
	{
		cout << "Erase the time" << endl;
		sentence.erase(position, 5);//Erase 5 Letters
		cout << sentence << endl;
	}
	// insert
	cout << "Inserting new time." << endl;
	sentence.insert(position, "8:00");
	cout << sentence << endl;
	// replace
	position = sentence.find("12:30");
	if (position != string::npos)
	{
		sentence.replace(position, 5, "9:20");
	}
	cout << sentence << endl;
	//append
	cout << "APPEND" << endl;
	sentence.append("2019");
	//reverse
	cout << "REVERSE" << endl;
	len = sentence.length();
	for (int n = len; n > 0; n--)
	{
		ecnetnes += (sentence.at(n - 1));
	}
	cout << ecnetnes << endl;
	system("pause");
	return 0;

}

string reverse(string line)
{
	string invert_line = "";
	for (int n = line.length(); n > 0; n--)
	{
		invert_line += (line.at(n - 1));
	}
	return invert_line;
}

