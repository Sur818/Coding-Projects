package sample;
import java.util.*;
class StringClass24 
{
 static String isRev(String w)
  {
    char []arr=w.toCharArray();
    int n=arr.length;
    String rev="";
    for(int i=n-1;i>=0;i--)
    {
    rev=rev+arr[i];
    }
    return rev;
    
  }
  public static void main (String[] ar)
  {
    
 String s,f="";
 int count=0;
 System.out.println("enter string");
 Scanner m=new Scanner (System.in);
 s=m.nextLine();
StringTokenizer b=new StringTokenizer(s," ");
while (b.hasMoreTokens())
{
  count++;
  String s1=b.nextToken();
  if(count%2==0)
  {
    String s2=isRev(s1); 
    f=f+s2+" ";
    
  }
  else
{
  f=f+s1+" ";
}
  
    
  
}
System.out.print(f);
    
  }
}
