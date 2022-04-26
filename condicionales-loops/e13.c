//Escribir un programa que use un ciclo for para imprimir los primeros n números de Fibonacci. Usar un argumento de línea de comandos para el valor de n. La sucesión de Fibonacci comienza así: 0, 1, 1, 2, 3, 5, 8, 13, 21 ... etc. El próximo número en la sucesión es la suma de los dos anteriores.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n= atoi(argv[1]);

  while (n > 0) {
    printf("%d", n % 10);
    n /= 10;
  }
  printf ("\n");
  return 0;
}
