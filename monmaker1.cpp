#include <iostream>
#include <cstdlib>


using namespace std;
int numMonth;

int main()
{
    cout << "Input number of month: " << endl;
    if (!(cin >> numMonth))
    {
        cerr<<"Its not number!";
        exit(0);
    }

    switch (numMonth)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "This month has 31 days!";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "This month has 30 days!";
            break;
        case 2:
        {
            int year;
            cout << "Input year: ";
            cin >> year;
if (((year%4==0) && (year%100 != 0)) || (year%400 == 0)) 
          cout << "This month has 29 days!";
          else cout << "This month has 28 days!" ;
          break;
          default: cout << "Please input correct number of the month";
        }
        
    }
    return 0;
}