package sample;
import java.util.*;

class  Big
 {
   protected int sum,prod=1,i,n1;
  void spy(int n)
  {
   for(i=1;n!=0;i++)
   {
    n1=n%10;
    sum=sum+n1;
    prod=prod*n1;
    n=n/10;
    
   }
   if(sum==prod)
   {
     System.out.println("spy no");
   }
   else
{
 System.out.println("not spy no");
}
  }
  }
  
class Small extends Big
{
  
 
}
class Inhert8
{
 public static void main(String[] ar)
 {
   int x;
   Scanner m=new Scanner(System.in);
   Small obj=new Small();
   System.out.println("enter no");
   x=m.nextInt();
   obj.spy(x);
   
 }
}

