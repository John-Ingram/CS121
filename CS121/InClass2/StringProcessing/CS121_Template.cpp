//
// using getLine() for string processing
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	string sentence = " ";
	char answer = 'Y';
	do 
	{
		cout << "Enter a sentance." << endl;
		getline(cin, sentence); //Input a full line including spaces
		cout << sentence << endl;
		cout << "Do you have another sentence? Y/N ";
		cin >> answer;
	} while (answer == 'Y');
	
	system("pause");
	return 0;
}

