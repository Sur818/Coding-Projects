package sample;
import java.util.*;
 class TwoDArray11 
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
    
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        b[i][j]=a[j][i];
      }
    }
    System.out.println("after transpose");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        System.out.print(b[i][j]+" ");
      }
      System.out.println();
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
       if(a[i][j]!=b[i][j])
       {
         f=1;
         break;
       }
      }
    }
    if(f==0)
    {
      System.out.print("symmetric matrix");
    }
   else
{
  System.out.print("not symetric matrix");
}
   
   
 }
}
