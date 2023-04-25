package sample;
import java.util.*;
class TwoDArray10 
{
public static void main(String [] ar)
{
  
   int i,j,n,temp;
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
  System.out.print("upper triangular matrix=");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i<j)
      {
        
        System.out.println(a[i][j]);
        
      }
    }
  }
  
  
  
  
}
  
}
