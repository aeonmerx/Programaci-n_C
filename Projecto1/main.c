#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Definición de constantes
#define Hello "This is the header file"
#define str "This is the string variable"

// Función para imprimir variables
int imprimirVariables() {
    printf("Variables\n");
    return 0;
}

int main() {
    // Llama a la función imprimirVariables
    imprimirVariables();

    /*
    Caracteres especiales:
     %s = Cadena de texto ""
     %d = Entero
     %f = Flotante
    */

    // Imprime texto con formato
    printf("This is  %s \n", "William"); // Comentarios
    printf("I am %d years old \n", 26);
    printf("The value of PI is %f \n", 3.1416);

    // Declaración de variables
    int age = 26;
    int month = 1;
    int year = 2024;
    float day = 12.0;
    int birthday = year - age;
    char Aleph = 'A';
    char Ejemplo[] = "Ejemplo aqui y alla";

    // Imprime valores de variables
    printf("The value of age is %d \n", age);
    printf("The value of month is %d \n", month);
    printf("The value of year is %d \n", year);
    printf("The value of day is %f \n", day);
    printf("The new variable is %s \n", str);
    printf("The variable Hello is %s \n", Hello);
    printf("The birthday is %d \n", birthday);

    // Cadena constante
    const char* strin = "This is a string variable";
    puts(strin);  // Imprime la cadena seguida de una nueva línea
    printf("Finally %s \n", Ejemplo);

    // Ciclos
    // Ciclo For
    printf("For Loop:\n");
    for (int i = 1; i <= 10; i++) {  // Inicia i en 1, se ejecuta mientras i sea menor o igual a 10, y se incrementa i en cada iteración
        printf("%d ", i);  // Imprime el valor de i seguido de un espacio
    }
    printf("\n");  // Imprime una nueva línea al final del ciclo

    // Ciclo For para iterar sobre un arreglo
    int numeros[] = {1, 2, 3, 4, 5};  // Definición de un arreglo de enteros
    printf("Array Loop:\n");
    for (int i = 0; i < 5; i++) {  // Inicia i en 0, se ejecuta mientras i sea menor a 5, y se incrementa i en cada iteración
        printf("%d ", numeros[i]);  // Imprime el valor del elemento actual del arreglo seguido de un espacio
    }
    printf("\n");  // Imprime una nueva línea al final del ciclo

    // Ciclo While
    // Definir contador
    int contador = 1;
    printf("While Loop Counting to 16:\n");
    // Ejemplo de ciclo while que cuenta hasta 16
    while (contador <= 16) {  // La condición se evalúa antes de cada iteración
        printf("%d ", contador);
        contador++;  // Incrementa el contador en cada iteración
    }
    printf("\n");

    // Ejemplo de ciclo while que imprime los primeros 10 números pares
    int num = 2;
    printf("While Loop Printing Even Numbers Up to 20:\n");
    while (num <= 20) {  // La condición se evalúa antes de cada iteración
        printf("%d ", num);
        num += 2;  // Incrementa en 2 para obtener el siguiente número par
    }
    printf("\n");

    // Imprime el valor del carácter Aleph
    printf("Aleph is %c\n", Aleph);

    return 0;
}
