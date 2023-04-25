package sample;
import java.util.*;
class TwoDArray1
 {
 public static void main (String[] ar)
 {
  int i,j,max,min,n;
  System.out.print("enter size if squre matrix");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  int [][]a=new int [n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      System.out.print("a["+i+"]["+j+"]=");
      a[i][j]=m.nextInt();
    }
  }
  max=min=a[0][0];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
    if(a[i][j]>max)
    {
      max=a[i][j];
    }
    else if(a[i][j]<min)
    {
      min=a[i][j];
    }
    }
  }
  System.out.println("max element="+max);
  System.out.println("min element="+min);
 }
  
}
