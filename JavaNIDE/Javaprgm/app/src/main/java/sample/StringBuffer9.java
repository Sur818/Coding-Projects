package sample;
import java.util.*;
 class StringBuffer9 
 {
  public static void main(String[] ar)
 {
 int sum=0,i;
 System.out.println("enter string");
 Scanner m=new Scanner(System.in);
  StringBuffer s=new StringBuffer(" ");
  s.append(m.nextLine());
  for(i=0;i<s.length();i++)
  {
    char ch=s.charAt(i);
    if(ch==' ')
    {
    sum=sum+(int)Character.toUpperCase(s.charAt(i+1));
    }
  
  }
  if(sum%2==0)
  {
    System.out.print("stark word");
  }
  else
{
  System.out.print("not stark word");
}
    
  
  
  
  
  }
  
}
