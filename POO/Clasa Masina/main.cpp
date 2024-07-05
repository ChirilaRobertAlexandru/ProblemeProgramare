#include <iostream>
#include <cstring>
using namespace std;

class Masina 
{
private:
    char* numeMasina;
    int anFabricatieMasina;
    double pretMasina;
    static int numarMasini;

public:
    // Constructor implicit
    Masina() : numeMasina(nullptr), anFabricatieMasina(0), pretMasina(0.0)
    {
        numeMasina = new char[1];
        numeMasina[0] = '\0';
        numarMasini++;
    }

    // Constructor parametrizat cu validarea datelor
    Masina(const char* nume, int an, double pret) : anFabricatieMasina(an), pretMasina(pret)
    {
        if(nume != nullptr && strlen(nume)>0)
        {
            numeMasina = new char[strlen(nume) + 1];  // alocare corectă de memorie
            strcpy(numeMasina, nume);
        }
        else
        {
            numeMasina = new char[1];
            numeMasina[0] = '\0';
            cout<<"Nume masina invalid!";
        }
        
        if(an>1885)
        {
            anFabricatieMasina = an;
        }
        else 
        {
            cout<<"An fabricatie invalid!";
        }
        
        if(pret>0)
        {
            pretMasina = pret;
        }
        else
        {
            cout<<"Pret masina invalid!"<<endl;
        }
        numarMasini++;
    }

    // Constructor de copiere
    Masina(const Masina& masina) : anFabricatieMasina(masina.anFabricatieMasina), pretMasina(masina.pretMasina) 
    {
        numeMasina = new char[strlen(masina.numeMasina) + 1];
        strcpy(numeMasina, masina.numeMasina);
        numarMasini++;
    }

    // Destructor
    virtual ~Masina() 
    {
        delete[] numeMasina;
    }

    // Metodă pentru afișarea detaliilor mașinii
    virtual void afiseazaMasina(ostream& out) const
    {
        out << "Nume: " << numeMasina << ", An: " << anFabricatieMasina << ", Pret: " << pretMasina;
    }
    
    //Seters
    void setNumeMasina(const char* nume)
    {
        delete[] numeMasina;
        numeMasina = new char[strlen(nume)+1];
        strcpy(numeMasina, nume);
    }
    
    void setAnFabricatieMasina(int an)
    {
        anFabricatieMasina = an;
    }
    
    void setPretMasina(double pret)
    {
        pretMasina = pret;
    }
    
    //getters
    
    const char* getNumeMasina() const
    {
        return numeMasina;
    }
    
    int getAnFabricatieMasina() const
    {
        return anFabricatieMasina;
    }
    
    double getPretMasina() const
    {
        return pretMasina;
    }
    
    friend ostream& operator<<(ostream& out,const Masina& masina)
    {
        masina.afiseazaMasina(out);
        return out;
    }
    
    static int getNumarMasini()
    {
        return numarMasini;
    }
};

class MasinaElectrica: public Masina
{
private:
    int autonomieMasina;
    bool selfDrive;
public:
    MasinaElectrica() : Masina(), autonomieMasina(0), selfDrive(false){}
    MasinaElectrica(const char* nume, int an, double pret, int autonomie, bool selfD) : Masina(nume,an,pret), autonomieMasina(autonomie), selfDrive(selfD){}
    MasinaElectrica(const MasinaElectrica& masina) : Masina(masina), autonomieMasina(masina.autonomieMasina), selfDrive(masina.selfDrive){}
    ~MasinaElectrica(){}
    void afiseazaMasina(ostream& out) const override
    {
        Masina::afiseazaMasina(out);
        out<<", Autonomie: "<<autonomieMasina<<", Self Drive: "<<selfDrive<<endl;
    }
};

int Masina::numarMasini = 0;

int main() {
    MasinaElectrica m1("Dacia", 2022, 15000, 200, false);
    cout<<m1;
    return 0;
}
