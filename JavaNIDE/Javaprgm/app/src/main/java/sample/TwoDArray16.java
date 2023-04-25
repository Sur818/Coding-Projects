package sample;
import java.util.*;
 class TwoDArray16 
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
       
       for(i=0;i<n;i++)
       {
         
        for(j=0;j<n;j++)
        {
          
         if(i==j&&a[i][j]!=1)
         {
           f=1;
           
         }
         else if(i!=j&&a[i][j]!=0)
         {
           f=1;
         }
          
        } 
         
       }
       if(f==0)
       {
         System.out.println("identity matrix");
       }
 else
{
  System.out.print("not identity matrix");
}
 
 }
  
}
