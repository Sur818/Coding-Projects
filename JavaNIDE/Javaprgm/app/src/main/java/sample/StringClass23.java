package sample;
import java.util.*;
 class StringClass23 
 { 
  public static void main (String[] arr)
  {
    String s;
    int i;
    System.out.print("enter sentence:-");
    Scanner m=new Scanner (System.in);
    s=m.nextLine();
    s=" "+s;
    char []ar=s.toCharArray();
    for(i=0;i<ar.length;i++)
    {
      if(ar[i]==' '&&i+1<ar.length)
      {
        char ch=Character.toUpperCase(ar[i+1]);
        ar[i+1]=ch;
        
      }
      
 
      
    }
    for(i=0;i<ar.length;i++)
    {
      
      System.out.print(ar[i]);
    }
    
    
  }
  
}
