#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <limits>
#include <string.h>
#include "korwin.h"

using namespace std;

int main()
{
    Korwin korwin;
    cout<<"GENERATOR WYPOWIEDZI KORWINA"<<endl;
    cout<<"1. GENERUJ"<<endl;
    cout<<"2. ZAPISANE WYPOWIEDZI"<<endl;
    cout<<"3. WYJDZ"<<endl;
    korwin.wybor_menu();
    return 0;
}
