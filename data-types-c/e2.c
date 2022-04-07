/*Escribir un programa que tome dos argumentos enteros positivos e imprima "verdadero" si alguno de los argumentos es divisible por el otro*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi (argv[1]);
  int b = atoi (argv[2]);
  printf("%s\n",a%b==0||b%a==0?"verdadero" : "falso" );

  return 0;
}
