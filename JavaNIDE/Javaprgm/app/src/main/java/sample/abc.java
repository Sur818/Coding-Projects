package sample;
import java.util.*;
class abc 
{

  public static void main(String[] ar)
  {
    int i,j,k,f=0,count=0;
    String s;
    System.out.println("enter string");
    Scanner m=new Scanner(System.in);
    s=m.nextLine();
    s=" "+s+" ";
    for(i=1;i<s.length()-1;i++)
    {
      char ch=s.charAt(i);
      j=i-1;
      char ch1=s.charAt(j);
      k=i+1;
      char ch2=s.charAt(k);
      if(ch2-1==ch&&ch1+1==ch)
      {
      count++;
      System.out.println(ch); 
      }
      }      
    
    System.out.print(count);
    }
   
    
}
