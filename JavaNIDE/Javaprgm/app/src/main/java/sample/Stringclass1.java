package sample;
import java.util.*;
 class Stringclass1
{
   public static void main (String[] ar)
   {
     int n;
     String a,c,f="";
     System.out.println("enter string");
     Scanner m=new Scanner (System.in);
     a=m.nextLine();
      a="."+a;
   String b=new String(a);
    for(int i=0;i<b.length()-1;i++)
    {
    if(b.charAt(i)=='.'||b.charAt(i)==' ')
    {
  f=f+Character.toUpperCase((b.charAt(i+1)))+".";

      
     
   }
   
 }
 System.out.print(f);
  
}
}
