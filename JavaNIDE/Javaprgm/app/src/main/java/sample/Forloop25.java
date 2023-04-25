package sample;
import java.util.*;
class Forloop25
 {
  
 public static void main (String[] ar)
 {
 int i,j,n;
 double sum=1.0,z,p,prod=1;
 System.out.println("enter no of term");
 Scanner m=new Scanner(System.in);
 n=m.nextInt();
 System.out.print("1/1 + ");
 for(i=2;i<=n;i++)
 {
 System.out.print(i+"/"+i+"-"+"(1"+"/");
 for(j=1;j<=i;j++)
 {
  prod=prod*j;
  System.out.print(j);
  if(j<i)
  {
    System.out.print("*");
  }
   
 }
 z=1/prod;
 p=i-z;
 sum=sum+i/p;
 prod=1;
 System.out.print(")");
 if(i<n)
 {
 System.out.print(" + ");
 }
  
}
System.out.print("sum of seriese="+sum);
}
}


