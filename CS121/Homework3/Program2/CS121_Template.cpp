//
// Program 2
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	string input, output = "";
	cout << "Enter the text you'd like to flip: ";
	getline(cin, input);
	for (int i = input.length(); true ; i--)
	{
		if (input.find(' ', i) != string::npos)
		{
			output.append(input.substr(input.find(' ', i), input.length()));
			input.erase(input.find(' ', i), string::npos);
		}
		else if (input.find(' ', 0) == string::npos)
		{
			output.append(" ");
			output.append(input);
			break;
		}
	}
	output.erase(0, 1);
	cout << output << endl;
	system("pause");
	return 0;
}