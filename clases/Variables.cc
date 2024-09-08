#include <iostream> 
#include <climits>
using namespace std ; 

int main () {

    /*float SalarioAnual ; // LOS CODIGOS SE LEEN DE ARRIBA PARA ABAJO        

   
    cout << "Ingresa tu salario anual: " ;
    cin >> SalarioAnual ; 

    float SalarioMensual = SalarioAnual / 12 ;

    cout << "El total de tu salario mensual es: " << SalarioMensual ; */

    int Birthday = 2005 ; 
    double days = 2556 ; 
    char caracter = 'a' ; 
    bool MonthIsSeptember = true ; 

    cout << "El tamano de bites de int es " << sizeof(int) << endl ; // El size of determina cuanto es el tamano de bites de una variable sea cualquiera 
    cout << "El entero minimo es: " << INT_MIN << endl;
    cout << "El entero minimo es: " << UINT_MAX << endl;
    cout << "El tamano de bites de double es " << sizeof(double) << endl ;
    cout << "El tamano de bites de char es " << sizeof(char) << endl ;
    cout << "El tamano de bites de bool es " << sizeof(bool) << endl ;
     
    return 0 ; 
}