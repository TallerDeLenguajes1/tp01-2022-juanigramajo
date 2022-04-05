#include <stdio.h>


int main (){

    printf ("Hola Mundo");

    int vble=10, *pVble;

    pVble = &vble;

    // Inciso f) El contenido del puntero
    printf("\nEl contenido del puntero es: %d", *pVble);

    // Inciso g) La dirección de memoria almacenada por el puntero.
    printf("\nLa dirección de memoria almacenada por el puntero es: %p", pVble);

    // Inciso h) La dirección de memoria de la variable.
    printf("\nLa dirección de memoria de la variable es: %p", &vble);

    // Inciso i) La dirección de memoria del puntero.
    printf("\nLa dirección de memoria del puntero es: %p", &pVble);

    // Inciso j) El tamaño de memoria utilizado por esa variable usando la función sizeof()
    printf("\nEl tamaño de memoria utilizado por la variable: %lu \n", sizeof(vble));

    return 0;
}