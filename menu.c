// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int cantidadHamburguesa;
    int cantidadPapasFritas;
    int cantidadGaseosa;
    int cantidadHelado;
    int cantidadEnsalada;
    
    printf("**************MENU******************\n");
    printf("*PRODUCTO            PRECIO        *\n");
    printf("*HAMBURGUESA         $600          *\n");
    printf("*PAPAS FRITAS        $300          *\n");
    printf("*GASEOSAS            $250          *\n");
    printf("*HELADOS             $300          *\n");
    printf("*ENSALADAS           $200          *\n");
    printf("************************************\n");
    
    
    printf ("ingrese una cantidad de Hamburguesa: ");
    scanf ("%d", &cantidadHamburguesa);
    
     printf ("ingrese una cantidad de PapasFritas: ");
    scanf ("%d", &cantidadPapasFritas);
    
     printf ("ingrese una cantidad de Gaseosa: ");
    scanf ("%d", &cantidadGaseosa);

     printf ("ingrese una cantidad de Helado: ");
    scanf ("%d", &cantidadHelado);
    
     printf ("ingrese una cantidad deEnsalada: ");
    scanf ("%d", &cantidadEnsalada);
    
    int precio = cantidadHamburguesa*600 + cantidadPapasFritas*300 + cantidadGaseosa*250 + cantidadHelado*300 + cantidadEnsalada*200; 
    printf ("su precio final es %d", precio);
    return 0;
}
