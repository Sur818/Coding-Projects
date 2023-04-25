package sample;
import java.util.*;
class StringClass14 
{
  
  boolean iswordprsnt(String s,String word)
  {
   String []b=s.split(" ");
   for(String temp:b)
   {
     if(temp.equals(b))
     {
       return true;
     }
   }
   return false;
   }
 public static void main(String[] ar)
   {
     StringClass14 obj=new StringClass14();
     System.out.println("enter string");
     Scanner m=new Scanner (System.in);
     String s=m.nextLine();
     System.out.println("enter word:-");
     String s1=m.nextLine();
   
    if(obj.iswordprsnt(s,s1))
    {
       System.out.print("word are present in sentence");
    }
    else
   {
  System.out.print("word are not present in sentence");
   }
     
     
   }
}
