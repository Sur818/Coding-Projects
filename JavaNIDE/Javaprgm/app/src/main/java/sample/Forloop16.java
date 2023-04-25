package sample;
import java.util.*;
 class Forloop16
 {
 public static void main (String[] ar)
 {
   int i,n;
   double sum=0,z;
   System.out.println("enter range");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
  {
    System.out.print("1/"+i+"^"+i);
    if(i<n)
    {
      System.out.print(" + ");
    }
    z=Math.pow(i,i);
    sum=sum+(double)1/(i*i);
  }
  System.out.print("\nsum of seriese ="+sum);
 }
}


