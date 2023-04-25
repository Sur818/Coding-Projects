package sample;
import java.util.*;
 class StringClass32
 {
   static int count=0; 
 static void perm(String s,int i,int n)
  {
    int j=0;
    
    if(i==n)
    {
      count++;
    System.out.println(s);
    
    }
     else
{
 for(j=i;j<=n;j++)
 {
  s=swap(s,i,j);
   perm(s,i+1,n);
  s=swap(s,i,j);  
 }
}
  }
 static String swap(String s,int i,int j)
{
char []a=s.toCharArray();
char temp;
temp=a[i];
a[i]=a[j];
a[j]=temp;
String s1=new String(a);
return s1;
}
      
public static void main (String[] ar)
{
 int n;
 StringClass32 obj=new StringClass32();
  System.out.println("enter a string");
  Scanner m=new Scanner(System.in);
  String s;
  s=m.nextLine();
  n=s.length();
    perm(s,0,n-1);
    System.out.print("no of permutations="+count);

  
  
}  
  
}
