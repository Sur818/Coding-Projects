package sample;
import java.util.*;
 class Stringclass18 
 {
   static int happy (int n)
   {
     
  while(n>9)
  {
    int sum=0;
    while(n!=0)
    {
     sum=sum+(int)Math.pow(n%10,2);
     n=n/10;
      
    }
    n=sum;
  }
  return n;
   }
   
  public static void main (String[] ar)
  {
    int i,j,n,z,n1;
    String s="";
    System.out.println("enter range");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    for(i=1;i<=n;i++)
    {
     z=happy(i);
     j=i;
     if(z==1)
     {
       while (j!=0)
       {
         
         n1=j%10;  
         s=s+(char)(64+n1);
         j=j/10;
         
       }
       System.out.println(s);
       s="";
       
     }
       
    }
    
    
    
  }
  
}
