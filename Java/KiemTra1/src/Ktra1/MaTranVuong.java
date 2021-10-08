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
public class MaTranVuong {
    private int n;
    private int[][] a;

    public MaTranVuong(int n) {
        this.n = n;
        this.a = a;
    }

    public MaTranVuong() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap n: ");
        n = Integer.parseInt(sc.nextLine());
        a = new int[n][n];
        for(int i = 0; i<n; i++){
            System.out.print("Nhap hang "+(i+1)+": ");
            for(int j = 0; j<n; j++){
                a[i][j] = Integer.parseInt(sc.next());
            }
        }
    }
    public void hangchiSoChan(){
        int check = 0;
        for(int i=0; i<n; i++){
            check = 1;
            for(int j = 0; j<n; j++){
                if(a[i][j]%2!=0){
                    check = 0;
                    break;
                }
            }
            if(check==1){
                System.out.print("Hang toan so chan: hang "+(i+1)+": ");
                for(int x = 0; x<n; x++){
                    System.out.print(a[i][x]+" ");
                }
                System.out.println();
            }
        }
        if(check==0) System.out.println("Khong co!!!");
    }
    public void detMT(){
        
    }
}
