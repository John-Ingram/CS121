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
	string firstname, lastname;
	char initial;
	unsigned int employee_no;
	float wage, hours;
	double pay;
	char answer = 'Y';
	cout << fixed << setprecision(2);
	//Open a file for output
	ofstream outFile;//Declare a file pointer
	outFile.open("C:/Temp/employee.txt", ios::app);//ios::app appends to the file, creates it if the file does not exist
	//Test status of file open
	if (!outFile)
	{
		cout << "Unable to open output file" << endl;
		system("pause");
		return 1;
	}
	else
	{
		cout << "File opened for write" << endl;
	}
	cout << "Employee Database" << endl;
	do
	{
		cout << "Enter Employee Data" << endl;
		cout << "Last Name\tFirst Name\tInitial\tID\tWage\tHours" << endl;
		cin >> lastname >> firstname >> initial >> employee_no >> wage >> hours;
		outFile << setfill('.');//Set char to use as filler
		outFile << left << setw(20) << "Last Name:" << lastname << endl;
		outFile << setw(20) << "First Name: " << firstname << endl;
		outFile << setw(20) << "Initial: " << initial << endl;
		outFile << setw(20) << "Employee ID: " << employee_no << endl;
		outFile << setw(20) << "Wage: " << wage << endl;
		outFile << setw(20) << "Hours: " << hours << endl;
		pay = (double)wage * hours;
		outFile << setw(20) << "Pay: " << pay << endl << endl << endl;
		cout << "Do you want to enter another employee record? Y/N ";
		cin >> answer;
	} while (answer == 'Y');
	outFile.close();//Close output string to file
	//system("pause");
	return 0;
}