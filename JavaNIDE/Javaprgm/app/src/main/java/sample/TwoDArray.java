package sample;
import java.util.*;
 class TwoDarray
 {
  
  
  public static void main (String[] ar)
  {
  
   int i,j,n,f=0;
    System.out.print("enter size of array");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    int [][]a=new int[n][n];
    int [][]b=new int[n][n];
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
       
       System.out.println("after reversing");
       for(i=0;i<n;i++)
       {
         for(j=n-1;j>=0;j--)
         {
           
          System.out.print(a[i][j]+" ");
           
         }
         System.out.print("\n");
       }
  }
  
  
  
  
}
