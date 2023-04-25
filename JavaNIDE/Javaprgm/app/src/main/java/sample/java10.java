package sample;
import java.util.*;
 class java10
 { 
 public static void main (String[] ar)
 {
   int i,ch1;
   char ch2;
   String s,s1="";
   System.out.println("enter string");
   Scanner m=new Scanner(System.in);
   s=m.nextLine();
   for(i=0;i<s.length();i++)
   {
    
    ch1= (int)s.charAt(i);
    int place=ch1-'a'+1;
    int b=(122-place)+1;
    ch2=(char)b;
     s1=s1+ch2;
   }
   
   System.out.print(s1);
   
   
   
 }
  
}
