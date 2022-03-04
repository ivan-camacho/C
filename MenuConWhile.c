// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
  int ingresoPedido;
  int cantHamburguesas  ;
  int cantPapasFritas ;
  int cantGaseosas  ;
  int cantHelado    ;
  int cantEnsalada  ; 
  int precio;
  int cantTotal;
  float precioConDescuento;
    
    printf("DESEA INGRESAR UN PEDIDO? \n");
    printf("SI ,INGRESE 1\n");
    printf("NO ,INGRESE 0\n");
    scanf("%d",&ingresoPedido);
    
    while(ingresoPedido==1){
        
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
  
  if(cantTotal>=5){
    
    precioConDescuento = precio - 0.1 * precio; 
    printf("PRECIO FINAL (CON DESCUENTO): $%.2f",precioConDescuento);  
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
    printf("\nCaja Cerrada");
    return 0;
}
