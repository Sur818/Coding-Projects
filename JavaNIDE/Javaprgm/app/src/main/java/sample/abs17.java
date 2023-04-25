package sample;
import java.util.*;

abstract class Perfect
 {
   protected int i,sum,k;
   abstract int perfectno(int n);
}
class Simple extends Perfect
{
 
 int perfectno(int n)
 {
   System.out.println("factors are");
  for(i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
     sum=sum+i;
     System.out.print(i+" ");
    }
  }
 return sum;
 }
 void show(int n)
 {
   sum=perfectno(n);
  if(sum==n)
  {
   System.out.println("\nPerfect no");
  }
  else
{
  System.out.println("\nnot perfect no");
}
 }
}
class abs17
{
  public static void main(String[] ar)
  {
    int n;
   System.out.println("Enter no");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   Simple obj=new Simple();
   obj.show(n);
   
  }
}

