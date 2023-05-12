#include <stdio.h> //Biblioteca para funciones básicas en C

int main()//Función principal
{ //Abro función principal
    int num; //Declaro variable entera
    
    printf("Ingresa un número: "); //Pido al usuario que ingrese un número
    scanf("%d", &num); //Leo y guardo en la variable num
    
    if(num>10) //Si el número ingresado es mayor a 10
    { //Abro llave del if
       printf("Tu número es mayor a 10"); //Imprimo mensaje si el número es mayor a 10
    } //Cierro llave del if
    else //Caso contrario (si el número es menor a 10)
    { //Abro llave del else
       printf("Tu número es menor a 10"); //Imprimo mensaje si el número es menor a 10
    } //Cierro llave del else
    
    return 0; //Regreso 0 a la función principal
           
} //Cierro función principal
