#include <iostream>

using namespace std;

int uczniowie, cukierki,x,y;

 int  main(int argc, char const *argv[]) 
 {
   cout << "Ilu uczniow jest w twoej klasie:";
   cin >> uczniowie;
   
   cout << "Ile cukierkow kupila mama:";
   cin>>cukierki;

   x = cukierki/(uczniowie-1);
   cout<<"Cukierkow dla kazdego ucznia:"<<x<<endl;

   y = cukierki-x*(uczniowie-1);
   cout<<"Dla Jasia na wieczor:"<<y<<endl;

   return 0;
 }
