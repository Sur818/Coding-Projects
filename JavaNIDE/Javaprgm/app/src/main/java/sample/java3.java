package sample;
import java.util.*;

class java3
 {
  
  public static void main(String[] ar)
  {
  int n,fact=1,sign=-1,i;
  double sum=1,x;
  System.out.println("enter angel and no of term");
  Scanner m=new Scanner(System.in);
  x=m.nextDouble();
  n=m.nextInt();
  x=x*3.14/180;
  for(i=2;i<=n;i+=2)
  {
   fact=fact*(i)*(i-1);
   sum=sum+sign*Math.pow(x,i)/fact;
   sign=sign*-1;
   
  }
  System.out.println("sum is "+sum);
  
  }
}
