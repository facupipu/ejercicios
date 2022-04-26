//Escribir un programa que simule tirar un dado "cargado". Imprimiendo el resultado de tirar el dado, teniendo en cuenta que la probabilidad de tirar un 1, 2, 3, 4 o 5 es de 1/8 y de tirar un 6 es de 3/8.

function main(){
  let d = Math.trunc(Math.random() * 8) + 1;
  console.log(d);
  return 0;
}

main();
