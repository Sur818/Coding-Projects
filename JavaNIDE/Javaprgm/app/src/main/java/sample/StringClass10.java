
package sample;
import java.util.*;
 class StringClass10 
 {
  
  public static void main (String[] ar)
  {
   int i,j,n;
   String s;
   System.out.println("enter string:-");
   Scanner m=new Scanner (System.in);
    s=m.nextLine();
    s=s+" ";
    int start=0;
   // StringTokenizer st=new StringTokenizer(s," ");
   // while(st.hasMoreTokens())
    //{
      
     // String word=st.nextToken();
      //System.out.println(word);
  //  }
    
    for(i=0;i<s.length();i++)
    {
      char ch=s.charAt(i);
      if(ch==' ')
      {
        
        String word=s.substring(start,i);
        System.out.println(word);
        start=i;
        
      }
    }
    
  }
  
}
