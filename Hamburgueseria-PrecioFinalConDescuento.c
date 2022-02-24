// Online C compiler to run C program online
#include <stdio.h>

/*
        Menu
hamburguesa precio = $300
papas fritas precio = $200
ensalada precio = $200
bebidas (unidad) precio = $180
helado precio = $120
*/
int main() {
  
    //const va a hacer que mi variable precio sea constante
    //precios
    const float precioHamburguesa = 300;   
    const float precioPapasFritas = 200;
    const float precioEnsalada = 200;
    const float precioBebidas = 180;
    const float precioHelado = 120;
    
    int cantHamburguesas;
    int cantPapasFritas;
    int cantEnsalada;
    int cantBebidas;
    int cantHelado;
    
    int cantidadTotal = cantHamburguesas + cantPapasFritas + cantEnsalada + cantBebidas + cantHelado;  
    
    float precioFinal = precioHamburguesa*cantHamburguesas + precioPapasFritas*cantPapasFritas + precioEnsalada*cantEnsalada + precioBebidas*cantBebidas + precioHelado*cantHelado; 
    
    
    if(cantidadTotal >= 5){
        
        float descuento = 0.1 * precioFinal;
        precioFinal = precioFinal - descuento;   
        printf("Precio final con descuento = $ %.2f",precioFinal);
        
    }else{
        
        printf("Precio final = %.2f",precioFinal);

    }
    printf("\nGRACIAS VUELVAS PRONTO!!");
    
    
    return 0;
}
