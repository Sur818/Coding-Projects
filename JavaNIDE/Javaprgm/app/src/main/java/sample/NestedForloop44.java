package sample;
import java.util.*;
 class NestedForloop44
 {
   public static void main (String[] ar)
   {
    int i,j,n,k=1,t=1;
    System.out.println("enter no of row");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=i;j++)
   {
     if(k%2!=0)
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
k++;
    // k=k+2;
     
   }
   System.out.print("\n");
  }
   }
  
}
