/*Escribir un programa que acepte dos argumentos, cantidad de horas trabajadas y salario por hora. El programa imprime el salario total del trabajador con un máximo de dos lugares después de la coma*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

int h = atoi(argv[1]);
int s_h = atoi(argv[2]);

printf ("salrio por hora = %d\n", h*s_h);

return 0;
}
