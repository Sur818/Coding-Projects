package sample;
import java.util.*;
 class TwoDArray17
 {
  public static void main (String[] ar)
  {
    
      int i,j,n,sum=0,sum1=0;
    System.out.print("enter size of array");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    int [][]a=new int[n+1][n+1];
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
       for(i=0;i<n;i++)
       {
         for(j=0;j<n;j++)
         {
            sum=sum+a[i][j];
         a[i][j+1]=sum;
         }
         sum=0;
        // sum1=0;
       }
    
    for(i=0;i<n;i++)
    {
      for(j=0;j<n+1;j++)
      {
        
        System.out.print(a[i][j]+" ");
        
     }
      System.out.println();
   }
    
    
  }
 
}
