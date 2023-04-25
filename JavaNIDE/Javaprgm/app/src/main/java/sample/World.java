package sample;
import java.util.*;
 class World
 {
   int i,j,fact=1,n1,count,n;
  void m1(int n)
   {
    for(i=1;i<=n;i++)
    {
     fact=fact*i;
    }
    System.out.println(n+"!"+"="+fact);
    for(i=1;fact!=0;i++)
    {
      n1=fact%10;
      if(n1==0)
      {
        count++;
      }
     fact=fact/10;
    }
    System.out.println("no of zero pr in"+n+"!"+"="+count);
   }
   public static void main (String[] ar)
   {
     World obj=new World();
     System.out.println("enter no ");
     Scanner m=new Scanner (System.in);
     obj.n=m.nextInt();
    obj.m1(obj.n);
   }
  
}
