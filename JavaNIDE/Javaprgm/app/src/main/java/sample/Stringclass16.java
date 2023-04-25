package sample;
import java.util.*;
class Stringclass16 
{
  
  
  
 static String dupl(String s)
  {
    String sr="";
    char []h=s.toCharArray();
    int i,j,k;
    
    int n=h.length;
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
       if(h[i]==h[j])
       {
        for(k=j;k<n-1;k++)
        {
          h[k]=h[k+1];
        }
        n--;
        i--;
        }
        } 
        }
        for(i=0;i<n;i++)
        {
          sr=sr+h[i];
        }
 
  return sr; 
  }
  
  
  
  
  public static void main(String[] ar)
  {
    String s,s1;
    System.out.println("enter string");
    Scanner m=new Scanner (System.in);
    s=m.nextLine();
    s=s+" ";
    int i,start=0;
    for(i=0;i<s.length();i++)
    {
      
      char c=s.charAt(i);
      if(c==' ')
      {
        s1=s.substring(start,i);
        System.out.println(dupl(s1));
        
        start=i;
        
      }
      
    }
  
    
   
  }
  
}
