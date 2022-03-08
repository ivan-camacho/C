#include <stdio.h>
#include <math.h>

int main()
{
    int ingresoPedido;
    int cantHamburguesas;
    int cantPapasFritas;
    int cantGaseosas;
    int cantHelado;
    int cantEnsalada;
    int precio;
    int cantTotal;
    float precioConDescuento;

    printf("DESEA INGRESAR UN PEDIDO? \n");
    printf("SI ,INGRESE 1\n");
    printf("NO ,INGRESE 0\n");
    scanf("%d",&ingresoPedido);

    while(ingresoPedido==1)
    {
    printf("************MENU**************\n");
    printf("*PRODUCTO         PRECIO     *\n");
    printf("*Hamburguesas      $600      *\n");
    printf("*Papas Fritas      $300      *\n");
    printf("*Gaseosa           $250      *\n");
    printf("*Helado            $300      *\n");
    printf("*Ensalada          $200      *\n");
    printf("******************************\n");

    printf("ingrese la cantidad de hamburguesas : ");
    scanf("%d",&cantHamburguesas);

    printf("ingrese la cantidad de Papas Fritas : ");
    scanf("%d",&cantPapasFritas);

    printf("ingrese la cantidad de Gaseosas : ");
    scanf("%d",&cantGaseosas);

    printf("ingrese la cantidad de Helado : ");
    scanf("%d",&cantHelado);

    printf("ingrese la cantidad de Ensalada : ");
    scanf("%d",&cantEnsalada);

    precio = cantHamburguesas*600 + cantPapasFritas*300 + cantGaseosas*250 + cantHelado*300 + cantEnsalada*200;

    cantTotal = cantHamburguesas + cantPapasFritas + cantGaseosas + cantHelado + cantEnsalada;

    //coordenadas del punto P1 = (x1,y1)
    int x1;
    int y1;
    //coordenadas del punto P2 = (x2,y2)
    int x2;
    int y2;

    printf("Ingrese las coordenadas de la sucursal \n");
    printf("x1 : ");
    scanf("%d",&x1);
    printf("\n y1 : ");
    scanf("%d",&y1);


    printf("\nIngrese las coordenadas del destino \n");
    printf("x2 : ");
    scanf("%d",&x2);
    printf("\n y2 : ");
    scanf("%d",&y2);

    float dist;
    dist = pow( pow(x1-x2,2) + pow(y1-y2,2) ,0.5);

    printf("La distancia es : %.2f ",dist);
    printf("\n");

    float CostoDelivery = dist*70;
    printf("El costo de Delivery es: %.2f \n",CostoDelivery);


  if(cantTotal>=5)
    {
    precioConDescuento = precio - 0.1*precio;
    printf("PRECIO FINAL (CON DESCUENTO): $%.2f",precioConDescuento);
    printf("\n");

    float total = precioConDescuento + CostoDelivery;
    printf("TOTAL: $%.2f",total);
    }

  else
    {
    printf("PRECIO FINAL : $%d",precio);
    }

    printf("\nDESEA INGRESAR UN PEDIDO? \n");
    printf("SI ,INGRESE 1\n");
    printf("NO ,INGRESE 0\n");
    scanf("%d",&ingresoPedido);

    }
    printf("Caja Cerrada\n");

    return 0;
}
