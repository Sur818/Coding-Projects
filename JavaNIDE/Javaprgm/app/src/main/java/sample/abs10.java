package sample;
import java.util.*;

abstract class Neon
 {
   protected int i;
   int  m,n1,sum;
   abstract void neonno(int n);
  
}
class Testn extends Neon
{
void neonno(int n)
{
m=n*n;
for(i=0;m!=0;i++)
{
n1=m%10;
sum=sum+n1;
m=m/10;

}
if(sum==n)
{
 System.out.println("neon no");
 }
 else
{
  System.out.println("not neon no");
}
}
}
class abs10
{
  public static void main(String[] ar)
  {
int n;
   Testn obj=new Testn();
   System.out.println("enter no");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   obj.neonno(n);
  }
  
}
