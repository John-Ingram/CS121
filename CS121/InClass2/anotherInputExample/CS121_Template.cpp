//
// Another Input example
//
//YYYY.MM.DDPLXDC

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	unsigned int year, month, day;
	char prod_id; //P
	unsigned int factory_loc; //L
	char quality_flag;//X
	char inspector; //D
	char package_type; //C
	char dot;
	cout << "Product Code" << endl;
	cout << "Enter the product code as YYYY.MM.DDPLXDC" << endl;
	cin >> year >> dot >> month >> dot >> day >> factory_loc >> quality_flag 
		>> inspector >> package_type;

	system("pause");
	return 0;
}

