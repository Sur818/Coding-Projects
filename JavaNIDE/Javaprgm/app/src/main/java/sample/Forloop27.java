package sample;
import java.util.*;
class Forloop27
 {
  
 public static void main (String[] ar)
 {
 int i,j,n,c;
 double sum=1.0,z,sum1=0,p;
 System.out.println("enter no of term");
 Scanner m=new Scanner(System.in);
 n=m.nextInt();
 System.out.print("1/1 + ");
 for(i=2;i<=n;i++)
 {
   z=Math.pow(i,i);
   c=i-1;
   p=Math.pow(c,c);
 System.out.print(i+"^"+i+"/"+c+"^"+c+"-("+i+"^"+i+"/");
 for(j=1;j<=i;j++)
 {
  sum1=sum1+Math.pow(j,j);
  System.out.print(j+"^"+j);
  if(j<i)
  {
    System.out.print("+");
  }
   
 }
 sum=sum+z/(p-(z/sum1));
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



