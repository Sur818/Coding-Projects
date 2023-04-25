package sample;
import java.util.*;
 class TwoDArray3
 {
   
  public static void main (String[] ar)
  {
   
   int i,j,n;
   System.out.print("enter size of squre matrix");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   int [][]a=new int[n][n];
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
      System.out.print("a["+i+"]["+j+"]=");
      a[i][j]=m.nextInt();
    }
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        System.out.print(a[j][i]+"  ");
         
      }
      System.out.print("\n");
    }
   
    
  }
  
}
