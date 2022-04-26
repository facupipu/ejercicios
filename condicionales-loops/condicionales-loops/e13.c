//Escribir un programa que use un ciclo for para imprimir los primeros n números de Fibonacci. Usar un argumento de línea de comandos para el valor de n. La sucesión de Fibonacci comienza así: 0, 1, 1, 2, 3, 5, 8, 13, 21 ... etc. El próximo número en la sucesión es la suma de los dos anteriores.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  if (n <= 0) {printf("numero no valido\n"); return 0;}

  int a = 0;
  int b = 1;
  int c;

  if ( n==1 ) {printf("0\n"); return 0;}
  if ( n==2 ) {printf("0, 1\n"); return 0;}

  printf("0, 1");

  for (int i = 3 ; i <= n ; i++) {
      c = a+b;
      printf(", %d", c);
      a = b;
      b = c;
  }
  printf("\n");
  return 0;
}
