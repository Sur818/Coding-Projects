package sample;
import java.util.*;

class Array5
 {
 static void m1(int n)
  {
    int i,j;
    double sum=0,m=0;
    for(i=1;i<=n;i++)
    {
      System.out.print(i+"/");
     for(j=1;j<=i;j++)
     {
      System.out.print(j);
        if(j<i)
        {
          System.out.print("+");
        }
       m=m+j;
       
     }
     System.out.print(" + ");
     sum=sum+i/m;
     m=0;
     
    }
    System.out.print("sum of ser:"+sum);
  }
   
   public static void main(String[] arr)
   {
     int n;
  Scanner m=new Scanner(System.in);
  System.out.print("enter last of sersies");
  n=m.nextInt();
  m1(n);
     
   }
  
}
