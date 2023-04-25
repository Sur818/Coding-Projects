package sample;
import java.util.*;
class StringBuffer6 
{
  public static void main (String[] ar)
  {
   
  StringBuffer  sb =new StringBuffer("abcdef ghijk");
   sb.setLength(4);
System.out.println(sb);
  sb.ensureCapacity(200);
  System.out.println(sb.capacity());
  }
  
}
