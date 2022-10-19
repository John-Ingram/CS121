//
// This program illustrates printf like features in cout
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	double PI = 3.14159265;
	double proton_mass = 1.6726e-27;
	cout << "OUTPUT OPTIONS" << endl;
	cout << "PI in scientific format" << endl;
	cout << scientific;//Rurn on scientific notation
	cout << "PI = " << PI << endl;
	cout << "PM = " << proton_mass << endl;
	cout << fixed;//real number without scientific
	cout << "PI = " << PI << endl;
	cout << "PM = " << proton_mass << endl;
	cout << setprecision(4);//set field width and precision
	cout << "PI = " << PI << endl;
	cout << "PM = " << proton_mass << endl;
	cout << setw(10);//must be used for every variable
	cout << "PI = " << PI << endl;
	cout << setw(10);//will be overridden if precision is too great (default is 6)
	cout << "PM = " << proton_mass << endl;
	cout << showpoint();//Forces print of decimal point
	system("pause");
	return 0;
}