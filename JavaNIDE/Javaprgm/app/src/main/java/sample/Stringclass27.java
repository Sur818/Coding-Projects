package sample;
import java.util.*;
 class Stringclass27
{
 public static void main (String[] ar)
  {
    int i,j,start=0;
    String s,s2;
    System.out.println("enter string");
    Scanner m=new Scanner(System.in);
    s=m.nextLine();
    s=s+" ";
    System.out.println("enter character want to check");
    s2=m.nextLine();
    for(i=0;i<s.length();i++)
    {
    char ch=s.charAt(i);
    if(ch==' ')
    {
      String s1=s.substring(start,i);
      boolean b=s1.endsWith(s2);
      if(b==true)
      {
        
        System.out.print(s1);
      }
        
      start=i;
      
      
      
    } 
      
          
    
    }
    
    
}
  
}

