package sample;
import java.util.*;
 class StringClass33 
 {
   static int count=0,max=0,k; 
   static String s3="";
 static void perm(String s,int i,int n)
  {
    int j=0;
    
    if(i==n)
    {
      count++;
    System.out.println(s);
    
    }
 //if(count>=0)
 //{
   //int v=sum(value(s));
      ///int v1=sum(bin(v));
    //if(v1>max)
    //{
     ///max=v1;
/// }
  /// }
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

static int value(String so)
{
  int sum=0,n1;
  for(int k=0;k<so.length();k++)
  {
    char c=so.charAt(k);
    s3=s3+(int)(c-'A')+1;
    
  }
  int d=Integer.parseInt(s3);
   return d;
}
static int sum(int no)
{
  int n1,sum=0;
  for(k=0;no!=0;k++)
   {
     n1=no%10;
     sum=sum+n1;
    no=no/10; 
   }
   return sum; 
  }
  
 
static int bin(int no)
{
  int bin=0,n1;
  for(k=0;no!=0;k=k*10)
  {
   n1=no%2;
   bin=bin+n1*k;
   no=no%2;
  }
  return bin;
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
   System.out.println("no of permutations="+count);
   //System.out.print("the Surajs perm="+count)
     
  
}  
  
}
