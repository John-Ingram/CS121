//
// Program 2
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
	float start = 0, increment = 0, finalTemp = 0;
	printf("Enter a starting temperature in degrees Celsius: ");
	scanf_s("%f", &start); 
	printf("Enter an ending temperature in degrees Celsius: ");
	scanf_s("%f", &finalTemp);
	printf("Enter the increment between temperatures in degrees Celsius: ");
	scanf_s("%f", &increment);

	printf("Celsius  Farenheit  Kelvin\n");
	//8 11 8
	for (float current = start; current <= finalTemp; current += increment)
	{
		printf("%-10.2f", current);
		printf("%-10.2f", cToF(current));
		printf("%-8.2f", cToK(current));
		printf("\n");
	}

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