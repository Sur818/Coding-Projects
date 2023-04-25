package sample;
import java.util.*;
 class NestedForloop45
 {
   static int f,i;
  static int prime(int n)
   {
 for(i=2;i<=n/2;i++)
 {
   f=0;
  if(n%i==0)
  {
   f=1;
   break;
  }
 }
 if(f==0)
 {
   //System.out.print(n);
   return n;
   
 }
 else
{
  return 0;
}
   }
   
   
   public static void main (String[] ar)
   {
     int i,j,n,k=1,z;
   System.out.println("enter no of row");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
      k++;
      z=prime(k);
      //System.out.print(z);
      if(z!=0)
      { 
        if(k<=9)
        {
         
      System.out.print(k+"  ");
      }
      else if(k<=99)
      {
        System.out.print(k+" ");
      }
      else
{
  System.out.print(k);
}
}
      else
{
  j--;
}
      
    }
    System.out.print("\n");
   }
   }
  
}
