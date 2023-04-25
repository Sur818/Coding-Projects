
package sample;
import java.util.*;
class Forloop26
 {
  
 public static void main (String[] ar)
 {
 int i,j,n;
 double sum=1.0,z,sum1=0;
 System.out.println("enter no of term");
 Scanner m=new Scanner(System.in);
 n=m.nextInt();
 System.out.print("1/1 + ");
 for(i=2;i<=n;i++)
 {
   z=Math.pow(i,i);
 System.out.print(i+"^"+i+"/"+"1"+"-("+i+"^"+i+"/");
 for(j=1;j<=i+1;j++)
 {
  sum1=sum1+Math.pow(j,j);
  System.out.print(j+"^"+j);
  if(j<i+1)
  {
    System.out.print("+");
  }
   
 }
 sum=sum+z/(1-(z/sum1));
 sum1=0;
 System.out.print(")");
 if(i<n)
 {
 System.out.print(" + ");
 }
  
}
System.out.print("sum of seriese="+sum);
}
}


