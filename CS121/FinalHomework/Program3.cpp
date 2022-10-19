//
//
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct dateStruct
{
    unsigned int month, day, year;
};

struct timeStruct
{
    unsigned int hours, minutes, seconds;
};

struct idStruct
{
    string prefix = "";
    unsigned int number;
    string state = "";
};

struct entry
{
    idStruct id;
    float lat, longit, alt;
    dateStruct date;
    timeStruct time;
    float temp, prcp, wind, press;
};

bool contains(vector<unsigned int> array, unsigned int number);
void listStations(vector<entry> entries);
void stationDate(vector<entry> entries, idStruct id, dateStruct date);
float totalPRCP(vector<entry> entries, dateStruct date);


int main(void)
{
	ifstream dataFile;
    vector<entry> entries;
    string trash;
    char tempChar;


    dataFile.open("./Data.txt");
    if(!dataFile)
    {
        cout << "Unable to open Data File"<< endl;
        return 1;
    }
    getline(dataFile, trash);
    while(!dataFile.eof())
    {
        entry temp;
        for(int i = 0; i < 3; i++) // Populate 'Prefix'
        {
            dataFile >> tempChar;
            temp.id.prefix += tempChar;
        }
    
        dataFile >> temp.id.number;

        for(int i = 0; i < 2; i++) // Populate 'State'
        {
            dataFile >> tempChar;
            temp.id.state += tempChar;
        }

        dataFile >> temp.lat;
        dataFile >> temp.longit;
        dataFile >> temp.alt;

        dataFile >> temp.date.month;
        dataFile >> temp.date.day;
        dataFile >> temp.date.year;

        dataFile >> temp.time.hours;
        dataFile >> temp.time.minutes;
        dataFile >> temp.time.seconds;

        dataFile >> temp.temp;
        dataFile >> temp.prcp;
        dataFile >> temp.wind;
        dataFile >> temp.press;
        
        entries.push_back(temp);
        
    }
    dataFile.close();
    cout << "Data read. Select an operation (1-3): ";
    int operation;
    cin >> operation;
    cout << endl;
    if(operation == 1)
    {
        listStations(entries);
    }
    if(operation == 2)
    {

        idStruct tempID;
        dateStruct tempDate;
        cout << "Enter a station id: ";
        for(int i = 0; i < 3; i++) // Populate 'Prefix'
        {
            cin >> tempChar;
            tempID.prefix += tempChar;
        }
    
        cin >> tempID.number;

        for(int i = 0; i < 2; i++) // Populate 'State'
        {
            cin >> tempChar;
            tempID.state += tempChar;
        }

        cout << "Enter a Date (MM DD YYYY): ";
        cin >> tempDate.month;
        cin >> tempDate.day;
        cin >> tempDate.year;
        

        
        stationDate(entries, tempID, tempDate);
    }
    if(operation == 3)
    {
        dateStruct tempDate;
        cout << "Enter a Date (MM DD YYYY): ";
        cin >> tempDate.month;
        cin >> tempDate.day;
        cin >> tempDate.year;
        cout << endl;
        cout << "The total percipitation for that day is " << totalPRCP(entries, tempDate) << endl;

    }
    return 0;
}


void listStations(vector<entry> entries)
{
    vector<unsigned int> used;

    for(int i = 0; i < entries.size(); i++)
    {
        if(!contains(used, entries.at(i).id.number))
        {
            cout << "NWS" << setw(3) << setfill('0') << entries.at(i).id.number << "AL" << endl;
            cout << "Latitude:\tLongitude:\tAltitude:" << endl;
            cout << setw(9) << setfill(' ') << entries.at(i).lat << "\t";
            cout << setw(9) << setfill(' ') << entries.at(i).longit << "\t";
            cout << setw(9) << setfill(' ') << entries.at(i).alt << endl;
            used.push_back(entries.at(i).id.number);
        }
    }
}


bool contains(vector<unsigned int> array, unsigned int number)
{
    for(unsigned int i = 0; i < array.size(); i++)
    {
        if(array.at(i) == number) return true;
    }
    return false;
}

void stationDate(vector<entry> entries, idStruct id, dateStruct date)
{
    cout << "Hours: Minutes: Seconds: Temperature: Percipitation: Wind: Pressure: "<< endl;

    for(int i = 0; i < entries.size(); i++)
    {
        if(
            entries.at(i).id.number == id.number &&
            entries.at(i).id.prefix == id.prefix &&
            entries.at(i).id.state == id.state &&
            entries.at(i).date.day == date.day &&
            entries.at(i).date.month == date.month &&
            entries.at(i).date.year == date.year
        )
        {
            cout << setw(6) << entries.at(i).time.hours << " ";
            cout << setw(8) << entries.at(i).time.hours << " ";
            cout << setw(8) << entries.at(i).time.hours << " ";
            cout << setw(12) << entries.at(i).temp << " ";
            cout << setw(14) << entries.at(i).prcp << " ";
            cout << setw(5) << entries.at(i).wind << " ";
            cout << setw(9) << entries.at(i).press << " ";
            cout << endl;
        }
    }
}

float totalPRCP(vector<entry> entries, dateStruct date)
{
    float total = 0;
    for(int i = 0; i < entries.size(); i++)
    {
        if(
            entries.at(i).date.day == date.day &&
            entries.at(i).date.month == date.month &&
            entries.at(i).date.year == date.year
        )
        {
            total += entries.at(i).prcp;
        }
    }

    return total;
}