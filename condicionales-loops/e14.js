//Escribir un programa que calcule el factorial de un número n ingresado como argumento.

let n = 5;
let res = 1;
if (n == 0){
  consolo.log(res);
} else {
  while (n > 0){
    res = res * n;
    n--;
  }
  console.log(res);
}
