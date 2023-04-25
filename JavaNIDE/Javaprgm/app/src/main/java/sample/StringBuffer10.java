package sample;
import java.util.*;
class StringBuffer10 
{
 
 public static void main (String[] ar)
 { 
   int i,j,k;  
   System.out.println("enter string");
   Scanner m=new Scanner(System.in);
   StringBuffer sb=new StringBuffer();
   sb.append(m.nextLine());
   for(i=0;i<sb.length();i++)
   {
     char ch=sb.charAt(i);
     j=i;
     k=0;
     char ch2=sb.charAt(j);
     while(ch2!=j&&k!=i)
     {
     char ch1=sb.charAt(k);
     System.out.print(" h");
     k++;
}
}}
}
