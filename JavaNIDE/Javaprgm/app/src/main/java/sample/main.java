package sample;
import java.util.*;
 class Tert
 {
   int i,sum=0;
   void add(int n)
  {
   for(i=1;i<=n;i++)
   {
     System.out.print(i+"+");
    sum=sum+i;
    
   }
   System.out.println("sum is"+sum);
  } 
}
class main
{
 public static void main(String[] ar)
 {
   int n;
  Tert t=new Tert();
  Scanner m=new Scanner(System.in);
  System.out.println("enter last term");
  n=m.nextInt();
  t.add(n);
 }
}
