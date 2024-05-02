#include <iostream>
#include<iomanip>
using namespace std;

class Calendar
{
public:
    int year;
    int month;
    Calendar(int y, int m)
    {
        year=y;
        month=m;
    }

    int getDaysInMonth()
    {
        if (month==2)
        {
            if ((year % 4 ==0 && year %100 != 0) || (year % 400 == 0)) //If the entered year is a leap year//
                return 29; 
            else
                return 28; //If the entered year is not leap year//
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) //Foe even months having 30 days
            return 30;
        else
            return 31; //For odd months having 31 days
    }

    void displayCalendar()
    {
        cout << "-----------------------------" << endl;
        cout << "       " << getMonthName() << " " << year << endl;
        cout << "-----------------------------" << endl;
        cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;

        int startingDay = getStartingDay();
        int daysInMonth = getDaysInMonth();

        int day = 1;

        // Print leading spaces
        for (int i = 0; i < startingDay; i++)
        {
            cout << setw(4) << " ";
        }

        // Print the days of the month
        for (int i = 1; i <= daysInMonth; i++)
        {
            cout << setw(4) << day++;
            if ((i + startingDay) % 7 == 0 || i == daysInMonth)
                cout << endl;
        }

        cout << "-----------------------------" << endl;
    }

    int getStartingDay()
    {
        // Zeller's Congruence algorithm for days of week
        int h = (1 + getMonthCode() + getYearCode() + getCenturyCode()) % 7;
        return (h == 0) ? 6 : h - 1; // Convert 0 (Saturday) to 6
    }

    int getMonthCode()
    {
        //Retrun values from getMonthCode 
        static int monthCodes[] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};
        return monthCodes[month - 1];
    }

    int getYearCode()
    {
        int yearCode = year % 100;
        return (yearCode + yearCode / 4) % 7;
    }

    int getCenturyCode()
    {
        static int centuryCodes[] = {0, 6, 4, 2};
        int century = year / 100;
        return centuryCodes[century % 4];
    }

    string getMonthName()
    {
        static string monthNames[] = {"January", "February", "March", "April", "May", "June",
                                      "July", "August", "September", "October", "November", "December"
                                     };
        return monthNames[month - 1];
    }
};

int main()
{
    int year, month;
    cout << "Enter year : ";
    cin >> year;
    cout << "month : ";
    cin >> month;

    Calendar cal(year, month);
    cal.displayCalendar();

    return 0;
}
