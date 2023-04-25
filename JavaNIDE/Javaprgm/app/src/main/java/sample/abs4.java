package sample;
import java.util.*;
abstract class Prme 
{
  int i,j,sum=0,n,n1,sum1=0;
  abstract void smith(int n);
  
}
class Range extends Prme
{
  int sumofdigits(int n)
{
while(n!=0)
{
n1=n%10;
sum1=sum1+n1;
n=n/10;
}
return sum1;
}


int prime(int n)
{
 j=2;
 while(n>1)
 {
  if(n%j==0)
  {
   sum=sum+sumofdigits(j);
   n=n/10; 
   sum1=0;
  }
  else
{
  j++;
}
 }
 return sum;
}


void smith(int n)
{
 
 for(i=2;i<=n;i++)
 {
   prime(i);
  sumofdigits(i);
   if(sum1==sum)
   {
    System.out.println(sum);
    sum1=0;
    sum=0;
   }
   sum=0;
   sum1=0;
 }
}
}
class abs4
{
  public static void main(String[] ar)
  {
    int n;
    Scanner m=new Scanner(System.in);
    Range obj=new Range();
    System.out.println("enter no");
   n=m.nextInt();
     obj.smith(n);
    
    
  }
}

