package sample;
import java.util.*;

abstract class Duckno
{ 
  
  int i,l,f,m;
 abstract void duckno(String str);
}
class Print extends Duckno
{

  void duckno(String str)
  {
    l=str.length();
   if(str.charAt(0)=='0')
   {
     System.out.println(" not a duck no");
   }
   else
   {
    for(i=1;i<l;i++)
    {
     m=str.charAt(i);
  
     if(m=='0')
     {
      f=1;
      break;
     }
     
    }
    if(f==1)
    {
      System.out.println("duck no");
      }
      else
      {
        System.out.println("not duck no");
      }
    }
   }
  } 
  class abs8
{
  public static void main(String[] ar)
  {
    String x;
   Scanner m=new Scanner (System.in);
   Print obj=new Print();
   System.out.println("enter any no");
   x=m.nextLine();
   obj.duckno(x);
   
  }
}
