{
    
    //coordenadas del punto P1 = (x1,y1)
    int x1;
    int y1;
    //coordenadas del punto P2 = (x2,y2)
    int x2;
    int y2;
    
    printf("Ingrese las coordenadas del punto P1\n");
    printf("x1 : ");
    scanf("%d",&x1);
    printf("\ny1 : ");
    scanf("%d",&y1);
    
    
    printf("\nIngrese las coordenadas del punto P2\n");
    printf("x2 : ");
    scanf("%d",&x2);
    printf("\ny2 : ");
    scanf("%d",&y2);
    
    
    
        float dist;
    dist = pow( pow(2-1,2) + pow(1-3,2) ,0.5);
    
    printf("El resultado es : %.2f ",dist);
    
    
    return 0;
}
