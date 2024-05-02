#include<iostream>
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

       int getDaysInMonths()
       {
         if(month == 2)
         {
           if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
             return 29;  //Leap year
           else
             return 28;
         }
         else if(month == 4 || month == 6 || month == 9 || month == 11)
           return 30;
           else
           return 31;
         }

