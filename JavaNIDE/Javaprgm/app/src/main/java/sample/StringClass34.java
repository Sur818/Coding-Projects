package sample;
import java.util.*;
class StringClass34
 {
   
  public static void main (String[] ar)
  {
    String s,s1="",s2="";
    int i;
    System.out.println("enter A string");
    Scanner m=new Scanner(System.in);
    s=m.nextLine();
    for(i=0;i<s.length();i++)
    {
      char ch=s.charAt(i);
      if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
      {
        s1=s1+ch;
      }
      else
      {
        s2=s2+ch;
      }
      
      
    }
 
    System.out.println(s1);
    System.out.println(s2);
    
    
  }
  
}
