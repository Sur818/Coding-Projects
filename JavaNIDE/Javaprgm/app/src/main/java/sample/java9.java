package sample;
import java.util.*;
 class java9 
 {
   
   int coronano(int n)
   {
     int f=0,n1,i;
     for(i=0;n!=0;i++)
     {
       
       n1=n%10;
       if(n1%2==0)
       {
         f=1;
         break;
       }
       n=n/10;
       
     }
   return f;
   
   
  }
  public static void main (String[] ar)
  {
    int x,n;
    System.out.println("enter the no");
    Scanner m=new Scanner (System.in);
    n=m.nextInt();
    java9 obj= new java9();
   x= obj.coronano(n);
   if(x==0)
   {
     System.out.print("corona no");
   }
   else
{
  System.out.print("not corona no");
}
   
  }
  
}
