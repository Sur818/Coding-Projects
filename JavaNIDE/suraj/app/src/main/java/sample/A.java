package sample;
import java.util.*;
class A
{
protected int a,b,A,P;
void areaR()
{
 A=a*b;
 System.out.println("area of ractangle"+A);
}
void perim()
{
P=2*(a+b);
System.out.println("perimeter is "+P);
}
}
class B extends A
{
	int x,y;
void setdata(int x,int y)
{
a=x;
b=y;
areaR();
perim();
}
}
class Test
{
public static void main(String[] ar)
{
	int x,y;
	B obj=new B();
	System.out.println("enter lenth");
	Scanner m=new Scanner(System.in);
	x=m.nextInt();
	System.out.println("enter width");
	y=m.nextInt();
	obj.setdata(x,y);
}
}

