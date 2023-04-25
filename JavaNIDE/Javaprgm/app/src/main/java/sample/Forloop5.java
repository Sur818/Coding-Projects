package sample;
import java.util.*;
 class Forloop5 
 {
  
  public static void main (String[] ar)
  {
  int n,i,j;
  double z,sum=0;
  System.out.println("enter the range");
  Scanner m=new Scanner(System.in);
  n=m.nextInt();
  for(i=1;i<=n;i++)
  {
    
    System.out.print(+i+"^"+i);
    if(i<n)
    {
      System.out.print(" + ");
    }
    z=Math.pow(i,i);
    sum=sum+z;
  }
  System.out.print("sum of seriese="+sum);   
    
  }
  
}