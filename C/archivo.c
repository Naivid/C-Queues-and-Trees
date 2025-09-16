#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejemplo 1: Puntero a variable
Este ejemplo muestra cómo declarar una variable entera, obtener su dirección y almacenarla en un puntero. Luego se imprime el valor de la variable y el valor al que apunta el puntero.
- int x = 5; // Se declara una variable entera y se inicializa en 5
- int *p = &x; // Se declara un puntero a int y se le asigna la dirección de x
- printf(...) // Se imprime el valor de x y el valor al que apunta p (que es x)
*/
void ejemplo1() {
    int car = 3;
    int *p = &car;
    printf("Ejemplo 1: x = %d, *p = %d\n", car, *p);
}

/*
Ejemplo 2: Modificar variable usando puntero
Se muestra cómo modificar el valor de una variable a través de su puntero.
- int x = 10; // Variable entera
- int *p = &x; // Puntero a x
- *p = 20; // Se modifica el valor de x usando el puntero
- printf(...) // Se imprime el nuevo valor de x
*/
void ejemplo2() {
    int ej2 = 14;
    int *p = &ej2;
    *p = 20;
    printf("Ejemplo 2: x = %d\n", ej2);
}

/*
Ejemplo 3: Puntero a array
Se muestra cómo un puntero puede apuntar al primer elemento de un array.
- int arr[3] = {1, 2, 3}; // Array de enteros
- int *p = arr; // Puntero al primer elemento del array
- printf(...) // Se imprime el valor del primer elemento usando el puntero
*/
void ejemplo3() {
    char arr[3] = {'a', 'b', 'c'};
    int *p = arr;
    printf("Ejemplo 3: Primer elemento = %c\n", *p);
}

void ejemplo4() {
    int arr[3] = {10, 20, 30};
    int *p = arr;
    printf("Ejemplo 4: Array: ");
    for(int i = 0; i < 3; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main() {
    ejemplo1();
    ejemplo2();
    ejemplo3();
    ejemplo4();
    return 0;
}