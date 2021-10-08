/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Ktra1;

import java.util.Scanner;

/**
 *
 * @author A
 */
public class SoNguyen {
    private int n;
    public SoNguyen(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap n: ");
        n = Integer.parseInt(sc.nextLine());
    }
    private boolean isNT(int n){
        if (n<2) return false;
        else{
            for (int i=2; i<=Math.sqrt(n); i++){
                if (n%i==0) return false;
            }
            return true;
        }
    }
    public void daySoFiboNT(){
        int[] f = new int[93];
        f[1]=0;
        f[2]=1;
        System.out.print("Day so Fibonacci nguyen to: ");
        for (int i=3; i<93; i++)
            f[i] = f[i-1] + f[i-2];
        for (int i=1; i<93; i++){
            if (f[i]>=n) break;
            if (isNT(f[i])) System.out.print(f[i] + " ");
        }
        System.out.println();
    }
    public boolean isTN(int n){
        int x = n;
        int t = 0;
        while(x>0){
            t = t*10 + x%10;
            x/=10;
        }
        if(t == n) return true;
        else return false;
    }
    public void soTN(){
        if (isTN(n)==true) System.out.println("YES");
        else System.out.println("NO");
    }
}
