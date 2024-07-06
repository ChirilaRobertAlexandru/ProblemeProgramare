#include <iostream>
#include <cstring>
using namespace std;

class Carte{
  private:
    //Atribute
    char* titlu;
    char* autor;
    int anPublicatie;
    double pret;
  public:
    //Metode
    //Constructor implicit cu lista de initializare
    Carte():titlu(nullptr), autor(nullptr), anPublicatie(0), pret(0.0){
        titlu = new char*[1];      //alocare dinamica
        titlu[0] = "\0";
        
        autor = new char*[1];
        autor[0] = "\0";
    }
    
    //Constructor cu parametrii cu validarea datelor
    Carte(cont char* t, const char* a, int an, double p){      
        if(t!=nullptr && strlen(t)>0)
        {
            titlu = new char[strlen(t)+1];
            strcpy(titlu,t);
        }
        else
        {
            titlu = new char*[1];
            titlu[0] = "\0";
            cout<<"NUME INVALID! ";
        }
        
        if(a!=nullptr && strlen(a)>0)
        {
            autor = new char[strlen(a)+1];
            strcpy(autor,a);
        }
        else
        {
            autor = new char*[1];
            autor[0] = "\0";
            cout<<"NUME INVALID! ";
        }

        if(an>=0)
        {
            anPublicatie = an;
        }
        else
        {
            cout<<"AN INVALID! ";
        }

        if(p>=0)
        {
            pret = p;
        }
        else
        {
            cout<<"PRET INVALID! ";
        }
    }
    
    //Contrustor de copiere
    Carte(const Carte& carte): anPublicatie(carte.an), pret(carte.p){
            titlu = new char[strlen(carte.titlu)+1];
            strcpy(titlu,carte.titlu);

            autor = new char[strlen(carte.autor)+1];
            strcpy(autor,carte.autor);
    }

    //Destructor
    virtual ~Carte(){};

    //Getere pentru fiecare atribut
    const char* getTitlu() const{
        return titlu;
    }

    const char* getAutor() const{
        return autor;
    }

    int getAnPublicatie() const{
        return anPublicatie;
    }

    double getPret() const{
        return pret;
    }

    //Settere pentru fiecare atribut
     void setTitlu(const char* t){
        detele[] titlu;
        tilu = new char[strlen(t)+1];
        strcpy(titlu, t);
     }

     void setAutor(const char* t){
        detele[] titlu;
        tilu = new char[strlen(t)+1];
        strcpy(titlu, t);
     }

     void setAnPublicatie(int an){
        anPublicatie = an;
     }

     void setPret(double p){
        pret = p;
     }

     friend ostream& operator<<(ostream& out, const Carte& c){
        out<<"Titlu: "<<c.titlu<<", Autor:"<<c.autor<<", An Publicatie: "<<c.anPublicatie<<" ,Pret: "<<c.pret<<endl;
        return out;
     } 
};

int main()
{


    return 0;
}