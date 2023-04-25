package sample;
import java.util.*;
class For3
 {
static int i,j,prod=1,n=5;
 static float sum=0;
 public static void main(String[] ar)
 {
  System.out.print("enter last no");
 Scanner m=new Scanner(System.in);
 n=m.nextInt();
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=i;j++)
   {
    System.out.print(j);
    if(j<i)
    {
     System.out.print("*");
    }
    prod=prod*j;
   }
   System.out.print(" + ");
   sum=sum+prod;
   prod=1;
  }
 System.out.print("sum of seriese is"+sum);
}
}
