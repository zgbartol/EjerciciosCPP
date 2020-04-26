/*--------------------------------------------------------------------------------------------
Ejercicio 1 definir funciones que se llaman de main
--------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;





int NumerodeLetra(char Letra)
{
    char Caracter = 'A';
    int NumeroLetra = 1;
    while (Caracter != Letra)

    {
        Caracter++;
        NumeroLetra++;
    }
    return NumeroLetra;
}

int sumacaracteres(char Sumando1, char Sumando2)
{
    return NumerodeLetra(Sumando1)+NumerodeLetra(Sumando2);
}

int main()
{
    char Letra1, Letra2;

    cout << "Ingrese Letra 1"<< "\n";
    cin >> Letra1;
    cout << NumerodeLetra(Letra1)<< "\n";
    
    cout << "Ingrese Letra 2"<< "\n";
    cin >> Letra2;
    cout << NumerodeLetra(Letra2)<< "\n";


}
