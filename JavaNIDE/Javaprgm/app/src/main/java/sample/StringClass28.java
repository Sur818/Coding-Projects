package sample;
import java.util.*;
import java.util.StringTokenizer;
class StringClass28 
{
  static String m1(String s)
  {
    int n,z;
    String r="";
    System.out.println("which posn char wants to delete");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    char []c=s.toCharArray();
    z=c.length;
     if(n>=z)
    {
      
      System.out.print("position out of bond");
    }
else
{
  

    for(int i=n;i<z;i++)
    {
      c[i-1]=c[i];
      
    }
    for(int i=0;i<z-1;i++)
    {
     r=r+c[i];
    }
    }
    return r;
    
  }
  
  
  public static void main (String[] ar)
  {
    String s;
    System.out.println("enter string");
    Scanner m= new Scanner (System.in);
    s=m.nextLine();
    StringTokenizer t=new StringTokenizer(s," ");
    while(t.hasMoreTokens())
    {
      String s1=t.nextToken();
      String s2=m1(s1);
      System.out.println(s2);
      
      
      
      
    }
    
  }
  
  
  
  
  
}
