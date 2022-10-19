//
// Program1d
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	ifstream infile;
	ofstream outfile;
	string removed = "UAHuntsville", line;

	infile.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework3/Program1a/UAH_sample.txt");
	outfile.open("C:/Users/j123j/Documents/GitHub/Sem1FreshmanYear/CS121/Homework3/Program1d/UAH_updated.txt");

	if (!infile)
	{
		cout << "Error. Not able to open input file.";
		system("pause");
		return(3);
	}
	if (!outfile)
	{
		cout << "Error. Not able to open output file.";
		system("pause");
		return(4);
	}

	while (!infile.eof())
	{
		getline(infile, line);
		
		int i = 0;
		do
		{
			i = line.find(removed, i);
			if (i < string::npos) line.erase(i+3, removed.length()-3);
		} while (i < string::npos);
		
		outfile << line << endl;
	}
	infile.close();
	outfile.close();
	cout << "Operation completed. Files closed." << endl;
	system("pause");
	return 0;
}

