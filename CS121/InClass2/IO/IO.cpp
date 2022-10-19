//
// This program illustrates the use of single dimensional arrays.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	double length, width, area, perimeter;
	cout << "Program to compute and output"
		<< " the area and preimeter"
		<< " of a rectangle." << endl;
	cout << "Enter length and width" << endl;	//length = 6.0;
	cin >> length >> width;						//width = 4.0;
	
	perimeter = 2 * length + 2 * width;
	area = length * width;
	cout << "Length = " << length << endl;//printf("Length = %6.2lf\nWidth = %6.2lf\nPerimeter = 6.2lf\n", length , width, perimeter);
	cout << "Width = " << width << endl;
	cout << "Area = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;
	cout << endl << endl;
	system("pause");
	return 0;
}