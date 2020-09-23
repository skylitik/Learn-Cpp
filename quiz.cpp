#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <unistd.h>

using namespace std;

string theme, nick;
string list[5];
string ansA[5], ansB[5], ansC[5], ansD[5];
string tru[5];
string answ;
int points=0;

int main()
{
    int n_line=1;
    string line;
    int n_quest = 0;

    fstream file;
    file.open("llama.txt" ,ios::in);

    if (file.good()==false)
    {
        cout<<"Can't open file!";
        exit(0);
    }

    while(getline(file, line))
    {
        switch (n_line)
        {
        case 1: theme=line;           break;
        case 2: nick=line;            break;
        case 3: list[n_quest] = line; break;
        case 4: ansA[n_quest] = line; break;
        case 5: ansB[n_quest] = line; break;
        case 6: ansC[n_quest] = line; break;
        case 7: ansD[n_quest] = line; break;
        case 8: tru[n_quest] = line;  break;
        }
        if (n_line==8) {n_line=2; n_quest++;}
        
        n_line++;
    }
    file.close();
cout<<endl<<theme<<endl;
cout<<endl<<nick<<endl;
    for (int i=0; i<=4; i++)
    {
        cout<<endl<<list[i]<<endl;
        cout<<"A. "<<ansA[i]<<endl;
        cout<<"B. "<<ansB[i]<<endl;
        cout<<"C. "<<ansC[i]<<endl;
        cout<<"D. "<<ansD[i]<<endl;

        cout<<"Youre answer: ";
        cin>>answ;

        transform(answ.begin(), answ.end(), answ.begin(), ::tolower);

        if (answ==tru[i])
        {
            cout<<"Good! You have a point!"<<endl;
            points++;
        } else cout<<"Bad! No point. The answer is: "<<tru[i]<<endl;

    }
    cout<<endl<<"The end! You have: "<<points<<" points, have fun!"<<endl;
    sleep(300000);

    return 0;
}