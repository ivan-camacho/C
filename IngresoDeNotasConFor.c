#include<stdio.h>
int main()
{
    int nota;
    int acumuladorNotas = 0;
    float promedioNotas;

    for(int i =1;i<=4;i++)
    {
        printf("\n El valor del indice i es : %d \n",i);
        printf("Ingrese la nota del alumno %d \n",i);
        scanf("%d",&nota);
        acumuladorNotas = acumuladorNotas + nota;
    }
    promedioNotas = acumuladorNotas/4;
    printf("El promedio de las 4 notas ingresadas es : %.1f ",promedioNotas);
}
