package sample;
import java.util.*;
class Stringclass7 
{
  void m1(char arr[])
  {
   int i,count=0;
   for(i=0;i<arr.length;i++)
   {
     System.out.println(arr[i]);
     count++;
   }
   
  System.out.print("no of char="+count);
  }
  public static void main (String[] ar)
  {
    
   String s;
   System.out.print("enter the string:-");
   Scanner m=new Scanner(System.in);
   s=m.nextLine();
  char arr[]=s.toCharArray();
  Stringclass7 obj=new Stringclass7();
  obj.m1(arr);
    
  }
  
}
