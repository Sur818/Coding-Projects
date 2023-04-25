package sample;
import java.util.*;
class Stringclass2 
{
  public static void main(String[] ar)
  {
    int f=0;
    System.out.println("enter string");
    Scanner m=new Scanner (System.in);
    String s=m.nextLine();
    for(int i=0;i<s.length();i++)
    {
      char b=s.charAt(i);
    for(int j=i+1;j<s.length()-1;j++)
    {
      if(s.charAt(j)==b)
      {
        f=1;
        break;
      }
    }
    }
    if(f==0)
    {
      System.out.print("unique string");
    }
    else
{
  System.out.print("not unique string");
}
    
  }
  
}
