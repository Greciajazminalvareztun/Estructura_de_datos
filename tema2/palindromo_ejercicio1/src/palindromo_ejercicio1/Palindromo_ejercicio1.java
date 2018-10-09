
 
 /* Realiza un programa para determinar si una palabra o frase es un palíndromo
 * Fecha: 02/10/2018
 * Grecia Jazmin Alvarez
 */

package palindromo_ejercicio1;

import java.util.Scanner;
/**
 *
 * @author Grecia Alvarez
 */
public class Palindromo_ejercicio1
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner Teclado = new Scanner(System.in);
        palindromo palindromo1 = new palindromo();
        System.out.println("Introducir una palabra): ");
        String texto=Teclado.nextLine();
        texto=texto.replaceAll(" ", "");
        palindromo1.cadena=texto;
        palindromo1.tamano=texto.length()-1;
        if (palindromo.palindromo(palindromo1.cadena, 0, palindromo1.tamano)){
            System.out.println("Es un palíndromo");
        } else{
            System.out.println("No es un palíndromo");
        }
    }
    
}
