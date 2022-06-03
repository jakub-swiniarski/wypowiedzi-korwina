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
    srand(time(NULL));
    x=rand()%22; //max 21 bo przesuwamy linie w dol o 1, wiec zaczynajac od 1 max bedzie 22
    plik.open("1.txt",ios::in);
    for(int i=0; i<x; i++)
    {
        getline(plik, linia); //tutaj przesuwamy linie o 1 w dol
    }
    cout<<linia;
    plik.close();
    plik.open("2.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, linia);
    }
    cout<<linia;
    plik.close();
    plik.open("3.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, linia);
    }
    cout<<linia;
    plik.close();
    plik.open("4.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, linia);
    }
    cout<<linia;
    plik.close();
    plik.open("5.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, linia);
    }
    cout<<linia;
    plik.close();
    plik.open("6.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, linia);
    }
    cout<<linia;
    return 0;
}
