// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    float acumulador = 0;
    int contador = 0;
    float nota;
    float promedio;
    
    printf("Ingrese nota de alumno : ");
    scanf("%f",&nota);
        
    /*WHILE  en español es MIENTRAS 
    WHILE(CONDICION){
        SE EJECUTA LO QUE ESTA ENTRE LLAVES
    }
    */
    
    
    
    
    
    while(nota!=0){
          
          acumulador =  acumulador + nota;
          printf("\nACUMULADOR = %.2f",acumulador);
          contador = contador + 1;
          printf("\nCONTADOR = %d",contador);
          
          printf("\nIngrese nota de alumno : ");
          scanf("%f",&nota);
          
    }
    
    promedio = acumulador / contador;
    printf("\nEl promedio del curso es %.2f",promedio);
    
    return 0;
}
