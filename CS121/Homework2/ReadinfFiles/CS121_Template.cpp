//
// Open and read temps.txt file
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	float temp_c;
	ifstream infile;
	infile.open("C:/Temp/temps");
	if (!infile)
	{
		cout << "Error. Not able to open file.";
		system("pause");
		return(3);
	}
	cout << "File opened for read." << endl;
	cout << fixed << setprecision(1);
	while (!infile.eof())
	{
		infile >> temp_c;
		cout << temp_c << endl;
	}
	infile.close();
	system("pause");
	return 0;
}

