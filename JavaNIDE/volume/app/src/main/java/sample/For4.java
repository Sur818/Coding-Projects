package sample;
import java.util.*;
 class For4
 {
  static int i,j,n,fact=1;
  static float sum=0,p,z;
  public static void main(String[] arr)
  {
    Scanner m=new Scanner(System.in);
    System.out.println("enter no");
    n=m.nextInt();
   for(i=1;i<=n;i++)
   {
    System.out.print(i+"*"+i+"/"+i+"+"+(i+1)+"!");
    System.out.print(" + ");
    for(j=1;j<=i+1;j++)
    {
     fact=fact*j;
    }
    z=(float)(i*i);
    p=(float)(i+fact);
    sum=sum+z/p;
    fact=1;
   }
   System.out.print("\nsum is"+sum);
  }
 
  
}
