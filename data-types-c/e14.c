/*Escribir un programa que calcule el producto cruz entre dos vectores en el espacio. Usar 6 argumentos de tipo entero*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

  int v1 = atoi (argv[1]);
  int v2 = atoi (argv[2]);
  int u1 = atoi (argv[3]);
  int u2 = atoi (argv[4]);

  printf ("V: (%d;%d); U: (%d;%d)\n", v1, v2, u1, u2);
  printf ("V * U = %d\n",(v1*u1)+(v2*u2));
  return 0;
}
