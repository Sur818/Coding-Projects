package sample;
import java.util.*;
class SyringClass21
 {
  static int i;
   int singleDigit(int n)
   {
    while(n>9)
    {
      int sum=0;
      while(n!=0)
      {
        sum=sum+n%10;
        n=n/10;
        
      }
      n=sum;
      
    }
    return n; 
   
   }
   
   
   int isBinarry(int n)
   {
     int sum=0;
   for(i=1;n!=0;i=i*10)
   {
    
    sum=sum+n%2*i;
    n=n/2;
    
   }
   return sum;
   }
   
  static int sumOfDigits(int n)
   {
     int n1,sum=0;
     for(i=1;n!=0;i++)
     {
      n1=n%10;
      sum=sum+n1;
      n=n/10;
      
     }
     return sum;
      
     
   }
   
   
   public static void main (String[] ar)
  {
    
    SyringClass21 obj=new SyringClass21();
    String s,s1="";
    int u,u1;
    System.out.println("enter word:-");
    Scanner m=new Scanner (System.in);
    s=m.nextLine();
   for(int i=0;i<s.length();i++)
   {
     char ch=s.charAt(i);
     u=(int)ch-'A'+1; 
    s1=s1+u;
   }
   int value=Integer.parseInt(s1);
  // System.out.println(value);
   
   int z=obj.singleDigit(value);
   //System.out.println(z);
   if(z%2==0)
   {
     if(sumOfDigits(obj.isBinarry(z))%2==0)
     {
       
       System.out.print("sum of digits of binary of equivalent unity intg from placevalueof given word are even ");
       
     }
     else
{
  System.out.print("sum of digits of binary of equivalent unity intg from placevalueof given word are odd");
}
     
   }
   else
{
  System.out.print("sum of digits derived unity digits of place value of charofwords is odd");
}
   
   
   
   
    
    
  }
  
}
