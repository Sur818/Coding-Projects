package sample;
import java.util.*;
class Forloop18
 {
   static int i,j,f=0,z,k=1,n,c=0;
   static double sum=0,p;
   static int prime(int n)
   {
     f=0;
     for(i=2;i<=n/2;i++)
     {  
       if(n%i==0)
       {
         f=1;
         break;
       }
     }
     if(f==1)
     {
       return 0;
     }
     else
{
  return n;
}
     
   }
  
 public static void main (String[] ar)
 {
   System.out.println("enter no of term");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
  for(j=2;c<=n-1;j++)
  {
   
    z=prime(j);
    if(z!=0)
    {
     c++;
      System.out.print("1/"+k+"^"+j);
      p=Math.pow(k,j);
       sum=sum+1/p;
       k++;
       if(c<k)
       {
         
       System.out.print(" + ");
       }
    }
    
   
  }
  System.out.print("sum of the series ="+sum);
}
}
