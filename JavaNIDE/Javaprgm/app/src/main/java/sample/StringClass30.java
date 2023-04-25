package sample;
import java.util.*;
class StringClass30
 {
   StringClass30()
   {
     System.out.println("it gives all possible palindrome substring+-\n");
   }
   boolean ispalindrm(String s)
   {
     int i,n,f=0;
     n=s.length();
    for(i=0;i<n/2;i++)
    {
     if(s.charAt(i)!=s.charAt(n-1-i))
       
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
   String s,s1,s2;
   int i,j,n;
   StringClass30 obj=new StringClass30();
  System.out.println("enter any word");
  Scanner m=new Scanner (System.in);
 s=m.nextLine();
 for(i=0;i<s.length();i++)
 {
 char ch=s.charAt(i);
for(j=i+1;j<s.length();j++)
{
  char ch1=s.charAt(j);
  if(ch==ch1)
  {
    
     s2=s.substring(i,j+1);
    if(obj.ispalindrm(s2))
    {
      n=s2.length();
      
     System.out.println(s2);
    }
      
      
      
    }
  }
  
}
 
 
 }
   
   
   
   
   
   
 }

