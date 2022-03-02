// Online C compiler to run C program online
#include <stdio.h>

int main() {
         float acumulador = 0;
          int    contador = 0;
          float nota ;
          float promedio; 
          
          printf("ingrese la nota del alumno ");
          scanf ("%f",&nota);
          
          while (nota!=0){ 
          acumulador = acumulador + nota;
          contador = contador + 1;
          printf("ingrese la nota del alumno ");
          scanf ("%f",&nota);
          }
          promedio = acumulador / contador;
          printf ("el promedio de los alumnos es %.2f",promedio);
          
          
    return 0;
}
