package sample;
import java.util.*;

class Oops3 
{
  private int i,n,sum=0;
  void setdata(int x)
  {
   n=x;
   m1();
  }
  void m1()
  {
   i=1;
   while(n!=0)
   {
     sum=sum+n;
    System.out.println("enter no");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    
   }
   System.out.print("total="+sum);
   
  }
  public static void main(String[] ar)
  {
    int u;
   Oops3 obj=new Oops3();
   System.out.println("enter no");
   Scanner m=new Scanner(System.in);
   u=m.nextInt();
   obj.setdata(u);
   
  }
  
}
