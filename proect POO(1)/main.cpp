#include <iostream>
#include <chrono>
#include <thread>
#include <bits/stdc++.h>
#include "declaration.h"
#include "member.h"
#include "angajati.h"
#include "count.h"
#include <fstream>


using namespace std;


int main()
{
    int opt1,opt2,opt3,opt4;
    member ml;
    ml.readFromFile();
    angajati an;
    an.readFromFile();
    system("cls");
    cout << " _______________________________________________________________________________________ \n";
    cout << "|                                           		                                |\n";
    cout << "|                                           		                                |\n";
    cout << "|                                                                                       |\n";
    cout << "|                                       BUN VENIT!                                      |\n";
    cout << "|                                                                                       |\n";
    cout << "|                             ADMINISTRAREA UNEI SALI DE SPORT                          |\n";
    cout << "|                                                                                       |\n";
    cout << "|                                                                                       |\n";
    cout << "|   Realizat de: Verhovetchii Vadim  3121 a                                             |\n";
    cout << "|_______________________________________________________________________________________|\n";

    system("pause");
    string Parola;
    do
    {
        system("cls");
        cout <<"----------------------------------------------------"<<endl;
        cout <<"Audentificare...                      "<<endl<<endl;
        cout <<"                    LOGARE"<<endl<<endl;
        cout <<"                Parola:";
        cin >>Parola;
        cout<<endl;
        if(Parola != "admin")
        {
            cout<<" Ati introdus  parola gresit!"<<endl;
            cout <<"----------------------------------------------------"<<endl;
            system("pause");
            system("cls");
        }
    }
    while(Parola != "admin");


    cout<<"Ati realizat audentificarea cu succes!"<<endl;
    cout <<"----------------------------------------------------"<<endl;
    system("pause");
    system("cls");
    //MENIUL PRINCIPAL [MAINMENIU]
    do
    {
        system("cls");
        cout << "--------------------------------------------" << endl << endl;
        cout << "<1> Menu" << endl << endl;
        cout << "<0> Exit" << endl << endl;
        cout << "--------------------------------------------" << endl << endl;
        cout << "Alegeti o varianta:";
        cin >>opt1;
        switch(opt1)
        {
        case 1:
            do
            {
                system("cls");
                cout << "*** Bun venit! Main Menu: ***" << endl << endl;
                cout << "----------------------------------------------" << endl << endl;
                cout << "<1> Intrati in baza de date a membrilor" << endl << endl;
                cout << "<2> Intrati in baza de date a angajatilor" << endl << endl;
                cout << "<0> Go Back" << endl << endl;
                cout << "----------------------------------------------" << endl << endl;
                cout << "Alegeti o varianta:     ";
                cin >>opt2;
                switch(opt2)
                {
                case 1:
                    do
                    {
                        system("cls");
                        cout << "*** Baza de date a membrilor: ***" << endl << endl;
                        cout << "----------------------------------------------" << endl << endl;
                        cout << "<1> Adaugati informatii despre noul membru              " << endl << endl;
                        cout << "<2> Afisati informatiile despre membru              " << endl << endl;
                        cout << "<3> Detalii despre toti membrii      " << endl << endl;
                        cout << "<4> Nr tuturor membrilor            " << endl << endl;
                        cout << "<0> Mergi inapoi.                                   " << endl << endl;
                        cout << "----------------------------------------------" << endl << endl;
                        cout << "\Alege o optiune:";
                        cin >>opt3;
                        switch(opt3)
                        {
                        case 1:
                            ml.get_info();
                            break;
                        case 2:
                            ml.show_info();
                            break;
                        case 3:
                            ml.all_members_data();
                            break;
                        case 4:
                            ml.total_members();
                            break;
                        case 0:
                            system("pause");
                            system("cls");
                            break;
                        }

                    }
                    while(opt3!=0);
                    break;
                case 2:
                    do
                    {
                        system("cls");
                        cout << "*** Baza de date a Angajati: ***" << endl << endl;
                        cout << "----------------------------------------------" << endl << endl;
                        cout << "<1> Adaugati informatii despre noul angajat              " << endl << endl;
                        cout << "<2> Afisati informatiile despre angajat              " << endl << endl;
                        cout << "<3> Detalii despre toti angajatii      " << endl << endl;
                        cout << "<4> Numar tutal angajati            " << endl << endl;
                        cout << "<0> Mergi inapoi.                                   " << endl << endl;
                        cout << "----------------------------------------------" << endl << endl;
                        cout << "\Alege o optiune:";
                        cin >>opt3;
                        switch(opt3)
                        {
                        case 1:
                            an.get_info();
                            break;
                        case 2:
                            an.show_info();
                            break;
                        case 3:
                            an.info_toti_angajatii();
                            break;
                        case 4:
                            an.total_angajati();
                            break;
                        case 0:
                            system("pause");
                            system("cls");
                            break;
                        }

                    }
                    while(opt3!=0);
                    break;
                case 0:
                {
                    system("pause");
                    system("cls");
                    break;
                }
                }
            }
            while(opt2!=0);
            break;
        case 0:
            system("pause");
            system("cls");
            break;
        }
    }
    while(opt1!=0);

    return 0;
}
