// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int numero;
    
    printf("Hola , ingresa un numero : ");
    scanf("%d",&numero);
    
    if(numero!=0){
        
     if(numero>0){
        printf("\nEs positivo");
    }else{
        printf("\nEs negativo");
    }
    }else{
        printf("\nEs neutro");
    }
    
    
    return 0;
}
