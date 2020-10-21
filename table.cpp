#include <iostream>

using namespace std;

int main()
{
    
   string name;
   cout<<"What is your name: ";
   cin>>name;

   int lenght=name.length();
   
   if (name[lenght-1]=='a')
        cout<<"I think you are woman";
else cout<<"I think you are man";

    return 0;
}