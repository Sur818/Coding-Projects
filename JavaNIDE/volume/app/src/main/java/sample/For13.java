package sample;
import java.util.*;

 class For13 
 {
  static int i,j,n,k=1;
  static double sum=0;
  public static void main(String[] b)
 {
   Scanner t=new Scanner(System.in);
   System.out.println("enter no of term");
   n=t.nextInt();
   for(i=1;i<=n;i++)
   {
     sum=sum+Math.pow(i,i);
     System.out.print(i+"^"+i);
     if(i<n)
     {
       System.out.print("+");
     }
    
   }
   System.out.print("\nsum of seriese "+sum);
 }
}
