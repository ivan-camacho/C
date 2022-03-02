// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int cantPapasfritas ;
    int cantGaseosa ;
    int cantHelado;
    int CantEnsalada ;
    
  printf("**************menu*******\n");
  printf("*producto    precio    *\n");
  printf("*hamburguesa  $600     *\n");
  printf("*papas fritas  $300     *\n");
  printf("*gaseosa      $250     *\n");
  printf("*helado       $300     *\n");
  printf("*ensalada     $200     *\n");
  printf("********************** *\n");
  {
      int cantHamburguesa ;
  printf("ingrese cantidad de hamburguesa");
  scanf("%d,&cantHamburguesa") ;
    printf("ingrese cantidad de papasfritas");
  scanf("%d,&cantPapasfritas") ;
    printf("ingrese cantidad de gaseosa");
  scanf("%d,&cantGaseosa") ;
    printf ("ingrese cantidad de helado");
  scanf("%d,&cantHelado") ;
    printf("ingrese cantidad de ensalada");
  scanf("%d,&cantEnsalada") ;
  cuenta total="cantHamburgesa*$600+cantPapasfritas*$300+cantGaseosa*$250+cantHelado*$300+cantEnsalada*$200";
  printf("tu cuenta total es %d,cuentatotal")
  
  }
    return 0;
}
