package sample;
import java.util.*;

class Parent
{
  protected int i,n1,rev,n,sum=0,count=0,z;
 
  void rev(int n)
  {
    z=n;
   for(i=1;n!=0;i++)
   { 
     n1=n%10;
     rev=rev*10+n1;
     n=n/10;
    
   }
 System.out.println("rev of no="+rev);
   }
   void pal()
   {
    if(rev==z)
    {
      System.out.println("palindrome");
    }
    else
   {
     System.out.println("not palindrome");
   }
   }
  }
  

class Baby extends Parent
{
void rev(int n)
{
  for(i=1;n!=0;i++)
  {
   count++;
   sum=sum+n%10;
  n=n/10;
  }
  System.out.println("no of digits ="+count);
  }
  void pal()
  {
   System.out.println("sum of digits "+sum);
  }
  }
  class Methodover8 
  {
   public static void main(String[] ar)
   {
     int n;
     System.out.println("enter any no");
     Scanner m=new Scanner (System.in);
     n=m.nextInt();
     Parent obj=new Parent();
     obj.rev(n);
     obj.pal();
     Baby obj1=new Baby();
     obj1.rev(n);
     obj1.pal();
      
   }
  }
