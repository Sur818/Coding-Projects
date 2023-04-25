package sample;
import java.util.*;
public class Stringclass5 
{
  static
{
  System.out.println("piglatin word:-");
}
  public static void main (String[] ar)
  {
    String f="",b;
    int i;
   System.out.print("enter string:-");
   Scanner m=new Scanner(System.in);
    b=m.nextLine();
   b=b.toUpperCase();
   for(i=0;i<b.length();i++)
   {
    char ch=b.charAt(i);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
      break;
    }
   }
   f=f+b.substring(i)+b.substring(0,i)+"AY";
   System.out.print(f);
    
    
    
    
  }
  
}
