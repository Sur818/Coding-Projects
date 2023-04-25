package sample;
import java.util.*;
class Stringclass3 
{
  public static void main (String[] ar)
  {
    String s,f="";
    System.out.println("enter string");
    Scanner m=new Scanner(System.in);
    s=m.nextLine();
    for(int i=0;i<s.length();i++)
    {
       char z=s.charAt(i);
       if(z=='a'||z=='e'||z=='i'||z=='o'||z=='u')
       {
        f=f+Character.toUpperCase(z);
        
       }
       else
       {
        f=f+z;
       }
       
    }
  
  System.out.print(f);
  
  
  }
  
}
