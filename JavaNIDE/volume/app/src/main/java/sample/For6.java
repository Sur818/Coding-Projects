package sample;
import java.util.*;
 class For6 
 {
 static int i,j,k,fact=1,n;
 static float sum=0,m=0;
 public static void main(String[] ar)
 {
Scanner z=new Scanner(System.in);
System.out.println("enter no");
n=z.nextInt();
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
  fact=fact*j;
    m=m+j;
System.out.print(j);
if(j<i)
{
 System.out.print("+");
}
}
System.out.print("/"+i+"!");
if(i<n)
{
System.out.print(" + ");
}
sum=sum+m/fact;
m=0;
fact=1;
}
System.out.print("\nsum of series="+sum);
 }
  
}
