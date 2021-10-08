/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Ktra1;

/**
 *
 * @author A
 */
public class PhanSo {
    private int tu;
    private int mau;

    public void setTu(int tu)
    {
        this.tu = tu;
    }
    public void setMau(int mau)
    {
        this.mau = mau;
    }
    public int getTu()
    {
        return tu;
    }
    public int getMau()
    {
        return mau;
    }
    public PhanSo()
    {
        
    }
    public PhanSo(int tu, int mau)
    {
        this.tu = tu;
        this.mau = mau;
    }
    private int UCLN(int a, int b){
        a=Math.abs(tu);
        b=Math.abs(mau);
        while (a*b!=0){
            if (a>b)
                a%=b;
            else
                b%=a;
        }
        return (a+b);
    }
    private void rutGon(){
        int u=UCLN(tu, mau);
        tu/=u;
        mau/=u;
    }
    public void inPhanSo(){
        rutGon();
        
        if(mau<0){
            mau*=-1;
            tu*=-1;
        }
        if(tu<mau)
            System.out.println(tu + "/" + mau);
        else if(tu%mau==0)
            System.out.println(tu/mau);
        else{
            int v=tu/mau;
            int u=tu%mau;
            System.out.println(v + " " + u + "/" + mau);
        }
    }
    public PhanSo tong(PhanSo a, PhanSo b){
        PhanSo kq = new PhanSo();
        kq.setTu(a.getTu()*b.getMau() + b.getTu()*a.getMau());
        kq.setMau(b.getMau()*a.getMau());
        kq.rutGon();
        return kq;
    }
    public PhanSo hieu(PhanSo a, PhanSo b){
        PhanSo kq = new PhanSo();
        kq.setTu(a.getTu()*b.getMau() - b.getTu()*a.getMau());
        kq.setMau(b.getMau()*a.getMau());
        kq.rutGon();
        return kq;
    }
}
