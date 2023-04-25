package sample;
import java.util.*;

 class Oops6
 {
protected int i,n,sum=0,rev=0,m,count=0,no;
void rev()
{
for(i=1;n!=0;i++)
{
  m=n%10;
  if(m==no)
  {
   count++;
  }
  sum=sum+m;
   rev=rev*10+m;
   n=n/10;
  }
  System.out.println("sum of digit"+sum);
  System.out.println("rev="+rev);
  System.out.println(no+"appears"+count+"times");
  }
 // }
//  class Test extends Oops5
//{
public static void main(String[] ar)
{
 Oops6 t=new Oops6();
 System.out.println("enter no");
 Scanner m=new Scanner(System.in);
 t.n=m.nextInt();
 System.out.println("enter digit for freq");
 t.no=m.nextInt();
  t.rev();
 
 
}
  
}
