#ifndef DECLARATION_H
#define DECLARATION_H
#include <string>

using namespace std;
class declaration
{
    public:
    string ID;
    string Nume, Prenume, Varsta, Addressa, Contacte, TipAbonament,Post;
    declaration ();
    ~declaration();
};

#endif // DECLARATION_H
