#include "angajati.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <bits/stdc++.h>
#include "member.h"
#include "declaration.h"
#include "count.h"
#include <fstream>


using namespace std;
ofstream outangajati("angajati.txt", ios::app);

angajati::angajati()

{
    IDangajat = 0;
    status3 = 0;
    status4 = 0;
}



void angajati::readFromFile()
{

    ifstream file("angajati.txt");
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, e[IDangajat].ID, ',');
            getline(ss, e[IDangajat].Nume, ',');
            getline(ss, e[IDangajat].Prenume, ',');
            getline(ss, e[IDangajat].Varsta, ',');
            getline(ss, e[IDangajat].Post, '.');
            IDangajat++;
            counter++;
        }
        file.close();
    }
}


void angajati::get_info()
{
    system("cls");
    int gasit;
    do
    {
        gasit =0;
        system("cls");
        cout << "Dati un Id unic pentru acest angajat: ";
        cin.ignore();
        getline(cin, e[IDangajat].ID);
        for(int i=0; i<IDangajat; i++)
        {
            if(e[IDangajat].ID == e[i].ID)
                gasit=1;
            i=IDangajat;
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
    cout << "Nume                 : ";
    getline(cin, e[IDangajat].Nume);
    cout << "Prenume              : ";
    getline(cin, e[IDangajat].Prenume);
    cout << "Varsta               : ";
    getline(cin, e[IDangajat].Varsta);
    cout << "Post                 : ";
    getline(cin, e[IDangajat].Post);
    outangajati<<e[IDangajat].ID<<",";
    outangajati << e[IDangajat].Nume<<",";
    outangajati << e[IDangajat].Prenume<<",";
    outangajati<<e[IDangajat].Varsta<<",";
    outangajati<<e[IDangajat].Post<<"."<<endl;
    IDangajat++;
    counter++;
}

void angajati::show_info()
{
    system("cls");
    int i;
    string n;
    cout << "Introduceti ID angajatului pe care-l cautati: ";
    cin >> n;
    system("cls");
    if(n == "0")
    {
        system("cls");
        cout << "OOPS!!!!"<< endl;
        cout << "Nu exista angajati, mergeti inapoi si introduceti-i";
    }

    else
    {
        for(i = 0; i < IDangajat; i++)
        {
            status3 = 0;
            if(n == e[i].ID)
            {
                status3 = 1;
                break;
            }
        }
        if(status3)
        {
            cout << "----------------------------------------------" << endl << endl;
            cout << "<1> ID angajat                 :" << e[i].ID << endl << endl;
            cout << "<2> Nume angajat               :" << e[i].Nume << endl << endl;
            cout << "<3> Prenume angajat               :" << e[i].Prenume << endl << endl;
            cout << "<4> Varsta angajat             :" << e[i].Varsta << endl << endl;
            cout << "<5> Post angajat               :" << e[i].Post << endl << endl;
            cout << "----------------------------------------------" << endl << endl;
        }
        else
        {
            cout << "ID-ul cautat nu a fost gasit. " << endl;
        }
    }
    system("pause");
}

void angajati::info_toti_angajatii()
{
    system("cls");
    int i;
    if(IDangajat == 0)
    {
        system("cls");
        cout << "OOPS!!!!" << endl << "Nu exista angajati, mergeti inapoi si introduceti-i";
    }
    else
    {
        cout << "-------------------------------------------------------------------------------------------------" << endl << endl;
        cout << "Lista toti angajatii" << endl << endl;
        cout << "-------------------------------------------------------------------------------------------------" << endl << endl;
        cout << "ID" << "\t\t" << "NUME" << "\t\t"<< "PRENUME" << "\t\t\t" << "VARSTA" << "\t\t\t" << "POST\n\n";

        for(i = 0; i < IDangajat; i++)
            cout <<e[i].ID <<"\t\t" <<e[i].Nume<<"\t\t" <<e[i].Prenume <<"\t\t\t" <<e[i].Varsta <<"\t\t\t" <<e[i].Post <<endl <<endl;

        cout <<"-------------------------------------------------------------------------------------------------" <<endl <<endl;
        cout <<"Apasati un buton pentru a merge inapoi...";
    }
    system("pause");

}

void angajati::total_angajati()
{
    system("cls");
    int i = counter;
    cout << "-----------------------------------------" << endl << endl;
    cout << "Numar de angajati: " << i << endl << endl;
    cout << "-----------------------------------------" << endl << endl;
    system("pause");

}

angajati::~angajati()
{
    //dtor
}
