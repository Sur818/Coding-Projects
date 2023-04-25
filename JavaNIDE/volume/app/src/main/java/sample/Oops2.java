package sample;
import java.util.*;
 class Oops2 
{
  int i,sum=0,n;
  void m1(int n)
  {
    for(i=1;i<=10;i++)
     {
      sum=sum+n*i;
     System.out.println(n+"*"+i+"="+(n*i));    
     }
   System.out.print("sum of table is"+sum);
   }

 public static void main (String ar)
 {
   Oops2 obj=new Oops2();
   System.out.println("enter no");
   Scanner m=new Scanner(System.in);
   obj.n=m.nextInt();
   obj.m1(obj.n);
   
 }
  
}
