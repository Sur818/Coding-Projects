package sampledata;
import java.util.*;
 class dsarray22 
 {
 static
{
  System.out.println("triplets whose sum = given target value");
}
 public static void main(String[] ar)
 {
  int i,j,k,n,target;
  boolean found=false;
  System.out.print("enter size of array:-");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  int []a=new int[n];
  for(i=0;i<n;i++)
  {
  System.out.print("a["+i+"]=");
  a[i]=m.nextInt();
  }
  System.out.print("enter target value:");
  target=m.nextInt();
  for(i=0;i<n-2;i++)
  {
    for(j=i+1;j<n-1;j++)
    {
      for(k=j+1;k<n;k++)
      {
        if(a[i]+a[j]+a[k]==target)
        {
          found=true;
          System.out.println("{"+a[i]+","+a[j]+","+a[k]+"}");
          
        }
        
      }
      
    }
    
   } 
   if(found==false)
   {
     System.out.println("not found");
   }
    
}
  
 } 
  
