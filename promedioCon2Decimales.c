// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int contador=0;
    float acumulador=0;
    float nota;
    float promedio;
    
    printf ("ingrese una nota: ");
    scanf ("%f", &nota);
    
    while (nota !=0){
        acumulador= acumulador + nota;
        contador= contador + 1;
        
        printf ("acumulador actual es: %.2f", acumulador);
        
        printf ("\ncontador es: %d", contador);
        
        printf ("\ningrese una nota: ");
        scanf ("%f", &nota);    
    }
    promedio= acumulador / contador;
    printf ("el promedio es %.2f", promedio);
    
    
    return 0;
}
