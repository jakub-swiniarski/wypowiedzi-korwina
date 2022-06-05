#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <limits>
#include <string.h>

using namespace std;

class Korwin
{
    private:
    int x;
    string c[6], wypowiedz, czytaj;
    fstream plik;
    char a;
    public:
    void generuj();
    void wybor();
    void pokaz_zapisane();
    void wybor_menu();
    void wybor_his();
};
