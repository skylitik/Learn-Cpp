#include <iostream>

using namespace std;

int main()
{
    string dixit;
    cout<<"Please give a word for reverse: "<<endl;
    cin>>dixit;

    int len = dixit.length();

    for (int i=len-1; i>=0; i--)
    {
        cout<<dixit[i];
    }
    return 0;
}