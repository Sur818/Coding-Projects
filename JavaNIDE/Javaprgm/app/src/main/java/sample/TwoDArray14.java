package sample;
import java.util.*;
 class TwoDArray14
 {
   
 public static void main (String[] ar)
 {
   
     int i,j,n,f=0;
    System.out.print("enter size of array");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    int [][]a=new int[n][n];
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
      System.out.print("a["+i+"]"+"["+j+"]=");
      a[i][j]=m.nextInt();
      }
    }
     for(i=0;i<n;i++)
        {
          for(j=0;j<n;j++)
          {
            System.out.print(a[i][j]+" ");
          }
          System.out.print("\n");
       }
       System.out.println("after change  row ");
       for(i=n-1;i>=0;i--)
       {
         for(j=0;j<n;j++)
         {
           System.out.print(a[i][j]+" ");
         }
         System.out.println();
       }
       
   
   
   
   
   
 }
   
  
}
