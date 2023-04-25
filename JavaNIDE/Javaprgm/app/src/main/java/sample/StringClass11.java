package sample;
import java.util.*;
 class StringClass11 
 {
  
  String rev(String s)
  {
    int n=s.length();
    String u="";
    
    for(int i=n-1;i>0;i--)
    {
       u=u+s.charAt(i);
     
    }
    
return u;
    
    
    
  }
  
  
  
  public static void main (String[] ar)
  {
   int i,j,n;
   String s;
   System.out.println("enter string:-");
   Scanner m=new Scanner (System.in);
   StringClass11 obj=new StringClass11();
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
       System.out.print(v+" ");
        start=i;
        
        
      }
      
    }
    
  }
  
}
