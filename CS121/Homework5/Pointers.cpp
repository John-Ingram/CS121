//
// ointers
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	int number = 7, value = 5;
    int *address_number = 0;
    cout << "Number: " << number << endl;
    cout << "Adress of Number: "<< &number << endl;
    // Save address of number

    address_number = &number;
    cout << "adress_number: " << address_number << endl;
    cout << "*adress_number: " << *address_number << endl;
    cout << "&adress_number: " << &address_number << endl;
	system("pause");
	cin.get();
    return 0;
}

