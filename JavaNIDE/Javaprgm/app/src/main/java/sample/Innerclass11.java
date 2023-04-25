package sample;
import java.util.*;
class Innerclass11
 {
static void m1(int n)
 {
 int i,a=0,b=1,c;
   for(i=0;i<=n;i++)
   {
    c=a+b;
    b=c;
    a=b;
    System.out.println(c); 
   }
 }
 public static void main(String[] args)
   {
   int n;
   System.out.println("enter range");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   m1(n);
   

  }

} 
