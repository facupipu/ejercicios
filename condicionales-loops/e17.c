//Escribir un programa que imprima los números en el rango del 1 al 100 que al ser divididos por un argumento entero n, su resto sea igual a 3.

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
  int n = atoi[1];
  for (int i = 1; i <= 100; i++){
      if (i % n == 3) printf("%d\n", i);
  }
  return 0;
}
