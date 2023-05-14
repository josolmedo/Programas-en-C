
/*  Este programa imprime los elementos de un arreglo

Realizado por: Jos� �ngel Olmedo Guevara  */

#include <stdio.h> //Biblioteca para permitir funciones b�sicas de C

int main() //Funci�n principal
{//Abre funci�n principal
    
    char arreglo[] = {1, 2, 3, 4, 5};  //Definimos un arreglo
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]); // Obtener la longitud del arreglo
    int i; //Declaro variable para iterar en ciclo for (contador)
    // Recorrer el arreglo utilizando un ciclo for
    for ( i = 0; i < longitud; i++)
	{ //Inicio ciclo for
        printf("            %d\n", arreglo[i]); //Imprimo cada elemento de mi arreglo
    } //Cierro ciclo for

	getchar(); //Espero a que el usuario presione enter para continuar con la ejecuci�n de mi programa
	printf("La longitud es del arreglo es de: %d", longitud); //Mustro al usuario la longitud del arreglo
	getchar(); //Antes de concluir el programa debemos presionar enter
    return 0; //Regresa 0 a la funci�n principal
}//Cierra funci�n principal

