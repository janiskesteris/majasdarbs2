#include <iostream>
#include "Forma.h"
#include "Taisnsturis.h"
#include "Kvadrats.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Forma *formas[2];
    formas[0] = new Kvadrats(43);
    formas[1] = new Taisnsturis(2);
//    formas[2] = new Poligons(3);
//    formas[3] = new Aplis(4);
//    formas[4] = new Ovals(5);
//    formas[5] = new Trijsturis(6);


    char key1; //izmanto string nevis char jo string ir papildfunkcijas ka piemeram key1.compare("2")==0 kas ir tas pats kas key=="2" vai
    //stoi(key1) kas parversh string to int
    int loop1 = 1;
    while(loop1)//programma nekad nebeidzas kamer lietotajs neievada "q"
    {
        cout << "Izvelieties:" << endl;
        cout << "1: Kvadrats" << endl;
        cout << "2: Taisnsturis" << endl;
        cout << "q: Iziet no programmas" << endl;
        cin >> key1;
        if(key1 == 'q'){
            cout << "Beidz programmu!" << endl;
            loop1 = 0; //iziet no cikla un pabeidz programmu
        } else if(key1=='1'||key1=='2'||key1=='3'||key1=='4'||key1=='5'){
            int index1 = (int)key1-49; //index1 ir formas masiva raditajs ja key bija 1 (Kvadrats) tad raditajs un Kvadrata objektu masiva ir 0 jeb (key1-1)
            char key2;
            int loop2 = 1;
            while(loop2) //velviens ievades cikls kas piedava izvelni prieks konkretam formu darbibam
            {
                cout << "Izvelieties darbibu:" << endl;
                cout << "1: Iestatit" << endl;
                cout << "2: Display" << endl;
                cout << "3: Laukums" << endl;
                cout << "a: Atpakalj" << endl;
                cin >> key2;
                if(key2=='a'){ //a = atpakalj uz ieprieksejo ciklu
                    loop2 = 0;
                } else if(key2=='1'){
                    formas[index1]->iestatit(); //izmantojiet ieprieks iestatito masiva raditaju izveles formas objektu no masiva un izsauc iestatit() metodi
                } else if(key2=='2') {
                    formas[index1]->display();
                } else if(key2=='3') {
                    cout << "Laukums: " << formas[index1]->laukums() << endl;
                } else{
                    cout << "!!Nepareize izvele, meginiet velreiz!!" << endl;
                }
//                key2.clear();
                cin.clear();
            }
        } else{
            cout << "!!Nepareize izvele, meginiet velreiz!!" << endl;
        }
//        key1.clear();
        cin.clear();
    }
    return 0;
}
