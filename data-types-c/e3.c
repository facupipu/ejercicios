/*Escribir un programa que tome tres argumentos enteros positivos e imprima "falso" si alguno es igual o mayor a la suma de los otros dos, o "verdadero" en caso contrario*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  printf("%s\n", a>=(b+c)||b>=(a+c)||c>=(a+b) ? "falso":"verdadero");

  return 0;
}
