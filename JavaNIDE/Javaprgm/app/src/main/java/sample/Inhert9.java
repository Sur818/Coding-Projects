package sample;
import java.util.*;

 class P
 {
   protected int i,sum,n1,j,z,n;
   void niven(int n)
   {
     z=n;
     for(i=1;n!=0;i++)
     {
       n1=n%10;
       sum=sum+n1;
       n=n/10;
      
     }
     if(z%sum==0)
     {
      System.out.println("niven no");
     }
     else
{
 System.out.println("not niven no");
}
    
   }
  
}
class Q extends P
{
  void setdata()
  {
   System.out.println("enter no ");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   niven2(n);
   
  }
 
 private void niven2(int n)
 {
  for(i=1;i<=n;i++)
  {
    z=i;
    sum=0;
   for(j=1;i!=0;j++)
   {
     n1=i%10;
     sum=sum+n1;
     i=i/10;
   }
   i=z;
   if(z%sum==0)
   {
    System.out.println(z);
   }
  }
 }
}
class Inhert9
{
  public static void main(String[] ar)
  {
    int z;
    Scanner t=new Scanner (System.in);
    Q obj=new Q();
    System.out.println("enter no");
    z=t.nextInt(); 
    obj.niven(z);
    obj.setdata();
  
  }
}
