#ifndef ANGAJATI_H
#define ANGAJATI_H

#include "declaration.h"
#include "count.h"

class angajati : public count, public declaration
{
public:
    declaration e[50];
    int i, en;
    angajati();
    int pay, IDangajat, status3, status4;
    void readFromFile();
    void get_info();
    void show_info();
    void info_toti_angajatii();
    void total_angajati();
    ~angajati();

};

#endif // ANGAJATI_H
