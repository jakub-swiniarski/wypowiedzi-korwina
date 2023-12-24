#include <iostream>
#include <time.h>
#include <fstream>
#include <string.h>
#include "korwin.h"

using namespace std;

void Korwin::wybor_his()
{
    cin>>a;
    switch(a)
    {
        case '1':
        wyczysc.open("zapisane_wypowiedzi.txt", ofstream::out | ofstream::trunc);
        wyczysc.close();
        cout<<"WYCZYSZCZONO HISTORIE"<<endl;
        exit(0);
        break;
        case '2':
        exit(0);
        break;
        default:
        cout<<"Blad: niepoprawny wybor. Sprobuj ponownie."<<endl;
        wybor_his();
        break;
    }
}

void Korwin::pokaz_zapisane()
{
    cout<<"HISTORIA"<<endl;
    cout<<"---------"<<endl;
    plik.open("zapisane_wypowiedzi.txt",ios::in);
    for(int i=1; i>0;)
    {
        getline(plik, czytaj);
        if(czytaj.length()==0)
        {
            i--;
        }
        cout<<czytaj<<endl;
    }
    cout<<"---------"<<endl;
    cout<<"1. Resetuj historie     2. Wyjdz"<<endl;
    wybor_his();
}

void Korwin::generuj()
{
    srand(time(NULL));
    wypowiedz="";
    for(int i=1; i<=6; i++){
        string nazwa_pliku=to_string(i)+".txt";
        int x=rand()%22;
        plik.open(nazwa_pliku,ios::in);
        string c;
        for(int j=0; j<x; j++)
            getline(plik, c);
        wypowiedz+=c;
        plik.close();
    }
    cout<<wypowiedz<<endl;
    cout<<""<<endl;
    cout<<"Zapisac wypowiedz?"<<endl;
    cout<<"1. Tak     2. Nie"<<endl;
    wybor();
}

void Korwin::wybor()
{
    cin>>a;
    switch(a)
    {
        case '1':
        plik.open("zapisane_wypowiedzi.txt",ios::out | ios::app);
        plik<<wypowiedz<<endl;
        plik.close();
        exit(0);
        break;
        case '2':
        exit(0);
        break;
        default:
        cout<<"Blad: niepoprawny wybor. Sprobuj ponownie."<<endl;
        wybor();
        break;
    }
}

void Korwin::wybor_menu()
{
    cin>>a;
    switch(a)
    {
        case '1':
        generuj();
        break;
        case '2':
        pokaz_zapisane();
        break;
        case '3':
        exit(0);
        break;
        default:
        cout<<"Blad: niepoprawny wybor. Sprobuj ponownie."<<endl;
        wybor_menu();
        break;
    }
}
