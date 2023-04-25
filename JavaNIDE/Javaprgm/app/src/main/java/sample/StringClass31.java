package sample;
import java.util.*;
class  StringClass31
{ 
  static int count=0;
   static void printPermutn(String str, String ans) 

    { 
     
        if(str.length()==0) 
        { 
           count++;
            System.out.println(ans+" "); 

            return; 

        } 


        for (int i=0;i<str.length();i++)
         { 

     char ch=str.charAt(i); 

            String s = str.substring(0,i) +  

                         str.substring(i+1); 

     printPermutn(s,ans+ch); 

        } 

    } 

    public static void main(String[] ar) 
    { 
      String s;
System.out.println("enter word");
Scanner m=new Scanner (System.in);
s=m.nextLine();
   printPermutn(s, ""); 
  System.out.print("no of permutations="+count);

    } 
} 
