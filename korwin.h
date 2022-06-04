#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <fstream>
#include <limits>

using namespace std;

class Korwin
{
    private:
    int x;
    string c[6], wypowiedz;
    fstream plik;
    char a;
    public:
    void generuj();
    void wybor();
};
