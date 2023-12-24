#include <iostream>
#include <time.h>
#include <fstream>
#include <limits>
#include <string.h>

using namespace std;

class Korwin
{
    private:
    string wypowiedz, czytaj;
    fstream plik;
    ofstream wyczysc;
    char a;
    public:
    void generuj();
    void wybor();
    void pokaz_zapisane();
    void wybor_menu();
    void wybor_his();
};
