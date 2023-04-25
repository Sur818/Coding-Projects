package sample;
import java.util.*;
 class TwoDArray15
 {
   
 public static void main (String[] ar)
 {
   
     int i,j,n,sum=0;
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
      sum=sum+a[i][j];
      a[i][j+1]=sum;
      }
      sum=0;
    }
   for(i=0;i<n+1;i++)
   {
     if(i<n)
     {
     System.out.print("c["+i+"]"+"   ");
     }
     else
{
  System.out.print("sum");
}
   }
   System.out.print("\n");
    
     for(i=0;i<n;i++)
        {
          for(j=0;j<n+1;j++)
          {
            if(a[i][j]<10)
            {         
             System.out.print(a[i][j]+"      ");
     }
     else if(a[i][j]>=10&&a[i][j]<100)
     {
      
      System.out.print(a[i][j]+"    ");
     }
     else if(a[i][j]>100)
     {
       
       System.out.print(a[i][j]+"   ");
     }
          }
          System.out.print("\n");
       }
       
   
   
   
 }
  
}
