//
// 
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

float cToF(float celsius);
float cToK(float celsius);

int main(void)
{
	float temp_c;
	ifstream infile;
	ofstream outfile;
	infile.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework2/Program4/Temps.txt");
	outfile.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework2/Program4/Table.txt");
	if (!infile)
	{
		cout << "Error. Not able to open input file.";
		system("pause");
		return(3);
	}
	if (!outfile)
	{
		cout << "Error. Not able to open input file.";
		system("pause");
		return(3);
	}
	cout << "Files opened" << endl;

	outfile << left << fixed << setprecision(2) << setw(12) << "Celsius"
			<< setw(12) << "Farenheit" << setw(12) << "Kelvin" << endl;
	while (!infile.eof())
	{
		infile >> temp_c;
		outfile << setw(12) << temp_c << setw(12) << cToF(temp_c)
				<< setw(12) << cToK(temp_c) << endl;
	}
	cout << "Processing complete" << endl;
	infile.close();
	outfile.close();
	cout << "Files closed" << endl;
	system("pause");
	return 0;
}

float cToF(float celsius)
{
	return 9.0f / 5.0f * celsius + 32.0f;
}

float cToK(float celsius)
{
	return celsius + 273.15f;
}


