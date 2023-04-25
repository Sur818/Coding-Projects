package sample;
import java.util.*;
 class NestedForloop43
 {
   public static void main (String[] ar)
   {
     int i,j,n,k;
     System.out.print("enter no of row");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
for(i=1;i<=n;i++)
{
 for(j=i;j<n;j++)
 {
   System.out.print(" ");
 }
 for(k=1;k<=2*i-1;k++)
 {
  if(i==n||k==1||k==2*i-1)
  {
    System.out.print("*");
    }
    else
{
  System.out.print(" ");
}
  }
  System.out.print("\n"); 
 }
}
     
     

  
}
