package sample;
import java.util.*;
 class StringClass20
 {
   String s;
   int freq;
   
   StringClass20()
   {
   freq=0;  
  s="";
   }
   
   
   boolean isCap(String w)
   {
     char ch=w.charAt(0);
     if(ch>='A'&&ch<='Z')
     {
       return true; 
     }
     else
{
  return false;
}
}
void display()
{
  
  System.out.println("sentence="+s);
  System.out.println("frequency="+freq);
}
     
   
   
  public static void main (String[] ar)
  {
   StringClass20 obj=new StringClass20();
    System.out.println("enter sentence");
    Scanner m=new Scanner (System.in);
    obj.s=m.nextLine();
    StringTokenizer b= new StringTokenizer(obj.s," ");
    while(b.hasMoreTokens())
    {
      
      if(obj.isCap(b.nextToken()))
      {
        obj.freq++;
       // System.out.print(v);
        
      }
      
      
      
    }
    obj.display ();
    
    
    
  }
  
}
