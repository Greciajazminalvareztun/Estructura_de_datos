/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package conversion_ejemplo2;

/**
 *
 * @author grecia jazmin
 */
public class conversion {
    
int Decimal;
    long Binario;
    public long binario(int n){
        if (n<2)
            return n;
        else
            return (n%2)+(binario(n/2))*10;
    }
}

