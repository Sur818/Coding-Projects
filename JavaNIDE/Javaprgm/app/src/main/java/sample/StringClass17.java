package sample;
import java.util.*;
class StringClass17
 {
   
   int m1(int n)
   {
   while (n>9)
   {
     int sum=0;
     
     while (n!=0)
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
     StringClass17 obj= new StringClass17();
     String s,value="";
     int val,z,n;
     System.out.println("enter word");
     Scanner m= new Scanner(System.in);
     s=m.nextLine();
     for(int i=0;i<s.length();i++)
     {
      char c= s.charAt(i);
       n=(int)c-'A'+1;
       value=value+n;
     }
     System.out.println(value);
     val=Integer.parseInt(value);
    z=obj.m1(val);
    if(z==1)
    {
      System.out.print("happy string");
    }
    else
{
     System.out.print("not happy string");
     
     
   }
  
}
}
