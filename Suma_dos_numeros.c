#include <stdio.h> //Biblioteca para fuunciones b�sicas en C 

int main() //Funci�n principal, no recibe argumentos
{
    int numero1, numero2, suma; //Variables enteras
    
    printf("Ingresa el primer n�mero: "); //Imprime en pantalla texto
    scanf("%d", &numero1); //Lee y guarda en la variable numero1
    
    //%c char
    //%d int
    //%f float
    //%s string
    
    printf("Ingrese el segundo n�mero: "); //Imprime en pantalla texto
    scanf("%d", &numero2); //Lee y guarda en la variable numero2
    
    suma=numero1+numero2; //Realizamos operaci�n aritm�tica
    
    printf("La suma de ambos n�meros es: %d\n", suma); //Imprimimos el resultado de la suma
    
    //  "\n Sirve para realizar un salto de l�nea.
    
    return 0; //Regresa cero a la funci�n principal
         
    }
