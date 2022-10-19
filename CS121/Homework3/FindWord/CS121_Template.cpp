//
// Find Word in random string of chars
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	ifstream dictionary;
	string scramble;

	dictionary.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework2/Program5/Dictionary.txt");
	if (!dictionary)
	{
		cout << "Error. Not able to open file.";
		system("pause");
		return(3);
	}
	cout << "Enter a scramble" << endl;
	for(int p = 0; p <scramble.length();p++)

	system("pause");
	return 0;
}

