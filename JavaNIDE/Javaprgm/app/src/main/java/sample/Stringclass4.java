
package sample;
import java.util.*;
class Stringclass4 
{
  public static void main (String[] ar)
  {
    String s;
    int f1=0,f3=0,f2=0,count=0;
    System.out.println("enter string");
    Scanner m=new Scanner(System.in);
    s=m.nextLine();
    for(int i=0;i<s.length();i++)
    { 
      count++;
    char ch=s.charAt(i);
    if(ch=='a'||ch=='e'||ch=='i'|| ch=='o'|| ch=='u')
    {
      f1++;
    }
    else if(ch=='@'||ch=='&'||ch=='.')
    {
      f2++;
    }
    else if(ch==' ');
    {
      f3++;
    }
    }
  System.out.println("no of char"+"="+(count));
  System.out.println("no of vowels"+"="+f1);
  System.out.println("no of spchar"+"="+f2);
  
  }
  
}
