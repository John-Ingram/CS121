//
// Program 4
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
//BMI = (weight in pounds) / (height in inches squared) * 703
float getBMI(float weight, float height);

int main(void)
{
	float weight, height;
	cout << fixed << setprecision(2);
	cout << "This program will calculate your BMI" << endl;
	cout << "Enter your weight in pounds: ";
	cin >> weight;
	cout << "Enter your height in inches: ";
	cin >> height;
	cout << "Your BMI is " << getBMI(weight, height) << endl;
	system("pause");
	return 0;
}

float getBMI(float weight, float height)
{
	return weight / pow(height, 2) * 703;
}

