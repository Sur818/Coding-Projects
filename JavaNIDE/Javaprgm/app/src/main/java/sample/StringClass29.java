package sample;
import java.util.*;
 class StringClass29 
 {
  static int m1(int n)
   {
     int pos=0,n1,i,f=0;
     for(i=0;n!=0;i++)
     {
       pos++;
       n1=n%10;
       if(pos%2!=0)
       {
        if(n1%2==0)
        {
          f=1;
          break;
        }
         
         
       }
       else
{
  if(n1%2!=0)
  {
    f=1;
    break;
  }
  
}
   n=n/10;  
     
     }
     return f;
     
     
     
     
     
   }
   public static void main (String[] ar)
   
   {
     int n,z;
     System.out.println("enter the no");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
   z=m1(n);
     if(z==0)
     {
       System.out.println("suraj no");  
     }
     else
{
  System.out.println("not suraj no");
}
     
     
     
     
     
   }
   
   
   
  
}
