#include <iostream>

using namespace std;

float marks[5]; float sum=0, middle;

int main()
{
    for(int i=0; i<5; i++)
    {
        cout<<endl<<"Give a "<<i+1<<" mark: ";
        cin>>marks[i];
        sum +=  marks[i];
    }
    middle = sum / 5;
    cout<<endl<<"middle is = "<<middle<<endl;
    return 0;
}