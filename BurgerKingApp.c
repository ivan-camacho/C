int main() /*Inicio de la funcion*/
{
    
int cantHamburguesas; /*Variable Cantidad de Hamburguesas*/

    printf("*** Pedido por aplicación de Burguer King ***\n");
    printf("\n");
    printf("Combo Hamburguesa Clásica       $379\n");
    printf("\n");
    printf("ingrese la cantidad de hamburguesas : ");
    scanf("%d", &cantHamburguesas); /*scanf nos permite ingresar un valor nuevo a la variable cantHamburguesas*/
    
int precio = cantHamburguesas*379; /*Hace la multiplicacion de la cantidad de hamburgueas pedidas por el precio*/
    printf("Total: $%d", precio); /*nos imprimi el resultado final*/
}
