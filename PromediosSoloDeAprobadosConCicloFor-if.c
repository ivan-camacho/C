#include<stdio.h>
int main()
{
    int nota;
    int acumuladorNotas = 0;
    float promedioNotas;
    int contadorAprobados = 0;

    for(int i =1;i<=10;i++)
    {
        printf("\n El valor del indice i es : %d \n",i);
        printf("Ingrese la nota del alumno %d \n",i);
        scanf("%d",&nota);

        if(nota>=6){
            acumuladorNotas = acumuladorNotas + nota;
            //contadorAprobados = contadorAprobados + 1;
            contadorAprobados++;
        }

    }
    promedioNotas = acumuladorNotas/contadorAprobados;
    printf("El promedio de las %d notas aprobadas es : %.1f ",contadorAprobados,promedioNotas);
}
