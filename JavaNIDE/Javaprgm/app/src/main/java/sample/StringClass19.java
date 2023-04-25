package sample;
import java.util.*;
class StringClass19 
{
  public static void main (String[] ar)
  {
    System.out.println("enter word");
    Scanner m=new Scanner (System.in);
    String s;
    s=m.nextLine();
    s=" "+s;
    int i,count=0;
    for(i=0;i<s.length();i++)
    {
      char c=s.charAt(i);
      if(c==' ')
      {
        char d=s.charAt(i+1);
        if((int)d>=65&&(int)d<=90)
        {
          count++;
          
          
        }
        
        
        
      }
    }
    System.out.print("freq="+count);
    
    
    
  }
  
}
