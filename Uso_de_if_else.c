#include <stdio.h> //Biblioteca para funciones b�sicas en C

int main()//Funci�n principal
{ //Abro funci�n principal
    int num; //Declaro variable entera
    
    printf("Ingresa un n�mero: "); //Pido al usuario que ingrese un n�mero
    scanf("%d", &num); //Leo y guardo en la variable num
    
    if(num>10) //Si el n�mero ingresado es mayor a 10
    { //Abro llave del if
       printf("Tu n�mero es mayor a 10"); //Imprimo mensaje si el n�mero es mayor a 10
    } //Cierro llave del if
    else //Caso contrario (si el n�mero es menor a 10)
    { //Abro llave del else
       printf("Tu n�mero es menor a 10"); //Imprimo mensaje si el n�mero es menor a 10
    } //Cierro llave del else
    
    return 0; //Regreso 0 a la funci�n principal
           
} //Cierro funci�n principal
