package sample;
import java.util.*;

 class Oops5
 {
protected int i,n,sum=0,rev=0,m;
void rev()
{
for(i=1;n!=0;i++)
{
  m=n%10;
  sum=sum+m;
   rev=rev*10+m;
   n=n/10;
  }
  System.out.println("sum of digit"+sum);
  System.out.println("rev="+rev);
  }
 // }
//  class Test extends Oops5
//{
public static void main(String[] ar)
{
 Oops5 t=new Oops5();
 System.out.println("enter no");
 Scanner m=new Scanner(System.in);
 t.n=m.nextInt();
t.rev();
 
 
}
  
}
