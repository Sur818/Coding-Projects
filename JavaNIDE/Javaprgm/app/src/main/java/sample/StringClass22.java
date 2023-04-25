package sample;
import java.util.*;
class StringClass22
 {
  
  public static void main (String[] ar)
  {
    String s,s1;
    System.out.println("enter string");
    Scanner m=new Scanner (System.in);
    s=m.nextLine();
    StringTokenizer b=new StringTokenizer(s," ");
    while(b.hasMoreTokens())
    { 
  
      s1=b.nextToken();
      s1=" "+s1;
      for(int i=0;i<s1.length();i++)
      {
      char ch=s1.charAt(i);
      if(ch==' '&&i+1<s1.length())
      {
     char ch1=Character.toUpperCase(s1.charAt(i+1));
      
        System.out.print(s1.replace(s1.charAt(i+1),ch1));
      }
     }
  }
    
    
    
  }
}
