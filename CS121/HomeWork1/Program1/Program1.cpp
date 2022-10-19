//
// Program 1
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

float returnR();
float returnS();
float returnT();

int main(void)
{
	printf("R = %f\n", returnR());
	printf("S = %f\n", returnS());
	printf("T = %f\n", returnT());
	return 0;
}

float returnR()
{
	float x = 3.37f;
	return((3 * pow(x, 2)) + (5 * x) + 1);
}

float returnS()
{
	float x = 9.385f;
	return((pow(x, 2) - 12 * x + 27) / pow(x - 6, 2));
}

float returnT()
{
	float x = 2.25f, y = 3.50f;
	return(((pow(x, 2) + 3) / pow(y, 3)) + ((x + 2) / pow(y, 2)) + (1 / y));
}