#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    arreglo = (int*)malloc(num *sizeof(int));
    if(arreglo != NULL){ // lo usamos el nulo para siber si malloc si imprimio
        printf("vector reservado \n\t[");
        ("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){ 
            printf("\t%d", *(arreglo +cont), *(arreglo +cont));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);   
        arreglo=NULL;     
    }
    return 0;
}