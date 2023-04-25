package sample;
import java.util.*;

abstract class Evilno
 {
   protected int i,n,f,n1, bin;
   abstract int evilno(int n);
  
}
class Binary extends Evilno
{
 int binary(int n)
 {
   i=1;
  while(n!=0)
  {
     n1=n%2;
     bin=bin+n1*i;
     n=n/2;
     i=i*10;
  }
  System.out.println("binary no="+bin);
  return evilno(bin);
 }
 int evilno(int n)
 {
  for(i=1;n!=0;i++)
  {
    n1=n%10;
    if(n1==1)
    {
      f++;
    }
    n=n/10;
   
  }
  if(f%2==0)
  {
   System.out.println("evil no");
  }
  else
{
  System.out.println("not evil no");
}
return 0;
 }

}
class abs7
{
  public static void main(String[] ar)
  {
    int n;
   Scanner m=new Scanner(System.in);
   Binary obj=new Binary();
   System.out.println("enter any no");
   n=m.nextInt();
   obj.binary(n);
  }
}
