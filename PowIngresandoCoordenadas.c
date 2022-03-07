int main()
{

    //coordenadas del punto P1 = (x1,y1)
    int x1;
    int y1;
    //coordenadas del punto P2 = (x2,y2)
    int x2;
    int y2;

    printf("Ingrese las coordenadas de la sucursal\n");
    printf("x1 : ");
    scanf("%d",&x1);
    printf("\ny1 : ");
    scanf("%d",&y1);


    printf("\nIngrese las coordenadas del destino\n");
    printf("x2 : ");
    scanf("%d",&x2);
    printf("\ny2 : ");
    scanf("%d",&y2);

        float dist;
    dist = pow( pow(x1-x2,2) + pow(y1-y2,2) ,0.5);

    printf("El resultado es : %.2f ",dist);


    return 0;
}
