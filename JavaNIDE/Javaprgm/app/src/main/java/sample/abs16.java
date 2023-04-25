package sample;
import java.util.*;
import java.lang.Math;
abstract class Sunny
{
protected int i;
double m;
abstract int sunnyno(int n);
}
class abh extends Sunny
{
int sunnyno(int n)
{
m=Math.sqrt(n+1);
if(m%1==0)
{
System.out.println("sunny no");
}
else
{
System.out.println("not sunny no");
}
return (int)m;
}
}
class abs16
{
  public static void main(String[] ar)
  {
    int n;
    System.out.println("enter no");
   Scanner m=new Scanner(System.in);
   abh obj=new abh(); 
   n=m.nextInt();
   obj.sunnyno(n);
   
   
  }
}
