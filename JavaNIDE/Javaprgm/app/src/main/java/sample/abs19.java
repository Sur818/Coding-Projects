package sample;
import java.util.*;

abstract class Perfect1 
{
  protected int sum=0,i,j;
  abstract int perfectno(int n);
}
class Range1 extends Perfect1
{
int perfectno(int n)
{
  sum=0;
  for(i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
     sum=sum+i;
    }
  }
  return sum;
 }
 void Range(int n)
 {
  for(j=1;j<=n;j++)
  {
  sum=perfectno(j);
   if(sum==j)
   {
    System.out.println(sum);
   }
  }
 }
 }
 class abs19
{
  public static void main (String[] ar)
  {
    int n;
    Scanner m=new Scanner(System.in);
    System.out.println("enter no");
    n=m.nextInt();
    Range1 obj=new Range1();
    obj.Range(n);
  }
}
