#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;
int numbers;

int main()
{
    cout << "Welcome to lotto! For 3 seconds we begin" << endl;
    usleep(3000000);
    cout<<endl;
    srand(time(NULL));
    for (int i=1;i<=6;i++)
    {
    numbers = rand()%49+1;
    usleep(1000000);
    cout << numbers <<"\a"<< endl;
    }
    return 0;
}