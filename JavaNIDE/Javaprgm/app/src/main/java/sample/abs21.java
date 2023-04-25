package sample;
import java.util.*;

abstract class Rangepronic
 {
   protected int f,i,m,n,j;
  abstract protected int pronicno(int n);  
  
}

class Printrange extends Rangepronic
{
public int pronicno(int n)
{
  int i=1;
while(i<=n)
{
m=i*(i+1);
if(m==n)
{
 System.out.println(i+"*"+(i+1));
f=1;
}
}
return f;
}

 void show(int n)
{
 for(j=1;j<=n;j++)
 {
   f=0;
  f=pronicno(j);
  if(f==j)
  {
   System.out.println(j);
  }
  else
{
  System.out.println(f);
}
 }
}
}
class abs21
{
  public static void main(String[] ar)
  {
    int n;
    System.out.println("enter range");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   Printrange obj=new Printrange();
  obj.show(n);

  
  }
}
