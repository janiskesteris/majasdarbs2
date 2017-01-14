#include <iostream>
#include <string>

using namespace std;
#ifndef MAJASDARBS2_FORMA_H
#define MAJASDARBS2_FORMA_H


class Forma {
public:
    Forma(int id);
public:
    int x;
    int y;
    int lineWidth;
    string lineColor;
    string label;


protected:
    int id;

public:
    virtual void display(void) = 0; //no 3. lekcijas virtual un "= 0" iestata metodi ka abstraktu tas nozima ka Forma klasei pa tieso nevar izsaukt sis metodes.
    virtual void iestatit(void) = 0;
    virtual int laukums(void) = 0;
};


#endif //MAJASDARBS2_FORMA_H
