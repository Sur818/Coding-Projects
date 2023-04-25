package sample;
import java.util.*;
 class StringClass12
 {
  
  String rev(String s)
  {
    int n=s.length();
    String u="";
    
    for(int i=n-1;i>=0;i--)
    {
       u=u+s.charAt(i);
     
    }
    
return u;     
  }
  
  
  public static void main (String[] ar)
  {
   int i,j,n,c=0;
   String s;
   System.out.println("enter string:-");
   Scanner m=new Scanner (System.in);
   StringClass12 obj=new StringClass12();
    s=m.nextLine();
    s=s+" ";
    int start=0; 
    for(i=0;i<s.length();i++)
    {
      char ch=s.charAt(i);
      if(ch==' ')
      {
        
        String word=s.substring(start,i);
    String v= obj.rev(word);
     if(word.equals(v))
     {
       System.out.print(v+"  ");
       c++;
       v="";
     }
       start=i; 
        
        
      }
      
    }
    System.out.print("\n no of palindrome string="+c);
    
  }
  
}
