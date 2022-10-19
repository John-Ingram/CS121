//
// Program1
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void)
{
	unsigned int maxWidth = 0, currentWidth, currentStars = 1;
	char star = '*', space = ' ';
	cout << "Enter the width of the pyramid you'd like to create (The number must be odd for propper formating): ";
	cin >> maxWidth;
	maxWidth++;
	for (currentWidth = maxWidth / 2; currentStars <= maxWidth; currentWidth--)
	{
		cout << setfill(space) << setw(currentWidth) << space << string(currentStars, star) << setfill(space) << endl;
		currentStars += 2;
	}
	system("pause");
	return 0;
}

