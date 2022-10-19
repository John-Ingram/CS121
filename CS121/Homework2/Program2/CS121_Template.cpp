//
// Program 2
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	unsigned long long value = 0;
	cout << right << setw(2) << "n" << setw(25) << "VALUE OF 2^n" << endl;
	for (int n = 0; n <= 64; n++)
	{
		if (n == 0) value = 1;
		else
		{
			value = 2;
			for (int i = 0; i < n-1; i++) value *= 2;
		}
		cout << setw(2) << n << setw(25) << value << endl;
	}
	system("pause");
	return 0;
}

