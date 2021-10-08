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
public class Main {
    public static void main(String[] args) {
        PhanSo p1 = null, p2 = null;
        SoNguyen n = null;
        MaTranVuong mtv = null;
        while(true){
            System.out.println("========MENU========");
            System.out.println("1. Nhap 2 phan so");
            System.out.println("2. Tinh tong 2 phan so");
            System.out.println("3. Tinh hieu 2 phan so");
            System.out.println("4. Nhap so nguyen duong n");
            System.out.println("5. Liet ke cac so Fibonacci nho hon n la so nguyen to");
            System.out.println("6. Kiem tra n co phai so thuan nghich");
            System.out.println("7. Nhap ma tran vuong");
            System.out.println("8. Dua ra cac hang chi co cac so duong chan");
            System.out.println("9. Tim ma tran nghich dao");
            System.out.println("0. Exit!");
            System.out.print("Nhap lua chon: ");
            Scanner sc = new Scanner(System.in);
            int lc = Integer.parseInt(sc.nextLine());
            switch(lc){
                case 0: System.out.println("Exit!");
                        System.exit(0);
                        
                case 1: System.out.print("Nhap tu va mau cua phan so 1: ");
                         int tu1 = Integer.parseInt(sc.next());
                         int mau1 = Integer.parseInt(sc.next());
                         System.out.print("Nhap tu va mau cua phan so 2: ");
                         int tu2 = Integer.parseInt(sc.next());
                         int mau2 = Integer.parseInt(sc.next());
                         p1 = new PhanSo(tu1, mau1);
                         p2 = new PhanSo(tu2, mau2);
                         System.out.print("Phan so 1: ");
                         p1.inPhanSo();
                         System.out.print("Phan so 2: ");
                         p2.inPhanSo();
                    break;
                case 2: System.out.print("Tong 2 phan so: ");
                         p1.tong(p1, p2).inPhanSo();
                    break;
                case 3: System.out.print("Hieu 2 phan so: ");
                         p1.hieu(p1, p2).inPhanSo();
                    break;
                    
                case 4: n = new SoNguyen();
                        break;
                case 5: n.daySoFiboNT();
                        break;
                case 6: n.soTN();
                        break;
                case 7: mtv = new MaTranVuong();
                        break;
                case 8: mtv.hangchiSoChan();
                        break;
//                case 9:
                    
            }
        }
    }
}
