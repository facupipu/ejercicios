/*Escribir un programa que acepte dos argumentos: día y mes (ambos de tipo int). Imprimir "verdadero" si la fecha está entre el 20 de marzo y el 20 de junio, o "falso" de lo contrario*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int d= atoi (argv[1]);
  int m= atoi (argv[2]);
  bool f= false;
  f= m == 3 && d >= 20;
  f= m > 3 && m < 6 ||f;
  f= m == 6 && d >= 20 ||f;
  printf("%s\n", f?"si":"no");

  return 0;
}
