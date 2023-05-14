
/*  Este programa impide ingresar caracteres ó cadenas en números enteros

Realizado por: José Ángel Olmedo Guevara  */

#include <stdio.h> //Biblioteca de funciónes básicas en C
#include <stdlib.h> //para atoi
#include <locale.h> //para acentos

int main(int argc, char *argv[]) //Función principal
{
	setlocale(LC_ALL, "Spanish_Mexico"); //Permite poner acentos
	char dato[50]; //Declaro una variable tipo caracter de 50 unidades
	int entero; //Para ver si el dato ingresado es un entero o no

	printf("Ingresa un dato entero: "); //Solicito al usuario ingresar un dato entero
	scanf("%[^\n]", dato); //Leo toda la línea de entrada hasta que se encuentre un salto de línea y lo guardo en la variable 'dato'
	entero=atoi(dato); //convierte cadena a entero
	
	//atoi devuelve cero si ingresa algo diferente a números y no se pudo convertir 
	//si el elemento 0 del arreglo contiene valor 0 dado por el usuario es válido
	while(entero==0 && dato[0]!='0') //Mientras que se haya ingresado algo diferente a un número entero 
	{//Llave para abrir ciclo while
		printf("Falla en lectura, ingresa únicamente un dato entero: ");  //Imprimo mensaje de que no se ha ingresado un número entero
		getchar(); //se utiliza para consumir el carácter de salto de línea residual que queda en el búfer de entrada después de la lectura anterior con scanf.
		scanf("%[^\n]", dato); //Leo toda la entrada hasta que se encuentre un salto de línea y lo guardo en la variable 'dato'
		getchar(); //Para permitir una pausa al programa, reaundará después de precionar enter.
		entero=atoi(dato);//Convierte cadena a entero
	}//Llave para cerrar ciclo while
	
	printf("Tu dato entero es: %d", entero); //Imprimos el dato entero que ingresó el usuario
	
	
	getchar(); //Espera a que se imprima enter para cerrar el programa
	

	return 0;  // Regresa 0
	
} 
