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
	int number = 20;//base 10
	int oct_number = 077; //base 8
	int hex_number = 0xa14;// base 16

	cout << "Decimal number to recieve int in base 8 and 16: ";
	cin >> number;
	cout << setw(10) << "Decimal" << setw(10) << "Octal" << setw(14) << "Hexadecimal" << endl;
	cout << setw(10) << dec << number << setw(10) << oct << number << setw(14) << hex << number << endl;
	cout << "Enter an octal number: ";
	cin >> setbase(8); //inout will be cosidered octal
	cin >> oct_number;
	cout << setw(10) << dec << oct_number << setw(10) << oct << setw(10) << oct_number << setw(14) << hex << oct_number << endl;
	cout << "Enter a Hexadecimal number: ";
	cin >> setbase(16);
	cin >> hex_number;
	cout << setw(10) << dec << hex_number << setw(10) << oct << setw(10) << hex_number << setw(14) << hex << hex_number << endl;
	system("pause");
	return 0;
}

