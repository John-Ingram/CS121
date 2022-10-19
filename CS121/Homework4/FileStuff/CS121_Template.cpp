//
// 
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
bool filegood(fstream& file, string filename);

int main(void)
{
	fstream infile, outfile;
	float temp_F, temp_C, temp_k;
	string infilename, outfilename;
	cout << "Enter a path for outfile." << endl;
	getline(cin, outfilename);
	outfile.open(outfilename);
	if (!filegood(outfile, outfilename))
	{
		return 1;
	}
	cout << "Enter a path for infile." << endl;
	getline(cin, infilename);
	outfile.open(infilename);
	if (!filegood(infile, infilename))
	{
		return 2;
	}
	system("pause");
	return 0;
}

bool filegood(fstream& file, string filename)
{
	if (!file)
	{
		cout << "Unable to open file" << filename << endl;
		cout << "Cecha path and permaissions" << endl;
		system("pause");
		return false;
	}
	else
	{
		cout << "File " << filename << " was opened." << endl;
	}
}
