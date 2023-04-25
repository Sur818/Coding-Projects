package sample;
import java.util.*;
class StringClass13 
{
  
 public static void main (String[] ar)
 {
   String s;
   int start=0,count=0,j=0;
   System.out.print("enter a sentence:-");
   Scanner m=new Scanner (System.in);
  String z=m.nextLine();
  z=z+" ";
 System.out.print("which word you want search:-");
   Scanner f=new Scanner(System.in);
   String s2=f.nextLine();
  String[] arr=z.split(" ");
  for(String temp:arr)
  {
    count++;
    
    if(temp.compareTo(s2)==0)
    { 
      j=1;
      
      System.out.print("this world present at position="+count);
    }
    }
    if(j==0)
    {
      System.out.print("this word not present in sentence");
    }
 }
  
}
 
