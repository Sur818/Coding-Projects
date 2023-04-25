package sample;
import java.util.*;
 class inner10
 { 
 public static void main (String[] ar)
 {
   int i,ch1;
   char ch2;
   String s,s1="";
   System.out.println("enter string");
   Scanner m=new Scanner(System.in);
   s=m.nextLine();
   for(i=0;i<s.length();i++)
   {
    
    ch1=(int)s.charAt(i);
    if(ch1>='a'&&ch1<='z')
    {
    int place=ch1-'a'+1;
    int b=('z'-place)+1;
    ch2=(char)b;
    s1=s1+ch2;
    }
    else if(ch1>='A'&&ch1<='Z')
    {
      
int place=ch1-'A'+1;
    int b=('Z'-place)+1;
    ch2=(char)b;
    s1=s1+ch2;
    }
     
     
   }
   
   System.out.print(s1);
   
   
   
 }
  
}
