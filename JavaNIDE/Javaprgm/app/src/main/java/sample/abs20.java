package sample;
import java.util.*;

abstract class Pronic
 {
   protected int n,m,i,f;
   abstract protected void m1();
  
}
class Asb extends Pronic
{
void setdata(int x)
{
 n=x;
m1();
}
public void m1()
{
  i=1;
while(i<=n)
{
m=i*(i+1);
if(m==n)
{
 f=1;
 System.out.println(i+"*"+(i+1));
 break;
}
i++;
}
if(f==1)
{
  System.out.println("pronic no");
}
else
{
  System.out.println("not pronic no");
}
}
}
class abs20
{
public static void main(String[] ar)
{
  int n;
  System.out.println("enter no");
Scanner m=new Scanner(System.in);
n=m.nextInt();
Asb obj=new Asb();
obj.setdata(n);
}
}
