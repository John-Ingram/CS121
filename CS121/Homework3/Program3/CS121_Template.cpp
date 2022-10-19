//
// Program 3
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main(void)
{
	string binary;
	long long unsigned int result = 0;
	cout << "Enter a number in binary to convert it to decimal.\n"
		 << "Make sure the result will fit into an unsinged long long int: ";
	cin >> binary;
	for (int i = 0; i <= binary.length(); i++)
	{
		if (binary[i] == '1') result += pow(2, binary.length() - (i+1));
	}
	cout << endl << "Decimal: " << result << endl;
	system("pause");
	return 0;
}