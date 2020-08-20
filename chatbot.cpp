#include <iostream>

using namespace std;
string name;
int age;

int main()
{
    cout << ". Hello! What is your name?:" << endl << "> ";
    cin >> name;
    cout << ". I glad to see you, " << name << "!" << endl
    << ". What is your age?:" << endl;
    cin >> age;
    if (age<16)
    {
        cout <<"You child, future is yours!" << endl;
    }
    else if ((age>=16)&&(age<18))
    {
        cout << "You are not adult jet..but you can drive a bicycle" << endl;
    }
    else if ((age>=18)&&(age<21))
    {
        cout << "You are adult and can work" << endl;
    }
    else if ((age=21)&&(age<=30))
    {
        cout<< "Time to party!!You can drink alkohol, but its to expensive if you don't have a work"<<endl;
    }
    else if(age>30)
    {
        cout<< "Enjoy your life, take a deep breath!"<< endl;
    }
    return 0;
}