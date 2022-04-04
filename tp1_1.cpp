#include <stdio.h>


int main (){

    printf ("Hola Mundo");

    int vble=10, *pVble;

    pVble = &vble;

    // Inciso f)
    printf("/n%d", *pVble);

    // Inciso g)
    printf("/n%d", pVble);

    // Inciso h)
    printf("/n%d", &vble);

    // Inciso i)
    printf("/n%d", &pVble);

    // Inciso j)
    printf("%d/n", sizeof(vble));

    return 0;
}