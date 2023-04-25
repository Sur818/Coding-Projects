package sample;
import java.util.*;
 class Stringclass9 
 {
  
  public static void main (String[] ar)
  {
   int i,j,n;
   String s;
   System.out.println("enter string:-");
   Scanner m=new Scanner (System.in);
    s=m.nextLine();
    StringTokenizer st=new StringTokenizer(s," ");
    while(st.hasMoreTokens())
    {
      
      String word=st.nextToken();
      System.out.println(word);
    }
    
    
    
  }
  
}
