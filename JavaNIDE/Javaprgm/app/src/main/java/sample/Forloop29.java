package sample;
import java.util.*;

 class Forloop29
 {
   public static void main (String[] ar)
   {
     
   int i,j,fact=1,sum=0,n;
   System.out.println("enter no of term");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
     fact=fact*j;
    }
    sum=sum+fact;
    fact=1;
    System.out.print(i+"!");
    if(i<n)
    {
      System.out.print(" + ");
    }
   }
   System.out.println("sum of seriese="+ sum);
   
  }
}
