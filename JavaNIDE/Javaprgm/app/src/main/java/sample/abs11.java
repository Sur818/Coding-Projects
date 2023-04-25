package sample;
import java.util.*;
abstract class Magicno
{
  protected int i,sum,z;
  abstract void magicno(int n);
  
}
class Xyz extends Magicno
{
void magicno(int n)
{
  sum=0;
  z=n;
 while(n!=0||sum>9)
{
  
  if(n==0)
  {
    n=sum;
    sum=0;
  }
  sum=sum+(n%10);
   n=n/10;
}
if(sum==1)
{
System.out.println(z);
}
//else
//{
//System.out.println("not magic no");
//}
}
void show(int n)
{
  for(i=1;i<=n;i++)
  { 
    magicno(i);
   
  }
}
}

class abs11
{
public static void main(String[] ar)
{
  int n;
Scanner m=new Scanner(System.in);
Xyz obj=new Xyz();
System.out.println("enter range");
n=m.nextInt();
obj.show(n);
}
}


