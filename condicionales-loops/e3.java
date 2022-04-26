//Escribir un programa que simule tirar un dado "cargado". Imprimiendo el resultado de tirar el dado, teniendo en cuenta que la probabilidad de tirar un 1, 2, 3, 4 o 5 es de 1/8 y de tirar un 6 es de 3/8.

public class Loops {
  public static void main(String[] args) {
      int d = (int) (Math.random () * 8 + 1);
      if (d < 6) System.out.println(d);
      else       System.out.println(6);
  }
}
