
package sample;
import java.util.*;
 class abd
 {
 static void freqOfCh(String s)
 {
 int i,j,count=1;
s.toLowerCase();
  char ch[]=s.toCharArray();
  for(char cha='a';cha<='z';cha++)
  {  
   
   count=0;
    for(j=0;j<ch.length;j++)
    {
      if(ch[j]==cha)
      {
      count++;
      }
    }
   if(count!=0)
   {
    System.out.println("freq of char:-"+cha+"="+count);
    }
    count=1;
  }
  }
public static void main (String [] ar)
{
  
  int i,j;
  String s;
  System.out.println("enter string");
  Scanner m=new Scanner(System.in);
  s=m.nextLine();
   freqOfCh(s);
  
  
}

}
