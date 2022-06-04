#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <limits>
#include "korwin.h"

using namespace std;

void Korwin::generuj()
{
    system("cls");
    srand(time(NULL));
    x=rand()%22; //max 21 bo przesuwamy linie w dol o 1, wiec zaczynajac od 1 max bedzie 22
    plik.open("1.txt",ios::in);
    for(int i=0; i<x; i++)
    {
        getline(plik, c[0]); //tutaj przesuwamy linie o 1 w dol
    }
    plik.close();
    plik.open("2.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, c[1]);
    }
    plik.close();
    plik.open("3.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, c[2]);
    }
    plik.close();
    plik.open("4.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, c[3]);
    }
    plik.close();
    plik.open("5.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, c[4]);
    }
    plik.close();
    plik.open("6.txt",ios::in);
    srand(time(NULL));
    x=rand()%22;
    for(int i=0; i<x; i++)
    {
        getline(plik, c[5]);
    }
    wypowiedz=c[0]+c[1]+c[2]+c[3]+c[4];
    cout<<wypowiedz<<endl;
    cout<<""<<endl;
    cout<<"Zapisac wypowiedz?"<<endl;
    cout<<"1. Tak     2. Nie"<<endl;
    wybor();
}

void Korwin::wybor()
{
    a=_getch();
    switch(a)
    {
        case '1':
        plik.open("zapisane_wypowiedzi.txt",ios::out); //zapisywanie nie dziala :(
        plik<<wypowiedz<<endl;
        plik.close();
        exit(0);
        break;
        case '2':
        exit(0);
        break;
        default:
        cout<<"Blad: niepoprawny wybor. Sprobuj ponownie."<<endl;
        break;
    }
}
