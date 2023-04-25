package sample;
import java.util.*;
 class StringClass35 
 {
   
 public static void main (String[] ar)
 {
  int i,n,flag=0,flag1=0,flag2=0,flag3,count=0;
  String s;
  System.out.println("enter string");
  Scanner m=new Scanner(System.in);
  s=m.nextLine();
  s.toLowerCase();
  
  for(i=0;i<s.length();i++)
  {
  char ch=s.charAt(i);
   if(ch>='a'&&ch<='z')
   {
     flag++;
   }
   else if(ch=='@'||ch=='$'||ch=='&'||ch=='#'||ch=='_')
   {
     flag1++;
   }
 else if(ch>='1'&&ch<='9')
   {
     flag2++;
  }
}
if(flag==s.length())
{
  System.out.print("char");
}

else if(flag+flag1==s.length())
{
  System.out.print("None");
}
else if(flag+flag1+flag2==s.length()&&flag1!=0)
{
  System.out.print("Ever");
}
else if(flag2==s.length())
{
  System.out.print("Num");
}

    
 }
  
}
