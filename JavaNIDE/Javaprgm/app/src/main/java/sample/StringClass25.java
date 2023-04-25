package sample;
import java.util.*;
import java.util.StringTokenizer;
class StringClass25
 {
   int sum(int n)
   {
     while(n>9)
     {
      int su=0;
      while(n!=0)
      {
       int n1=n%10;
       su=su+n1;
       n=n/10;
      }
      n=su;
     }
     return n;
     
   }
   
   
   int isbin(int n)
   {
     int bin=0;
     for(int i=1;n!=0;i=i*10)
     {
       
      int n1=n%2;
      bin=bin+n1*i;
      n=n/2;
     }
     return bin;
     
   }
   
   
   boolean isprime(int n)
   {
     int f=0;
     for(int i=2;i<n/2;i++)
     {
       if(n%i==0)
       {
         f=1;
         break;
    
       }
       
     }
     if(f==0)
     {
       return true;
       
     }
     else
{
  return false;
}
   
   }
   
   
   
public static void main (String[] ar)
{
  int i,val,value;
  StringClass25 obj =new StringClass25();
  String s,s1,s2="";
  System.out.println("enter sentence:-");
  Scanner m=new Scanner(System.in);
   s=m.nextLine();
  StringTokenizer b=new StringTokenizer(s," ");
  while(b.hasMoreTokens())
  {
    s1=b.nextToken();
    for(i=0;i<s1.length();i++)
    {
     char ch=s1.charAt(i);
    val=(int)ch-'A'+1;
     s2=s2+val;
      
   }
   System.out.println(s2);
   value =Integer.parseInt(s2);
   System.out.println(value);
   System.out.println(obj.sum(value));
  int n=obj.isbin(obj.sum(value));
   System.out.println(n);
  if(obj.isprime(n))
  {
   System.out.println("yes");

    
  }
  else
{
  System.out.println("no");
}
   
  
}
  
  
}
}
