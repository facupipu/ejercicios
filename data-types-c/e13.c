/*Escribir un programa que intercambie el valor de dos variables enteras a y b. Los valores iniciales de a y b son argumentos del programa. Imprimir los valores de a y b antes y después del cambio*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

  int a= atoi (argv[1]);
  int b= atoi (argv[2]);
  printf(" a : %d , b : %d\n", a, b);
  int temp = a;
  a = b;
  b = temp;

  printf(" a : %d , b : %d \n", a, b);
  return 0;
}
