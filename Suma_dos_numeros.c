#include <stdio.h> //Biblioteca para fuunciones básicas en C 

int main() //Función principal, no recibe argumentos
{
    int numero1, numero2, suma; //Variables enteras
    
    printf("Ingresa el primer número: "); //Imprime en pantalla texto
    scanf("%d", &numero1); //Lee y guarda en la variable numero1
    
    //%c char
    //%d int
    //%f float
    //%s string
    
    printf("Ingrese el segundo número: "); //Imprime en pantalla texto
    scanf("%d", &numero2); //Lee y guarda en la variable numero2
    
    suma=numero1+numero2; //Realizamos operación aritmética
    
    printf("La suma de ambos números es: %d\n", suma); //Imprimimos el resultado de la suma
    
    //  "\n Sirve para realizar un salto de línea.
    
    return 0; //Regresa cero a la función principal
         
    }
