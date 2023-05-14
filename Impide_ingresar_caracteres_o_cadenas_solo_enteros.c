
/*  Este programa impide ingresar caracteres � cadenas en n�meros enteros

Realizado por: Jos� �ngel Olmedo Guevara  */

#include <stdio.h> //Biblioteca de funci�nes b�sicas en C
#include <stdlib.h> //para atoi
#include <locale.h> //para acentos

int main(int argc, char *argv[]) //Funci�n principal
{
	setlocale(LC_ALL, "Spanish_Mexico"); //Permite poner acentos
	char dato[50]; //Declaro una variable tipo caracter de 50 unidades
	int entero; //Para ver si el dato ingresado es un entero o no

	printf("Ingresa un dato entero: "); //Solicito al usuario ingresar un dato entero
	scanf("%[^\n]", dato); //Leo toda la l�nea de entrada hasta que se encuentre un salto de l�nea y lo guardo en la variable 'dato'
	entero=atoi(dato); //convierte cadena a entero
	
	//atoi devuelve cero si ingresa algo diferente a n�meros y no se pudo convertir 
	//si el elemento 0 del arreglo contiene valor 0 dado por el usuario es v�lido
	while(entero==0 && dato[0]!='0') //Mientras que se haya ingresado algo diferente a un n�mero entero 
	{//Llave para abrir ciclo while
		printf("Falla en lectura, ingresa �nicamente un dato entero: ");  //Imprimo mensaje de que no se ha ingresado un n�mero entero
		getchar(); //se utiliza para consumir el car�cter de salto de l�nea residual que queda en el b�fer de entrada despu�s de la lectura anterior con scanf.
		scanf("%[^\n]", dato); //Leo toda la entrada hasta que se encuentre un salto de l�nea y lo guardo en la variable 'dato'
		getchar(); //Para permitir una pausa al programa, reaundar� despu�s de precionar enter.
		entero=atoi(dato);//Convierte cadena a entero
	}//Llave para cerrar ciclo while
	
	printf("Tu dato entero es: %d", entero); //Imprimos el dato entero que ingres� el usuario
	
	
	getchar(); //Espera a que se imprima enter para cerrar el programa
	

	return 0;  // Regresa 0
	
} 
