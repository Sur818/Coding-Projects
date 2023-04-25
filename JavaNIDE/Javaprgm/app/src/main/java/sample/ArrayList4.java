package sample;
import java.util.*;
 class ArrayList4
 {
  
  public static void main (String[] ar)
  {
    int i,j;
    ArrayList <String>l1=new ArrayList<>();
    l1.add("suraj");
    l1.add("ashwani");
    l1.add("pawan");
    l1.add("rajnikant");
    for(i=0;i<l1.size();i++)
    {
      StringBuffer s=new StringBuffer();
     String s1=l1.get(i);
      StringBuffer s2=new StringBuffer(s1);
      s2.reverse();
      System.out.println(s2);
      
    }
    
    
    
  }
}
