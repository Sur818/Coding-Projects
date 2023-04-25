package sample;
import java.util.*;
class Array20 
{
  
  public static void main (String[] ar)
  {
    
    int i,j,temp,n;
   System.out.print("enter size of array");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   int []a=new int[n];
   for(i=0;i<n;i++)
   {
     System.out.println("a["+i+"]=");
     a[i]=m.nextInt();
   }
   for(i=0;i<n-1;i++)
   {
     if(a[i]==0)
     {   
     j=i+1;
   
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
  
   }
   }
    
 for(i=0;i<n;i++)
 {
   System.out.print(a[i]);
 } 
    
    
  }
  
}
