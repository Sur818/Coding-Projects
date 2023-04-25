package sample;
import java.util.*;

 class java2 
 {
  
  public static void main (String[] ar)
  {
    int fact=1,sign=1,n;
    double sum,x;
    System.out.print("enter the angle in degree& term");
    Scanner m=new Scanner(System.in);
    x=m.nextInt();
    n=m.nextInt();
    x=x*3.14/180;
    sum=x;
  
  int i;
  for(i=3;i<=n;i=i+2)
  {
    fact=fact*i*(i-1);
    sum=sum+ sign*Math.pow(x,i)/fact;
sign=sign*-1;
   
   
   }
   System.out.print("sum of ser="+sum);
  }
  }
