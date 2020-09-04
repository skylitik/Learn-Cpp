#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

float x, y;
int inp;

int main()
{
    for(;;)
    {
    cout<<"Please input first number: "<<endl;
    cin>>x;
    cout<<"PLease input second number: "<<endl;
    cin>>y;

    cout<<endl;
    cout<< "MENU" <<endl;
    cout<< "---------------"<<endl;
    cout<< "1. Addition"<<endl;
    cout<< "2. Substraction"<<endl;
    cout<< "3. Multiplication"<<endl;
    cout<< "4. Division"<<endl;
    cout<< "5. End of the program"<<endl;

    cout<<"Choose action: "<<endl;
    cin>>inp;

    switch(inp)
    {
        case 1: 
        {
            cout<<"Equals = "<<x+y;
        }
        break;
        case 2:
        {
            cout<<"Equals = "<<x-y;
        }
        break;
        case 3:
        {
            cout<<"Equals = "<<x*y;
        }
        break;
        case 4:
        {
            if (y==0) cout<<"No Division!"<<endl;
            cout<<"Equals = "<<x/y;
        }
        break;
        case 5:
        {
            exit(0);
        }
        break;

        default: cout<<"Error";
    }
    getchar();getchar();
    system("clear");
    return 0; 
    }
}