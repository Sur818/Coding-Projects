package sample;
import java.util.*;
 class Array22
 {
  void dup(int b[],int n)
   {
     int i,x,j,k,count1=0;
     for(k=0;k<n;k++)
     {
       for(j=k+1;j<n;j++)
      {
        if(b[j]==b[k])
        {
          count1++;
          for(x=j;x<n;x++)
          {
            
            b[x]=b[x+1];
          }
          
        }
        //n--;
        
      }
      }
      for(i=0;i<n-count1;i++)
      {
        System.out.println(b[i]);
      } 
       
    
   }
   
  public static void main (String[] ar)
  {
    Array22 obj=new Array22();
    int i,j,n,k=0,t,count=0;
    System.out.print("enter size of array");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    int a[]=new int[n];
    int b[]=new int [10];
    for(i=0;i<n;i++)
  {
    System.out.println("a["+i+"]=");
    a[i]=m.nextInt();
  }
for(i=0;i<n;i++)
{
  j=0;
  while(j<n)
  {
    if(a[j]==a[i]+1)
    {
      count++;
     if(count==1)
      {
        b[k++]=a[i];
      }
     b[k++]=a[j];
    }
    j++;
  }
}

for(i=0;i<k;i++)
{
 System.out.println(b[i]);
}
 //obj.dup(b,k);  
    
  }
   
  
}
