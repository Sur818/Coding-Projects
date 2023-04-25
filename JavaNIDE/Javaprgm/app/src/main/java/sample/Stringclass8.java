package sample;
import java.util.*;
class Stringclass8
{
  
  public static void main (String[] ar)
  {
    int pos;
    String f="";
   System.out.println("entee the name:-");
   Scanner m=new Scanner (System.in);
   String z=m.nextLine();
   z=" "+z;
   pos=z.lastIndexOf(' ');
   String s1=z.substring(pos+1);
   for(int i=0;i<pos;i++)
   {
    char b=z.charAt(i);
    if(b==' ')
    {
     f=f+Character.toUpperCase(z.charAt(i+1))+".";
     
    }
   }
   f=f+s1;
   System.out.print(f);
  
  }
  
}

