#include <stdio.h>


int cuadrado(int num);
void cuadradoVoid(int *num);
void mostrar(int a);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);


int main (){

    int a, b, cuad;

    printf("\n --- Ingresar dos números ---");
    printf("\nIngrese el primero: ");
    scanf("%d", &a);

    printf("\nIngrese el segundo: ");
    scanf("%d", &b);


    cuad = cuadrado(a);
    printf("\n\nEl cuadrado de %d es: %d", a, cuad);

    cuadradoVoid(&a);
    printf("\nEl cuadrado es: %d", a);

    mostrar(a);

    invertir(&a, &b);
    printf("\n\nInvertidos: %d, %d", a, b);

    ordenar(&a, &b);
    printf("\nOrdenados: %d, %d\n", a, b);

    return 0;
}


int cuadrado (int num) {

    return num * num;
}

void cuadradoVoid(int *num) {

   *num = (*num)*(*num);

}

void mostrar(int a) {

    printf("\n\nLa direccion de la variable es: %p", &a);
    printf("\nEl contenido de la variable es: %d ", a);

}

void invertir(int *a, int *b){

    int aux = *a;
    *a = *b;
    *b = aux;

}

void ordenar(int *a, int *b){

    if (*a > *b){
        invertir(a, b);
    }
    
}