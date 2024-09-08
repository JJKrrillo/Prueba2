#include <iostream>
using namespace std ; 

    struct Menu
    {
        double PrecioDelProducto ;
        string NombreDelaComida ; 
        int CantidadDeComida ; 

    };
    struct Persona {
        string Nombre ; 
        int edad ; 
        Menu menu ;
    } ; 

    void ImprimirMenu (Menu menu) {
        cout << "Comida ingresada: " << endl ; 
        cout << "Tipo de comida: " << menu.NombreDelaComida << endl ; 
         cout << "Precio del Producto : " << menu.PrecioDelProducto << endl ;  
        cout << "Cantidad de comida: " << menu.CantidadDeComida << endl ; 
    }

    void ImprimirPersona (Persona persona) {
        cout << "EL nomvbre de la persona es: " << persona.Nombre << endl ; 
        cout << "La edad de la persona es: " << persona.edad << endl ; 
        ImprimirMenu (persona.menu) ; 
    }
    
    
    
int main (int argc, char *argv[]) {

    Menu menu ; 
    menu.PrecioDelProducto = 2.50 ; 
    menu.NombreDelaComida = "Hamburguesa" ; 
    menu.CantidadDeComida = 2 ; 

    Menu menu2 ; 
    menu2.PrecioDelProducto = 4.50 ; 
    menu2.NombreDelaComida = "Alitas" ; 
    menu2.CantidadDeComida = 4 ; 

    double PrecioTotal = (menu.PrecioDelProducto * menu.CantidadDeComida) + (menu2.PrecioDelProducto * menu2.CantidadDeComida) ; 

    Persona persona ; 
    persona.Nombre = "Juan" ; 
    persona.menu = menu ; 
    persona.edad = 18 ; 

    Persona persona2 ; 
    persona2.Nombre = "Jose " ; 
    persona2.edad = 20 ; 
    persona2.menu = menu2 ; 


    ImprimirPersona (persona) ; 
    ImprimirPersona (persona2) ; 
    

    //ImprimirMenu (menu) ; 
   // ImprimirMenu (menu2) ; 

    cout << "El total de la Factura es: " << PrecioTotal << "$ " << endl  ;   
    cout << "Gracias por preferirnos " ; 

    return 0 ; 
}


