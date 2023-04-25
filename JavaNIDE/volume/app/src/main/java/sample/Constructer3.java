package sample;
import java.util.*;

 class Constructer3
 {
  private int a,b,c;
 Constructer3(int x,int y)
 {
   a=x;
   b=y;
   add();
   mult();
 }
 void add()
 {
  c=a+b;
  System.out.println(c);
 }
 void mult()
 {
  c=a*b;
  System.out.println(c);
 }
 public static void main(String[] arr)
 {
   int n,z;
   Scanner m=new Scanner(System.in);
     while(1>0)
   {
     System.out.println("enter two no");
     n=m.nextInt();
     z=m.nextInt();
  Constructer3 s=new Constructer3(n,z);
 // s.a=10;
 // System.out.println(s.a);
  } 
 }
}
