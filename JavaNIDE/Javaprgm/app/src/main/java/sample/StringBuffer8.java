package sample;
import java.util.*;
 class StringBuffer8 
{
  
public static void main (String[] ar)
{
  int start=0;
  System.out.println("enter string");
  StringBuffer s=new StringBuffer();
  Scanner m=new Scanner(System.in);
  s.append(m.nextLine());
  s.append(" ");
  for(int i=0;i<s.length();i++)
  {
    
    char ch=s.charAt(i);
    if(ch==' ')
    {
      StringBuffer s1=new StringBuffer();
    s1.append(s.substring(start,i));
     start=i;
     s1.reverse();
     System.out.print(s1+" ");
     
     
      
    }
  }
  
  
  
  
}
}
