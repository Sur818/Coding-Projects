package sample;
import java.util.*;
 class TwoDArray7
 {
  public static void main (String[] ar)
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
System.out.println("after swaping first and third row");
    for(j=0;j<n;j++)
      {
         temp=a[0][j];
          a[0][j]=a[2][j];
          a[2][j]=temp;
        }
        
        for(i=0;i<n;i++)
        {
          for(j=0;j<n;j++)
          {
            System.out.print(a[i][j]+" ");
          }
          System.out.print("\n");
       }
    
  }
  
}
