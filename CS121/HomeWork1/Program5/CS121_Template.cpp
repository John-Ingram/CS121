//
// Program5
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	int numbers[50];
	for (int i = 0; i < 50; i++)
	{
		numbers[i] = rand() % 100;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int k = i * 10; k < (i + 1) * 10; k++)
		{
			cout << setw(2) << numbers[k] << ' ';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

