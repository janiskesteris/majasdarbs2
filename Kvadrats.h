#include "Forma.h"
#ifndef MAJASDARBS2_KVADRATS_H
#define MAJASDARBS2_KVADRATS_H


class Kvadrats : public Forma { //Kvadrats tiek mantots no Forma klases ar visam Forma klases pieeejamajam vertibam

public:
    Kvadrats(int id);

    void display();

    int maluGarums;

    int laukums(void);

    void iestatit(void);
};



#endif //MAJASDARBS2_KVADRATS_H
