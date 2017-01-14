#include "Kvadrats.h"
#include<cmath>

Kvadrats::Kvadrats(int id):Forma(id) //:Forma(id) id vertibu no inicializacijas nodod talak uz Forma klasi pec mantosanas principa
{
}

void Kvadrats::display(void) //dump no majasdarba noradijumiem
{
    cout << "***********Kvadrats***********" << endl;
    cout << "Malu Garums: " << this->maluGarums << endl;
    cout << "Origin koordinate x: " << this->x << endl;
    cout << "Origin koordinate y: " << this->y << endl;
    cout << "Linijas Biezums: " << this->lineWidth << endl;
    cout << "Linijas Krasa: " << this->lineColor << endl;
    cout << "******************************" << endl;
}

int Kvadrats::laukums(void)
{
    return pow(this->maluGarums,2);
}

void Kvadrats::iestatit(void) {
    cout << "Malu Garums:";
    cin >> this->maluGarums;
    cout << "origin koordinate x:";
    cin >> this->x;
    cout << "origin koordinate y:";
    cin >> this->y;
    cout << "Linijas Biezums:";
    cin >> this->lineWidth;
    cout << "Linijas Krasa:";
    cin >> this->lineColor;
}