#include <stdio.h>
int main() 
 {
  int cantHamburguesas  ;
  int cantPapasFritas ;
  int cantGaseosas  ;
  int cantHelado    ;
  int cantEnsalada  ; 
  int precio;
  int cantTotal;
  float precioConDescuento;
  
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
    return 0;
 }
