#include <iostream>

using namespace std;
class Bebe
{
public:
    void gatea()
    {
        cout << nombre << " gateando ..." << endl;
    }

    void cambia_nombre(const string &nom)
    {
        nombre=nom;
    }

    void imprime() const
    {
        cout << nombre << endl;
    }
protected:
    string nombre;
};
class Adulto : public Bebe 
{
public:
    void camina()
    {
        cout << nombre << " caminando ... " << endl;
    }
};

int main()
{
    Adulto papa;
    Bebe jr;
    jr.cambia_nombre("Luis");
    papa.cambia_nombre("Juan");

    jr.gatea();
    papa.camina();
    papa.gatea();

    return 0;
}
