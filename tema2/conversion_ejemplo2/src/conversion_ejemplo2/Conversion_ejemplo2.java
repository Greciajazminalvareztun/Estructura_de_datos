/*
 * Realice un programa que transforme un número en base 10 a binario
 * grecia jazmin 
 * and open the template in the editor.
 */
package conversion_ejemplo2;

/**
 *
 * @author grecia jazmin
 */
import java.util.Scanner;
public class Conversion_ejemplo2 {

     /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner Teclado = new Scanner(System.in);
        conversion conversion1 = new conversion();
        System.out.print("Introduce un numero decimal: ");
        conversion1.Decimal=Teclado.nextInt();
        conversion1.Binario=conversion1.binario(conversion1.Decimal);
        System.out.println("la conversion en binario es: "+conversion1.Binario);
    }
    
}
