#include<stdio.h>

int main (){

    int cantidadRemeras;
    int cantidadJean;
    int cantidadCamperas;
    int cantidadCalzas;
    int cantidadPolleras;
    for (int i = 1; i <=2;i++) {
        printf ("\n El valor del indice i es : %d\n",i);



    printf("************LAS LOCAS************\n");
    printf("*PRODUCTO            *PRECIO*****\n");
    printf("*Remera              *$2500******\n");
    printf("*Jean                *$5000******\n");
    printf("*campera             *$8000******\n");
    printf("*calzas              *$3000******\n");
    printf("*pollera             *$3500******\n");

    printf("\n Ingrese la cantidad de remeras: ");
    scanf("%d",&cantidadRemeras);
        printf("\n Ingrese la cantidad de Jean: ");
    scanf("%d",&cantidadJean);
        printf("\n Ingrese la cantidad de Camperas: ");
    scanf("%d",&cantidadCamperas);
        printf("\n Ingrese la cantidad de Calzas: ");
    scanf("%d",&cantidadCalzas);
        printf("\n Ingrese la cantidad de Polleras: ");
    scanf("%d",&cantidadPolleras);

    int precio = cantidadRemeras*2500+cantidadJean*5000+cantidadCamperas*8000+cantidadCalzas*3000+cantidadPolleras*3500;

    float preciototalCD;

    int totalcant = cantidadRemeras+cantidadJean+cantidadCamperas+cantidadCalzas+cantidadPolleras;
    printf("su cantidad total es %d\n",totalcant);

    int posXL = 2;
    int posYL = 3;
    int XP;
    int YP;
    printf ("'n Ingrese la coordenada en X de donde se realiza el envio");
    printf ("X : ");
    scanf ("%d",&XP);
    printf("\n Ingrese la coordenada en Y de donde se realiza el envio");
    printf("Y : ");
    scanf("%d",&YP);

    float dist;
    dist= pow (pow(posXL-XP,2) + pow (posYL-YP,2),0.5);
    printf("el resultado es  %.2f",dist);

    float precioEnvio = dist * 120;
    printf ("el resultado es :  %.2f",precioEnvio);



    if(totalcant>=5){
        preciototalCD = precio -0.25*precio;
        printf("\nEl precio total es $ %.2f",preciototalCD);

    }else{
        printf("Su precio final es %d",precio);
    }


    }
return 0;
}
