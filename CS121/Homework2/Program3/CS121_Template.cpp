//
// Program 3
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

//HH:MM:SS AM/PM 
int main(void)
{
	int hour, minute, second, shift = 0;
	string dayNight;
	char seperator, restart;
	do
	{
		cout << "Enter the time you'd like to convert (HH:MM:SS AM/PM): ";
		cin >> hour >> seperator >> minute >> seperator >> second >> dayNight;
		if		(dayNight == "PM" && hour == 12)	shift = 0;
		else if (dayNight == "PM")					shift = 12;
		else if (dayNight == "AM" && hour == 12)	shift = -12;
		else if (dayNight == "AM")					shift = 0;
		else
		{
			cout << "Format not recognized" << endl;
			system("pause");
			return 1;
		}
		cout << hour + shift << ":" << minute << ":" << second << endl;
		cout << "Convert another value? Y/N" << endl;
		cin >> restart;
	} while (restart == 'Y');
	
	system("pause");
	return 0;
}

