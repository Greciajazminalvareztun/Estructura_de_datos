/*
 * deacuerdo a una compra realizada calcilar el cambio 
 * ejemplo 3 
 * and open the template in the editor.
 */
 package compras_ejemplo3;
import java.util.Scanner;
 

/**
 *
 * @author grecia jazmin
 */
public class Compras_ejemplo3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Ingrese total de la compra: ");
        double c = sc.nextDouble();
        System.out.println("Ingrese el monto depositado: ");
        double m = sc.nextDouble();
        System.out.println("Cambio en monedas de: \n");
        dinero mt = new dinero (m, c);
    }
}

