#include <iostream>
#include <cstring>
using namespace std;

//Clasa Carte denumeste un nou tip de data denumit de utilizator
class Carte {
private:
    //Atribute
    char* titlu;
    char* autor;
    int anPublicatie;
    double pret;
public:
    //Metode
    //Constructor implicit cu lista de initializare
    Carte() :titlu(nullptr), autor(nullptr), anPublicatie(0), pret(0.0) {
        titlu = new char[1];      //alocare dinamica
        titlu[0] = '\0';

        autor = new char[1];
        autor[0] = '\0';
    }

    //Constructor cu parametrii cu validarea datelor
    Carte(const char* t, const char* a, int an, double p) {
        if (t != nullptr && strlen(t) > 0)
        {
            titlu = new char[strlen(t) + 1];
            strcpy_s(titlu, strlen(t)+1, t);
        }
        else
        {
            titlu = new char [1];
            titlu[0] = '\0';
            cout << "NUME INVALID! ";
        }

        if (a != nullptr && strlen(a) > 0)
        {
            autor = new char[strlen(a) + 1];
            strcpy_s(autor, strlen(a) + 1, a);
        }
        else
        {
            autor = new char [1];
            autor[0] = '\0';
            cout << "NUME INVALID! ";
        }

        if (an >= 0)
        {
            anPublicatie = an;
        }
        else
        {
            cout << "AN INVALID! ";
        }

        if (p >= 0)
        {
            pret = p;
        }
        else
        {
            cout << "PRET INVALID! ";
        }
    }

    //Contrustor de copiere
    Carte(const Carte& carte) : anPublicatie(carte.anPublicatie), pret(carte.pret) {
        titlu = new char[strlen(carte.titlu) + 1];
        strcpy_s(titlu, strlen(carte.titlu)+1, carte.titlu);

        autor = new char[strlen(carte.autor) + 1];
        strcpy_s(autor, strlen(carte.autor)+1, carte.autor);
    }

    //Destructor
    virtual ~Carte() {};

    //Getere pentru fiecare atribut
    const char* getTitlu() const {
        return titlu;
    }

    const char* getAutor() const {
        return autor;
    }

    int getAnPublicatie() const {
        return anPublicatie;
    }

    double getPret() const {
        return pret;
    }

    //Settere pentru fiecare atribut
    void setTitlu(const char* t) {
        delete[] titlu;
        titlu = new char[strlen(t) + 1];
        strcpy_s(titlu,strlen(t)+1, t);
    }

    void setAutor(const char* a) {
        delete[] autor;
        autor = new char[strlen(a) + 1];
        strcpy_s(autor, strlen(a)+1, a);
    }

    void setAnPublicatie(int an) {
        anPublicatie = an;
    }

    void setPret(double p) {
        pret = p;
    }

    //Suprascriere operator <<
    friend ostream& operator<<(ostream& out, const Carte& c) {
        out << "Titlu: " << c.titlu << ", Autor:" << c.autor << ", An Publicatie: " << c.anPublicatie << " ,Pret: " << c.pret << endl;
        return out;
    }
};

class Biblioteca{
private:
    Carte* carti;       //atribut de tip Carte
    int nrCarti;        //Declaram o variabilă pentru a număra cărțile din bibliotecă, reprezintă numărul curent de cărți din tablou
    int capacitate;     //Declaram o variabilă pentru capacitatea maximă a tabloului, reprezintă capacitatea totală a tabloului carti
public:
    Biblioteca(int capacitateInitiala = 10) :nrCarti(0), capacitate(capacitateInitiala) {
        carti = new Carte[capacitate];
    }

    ~Biblioteca() {
        delete[] carti;
    }

    //Metoda de a adauga o carte
    void adaugaCarte(const Carte& c) {
        if (nrCarti == capacitate) { //verifica daca s-a ajuns la capacitatea maxima
            capacitate = capacitate * 2;
            Carte* temp = new Carte[capacitate];    //realocam memorie pentru ca e nevoie de mai mult spatiu
            for (int i = 0; i < nrCarti; i++) {     //pastram toate datele in temp
                temp[i] = carti[i];                 //temp primeste fiecare carte din carti
            }
            delete[] carti;     //eliberare spatiu de momerie
            carti = temp;       //variabila carti pointeaza spre temp care contine cartile precedente + spatiu de stocare in plus pentru viitoarele carti
        }
        carti[nrCarti++] = c;   //adugam cartea noua
    }

    //Metoda de eliminare a unei carti din biblioteca dupa titlu
    void eliminareCarte(const char* t) {
        for (int i = 0; i < nrCarti; i++) {
            if (strcmp(carti[i].getTitlu(), t) == 0) {
                for (int j = i; j < nrCarti - 1; j++) {
                    carti[j] = carti[j + 1];
                }
                nrCarti--;
                break;
            }
        }
    }

    //Metoda de afisare a cartilor din biblioteca
    void afiseazaCarti() const {
        for (int i = 0; i < nrCarti; i++) {
            cout << carti[i] << endl;
        }
    }

    //Metoda de cautare a unei carti dupa titlu
    const Carte* cautaCarte(const char* titlu) {
        for (int i = 0; i < nrCarti; i++)
        {
            if (strcmp(carti[i].getTitlu(), titlu) == 0) {
                return &carti[i];
            }
        }
        return nullptr;
    }
};

int main()
{
    Biblioteca biblioteca;
    Carte carte1("Titlu1", "Autor1", 2000, 32);
    Carte carte2("Titlu2", "Autor2", 2010, 34);
    Carte carte3("Titlu3", "Autor3", 2020, 12);

    biblioteca.adaugaCarte(carte1);
    biblioteca.adaugaCarte(carte2);
    biblioteca.adaugaCarte(carte3);

    cout << "Toate cartile din biblioteca:" << endl;
    biblioteca.afiseazaCarti();

    cout << "Cautare carte dupa titlu:" << endl;
    cout<<*(biblioteca.cautaCarte("Titlu2"));

    return 0;
}