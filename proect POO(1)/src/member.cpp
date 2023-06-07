#include <iostream>
#include <chrono>
#include <thread>
#include <bits/stdc++.h>
#include "member.h"
#include "declaration.h"
#include "count.h"
#include <fstream>


using namespace std;
ofstream outmember("member.txt", ios::app);

member::member()
{
    memberid=0;
}
void member::readFromFile()
{


    ifstream file("member.txt");
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, m[memberid].ID, ',');
            getline(ss, m[memberid].Nume, ',');
            getline(ss, m[memberid].Prenume, ',');
            getline(ss, m[memberid].Varsta, ',');
            getline(ss, m[memberid].Addressa, ',');
            getline(ss, m[memberid].Contacte, '.');
            memberid++;
            counter++;
        }
        file.close();
    }
}


void member::get_info()
{
        int gasit;
        do
        {
            gasit =0;
            system("cls");
            cout << "Dati un Id unic pentru acest memberu: ";
            cin.ignore();
            getline(cin, m[memberid].ID);
            for(int i=0; i<memberid; i++)
            {
                if(m[memberid].ID == m[i].ID)
                    gasit=1;
            }
            if(gasit==1)
            {
                system("cls");
                cout<<"Atentie!"<<endl;
                cout<<"-----------------------"<<endl<<"ID-ul este deja folosit"<<endl<<"-----------------------"<<endl;
                system("pause");
            }
            else
                gasit=0;
        }
        while(gasit==1);
        cout << "Nume                      : ";
        getline(cin, m[memberid].Nume);
        cout << "Prenume                      : ";
        getline(cin, m[memberid].Prenume);
        cout << "Age                       : ";
        getline(cin, m[memberid].Varsta);
        cout << "Address                   : ";
        getline(cin, m[memberid].Addressa);
        cout << "Contact                   : ";
        getline(cin, m[memberid].Contacte);
        outmember<<m[memberid].ID<<",";
        outmember << m[memberid].Nume<<",";
        outmember << m[memberid].Prenume<<",";
        outmember << m[memberid].Varsta<<",";
        outmember << m[memberid].Addressa<<",";
        outmember << m[memberid].Contacte<<"."<<endl;
        memberid++;
        counter++;
    }

void member::show_info()
    {
        system("cls");
        string n;
        cout << "Introduceti id-ul membrului pe care-l cautati: ";
        cin >> n;
        system("cls");
        if(n == "0")
        {
            system("cls");
            cout << "OOPS!!!!"<< endl<< "Nota: Nici o inregistrare de afisat...";
        }
        else
        {
            int i;
            for(i = 0; i < memberid; i++)
            {
                status1 = 0;
                if(n == m[i].ID)
                {
                    status1 = 1;
                    break;
                }
            }

            if(status1)
            {
                cout << "----------------------------------------------" << endl << endl;
                cout << "ID Membru                   :" << m[i].ID << endl << endl;
                cout << "Nume membru                 :" << m[i].Nume << endl << endl;
                cout << "Prenume membru              :" << m[i].Prenume << endl << endl;
                cout << "Varsta membru               :" << m[i].Varsta << endl << endl;
                cout << "Adressa membrului           :" << m[i].Addressa << endl << endl;
                cout << "Contact membru              :" << m[i].Contacte << endl << endl;
                cout << "----------------------------------------------" << endl << endl;
            }
            else
            {
                cout << "ID inexistent" << endl;
            }
        }
        system("pause");
    }



void member::all_members_data()
    {
        system("cls");
        if(memberid == 0)
        {

            cout << "OOPS!!!!"<< endl<< "Nota: Nici o inregistrare de afisat...";
        }
        else
        {

            cout << "------------------------------------------------------------------------------------------" << endl << endl;
            cout << "  Lista tuturor membrilor" << endl << endl;
            cout << "------------------------------------------------------------------------------------------" << endl << endl;
            cout << "ID" << "\t" << "Nume" << "\t\t" << "Prenume" << "\t\t\t" << "Vrsta" << "\t\t\t" << "Contacte\n\n";

            for(int i = 0; i < memberid; i++)
                cout << m[i].ID << "\t" << m[i].Nume << "\t\t" << m[i].Prenume << "\t\t\t" << m[i].Varsta << "\t\t\t" << m[i].Contacte << endl << endl;

            cout << "------------------------------------------------------------------------------------------" << endl << endl;
        }
        system("pause");
    }

void member::total_members()
    {
        system("cls");
        cout << "-----------------------------------------" << endl << endl;
        cout << "Total membri inregistrati: " << counter<< endl<<endl;
        cout << "-----------------------------------------" << endl << endl;
        system("pause");
    }
member::~member()
{
    //dtor
}
