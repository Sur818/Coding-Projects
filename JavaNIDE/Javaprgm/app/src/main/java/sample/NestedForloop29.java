package sample;
import java.util.*;
class NestedForloop29 
{
 public static void main (String[] ar)
 {
  int i,j,n,k=0;
 System.out.println("enter no of row");
 Scanner m=new Scanner(System.in);
 n=m.nextInt();
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=k+i;j++)
  {  
    System.out.print(" ");
  }
  k++;
  for(j=1;j<=i;j++)
  {
   System.out.print(j);
  }
  System.out.print("\n");
 }
 }
  
}

