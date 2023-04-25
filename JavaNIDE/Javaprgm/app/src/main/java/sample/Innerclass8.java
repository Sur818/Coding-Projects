package sample;
import java.util.*;
public class Innerclass8 
{
 class A
{
 
 void goldbatch(int n)
 {
   int []arr=new int[100];
   int i,j,k=0,f;
   for(i=2;i<=n;i++)
   {
      f=0;
     for(j=2;j<=i/2;j++)
     {
       if(i%j==0)
       {
         f=1;
       }
     }
     if(f==0)
     {
       arr[k++]=i;
     }
   }
   for(i=0;i<k;i++)
   {
     for(j=i;j<k;j++)
     {
       if(arr[i]+arr[j]==n)
       {
         System.out.println(arr[i]+","+arr[j]);
       }
     }
   }
   
   
 }
  
}
public static void main (String[] ar)
{
  int n;
  System.out.println("enter no");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  
  Innerclass8.A obj=new Innerclass8().new A();
  obj.goldbatch(n);
  
  
  
}
  
  
  
  
  
  
  
  
  
  
}
