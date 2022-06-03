#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <limits>

using namespace std;

int x;
string linia;
fstream plik;

int main()
{
    //rand i, cout word[i];
    srand(time(NULL));
    x=rand()%22;
    plik.open("1.txt",ios::in);
    for(int i=0; i<x; i++)
    {
        getline(plik, linia);
    }
    cout<<linia<<endl;
    return 0;
}
