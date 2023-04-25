package sample;
import java.util.*;
class Objclass5
{
  public static void main (String[] ar)
  {
   int n;
   String obj=new String("Btps");
   String obj1=new String("Btps");
  System.out.println(obj.equals(obj1));
 System.out.println( obj.charAt(3));
 //System.out.println(toUppercase(obj));
 System.out.println(obj.concat(obj1));
 System.out.println(obj.equalsIgnoreCase(obj1));
  System.out.println(obj.indexOf('p'));
   System.out.println(obj.replace('B','s'));
 //System.out.println(obj.replace('B',"mbhg")); 
  System.out.println(obj.toLowerCase());
  System.out.println(obj.toUpperCase());
  System.out.println(obj.toCharArray());
  try
{
  System.out.println(obj.substring(0,5));
  }
  catch(Exception e)
  {
    System.out.println(e);
    System.out.println("entee correct indexing");
    Scanner m=new Scanner(System.in);
    n= m.nextInt();
    System.out.println(obj.substring(0,n));
    char []a={'a','b','c'};
    //System.out.print(String(char[] a);
    
  }
 } 
}
