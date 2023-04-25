package sample;
import java.util.*;

interface I18
{
	double m1(int n,int m);
}
interface I19
{
	double ser1(double n,int m);
}
abstract class I20
{
	abstract double ser2(double n,int m);
}
class Sample15 extends I20 implements I18,I19
{
	int i,j,sign=-1,fact=1;
	double x,sum,m1;
	public double m1(int n,int m)
	{
	  x=n;
		x=x*3.14/180;
		System.out.print(x);
		ser1(x,m);
		ser2(x,m);
		m2(x,m);
		return x;
	}

	public double ser1(double x,int n)
	{
		double sum=x;
		for(i=3;i<=n;i=i+2)
		{
			fact=fact*i*(i-1);
			m1=Math.pow(x,i);
			sum=sum+sign*m1/fact;
			sign=sign*-1;

		}
		System.out.println("sum of seriese="+sum);
		return sum;
	}
	public double ser2(double x, int n)
	{
		double sum=1;
		int sign=-1;
		for(i=2;i<=n;i=i+2)
		{
			fact=fact*i*(i-1);
			m1=Math.pow(x,i);
			sum=sum+sign*m1/fact;
			sign=sign*-1;
		}
		System.out.println("sum ser"+sum);
		return sum;
	}

	void m2(double n,int m)
	{
		double z,p;

		z=ser1(x,m);
		p=ser2(x,m);

		System.out.println("Sum of tan series"+(z/p));
	}
}
class Interf12
{
	public static void main (String[] ar)
	{
		int n,z;
		System.out.println("enter angle in degree");
		Scanner m=new Scanner(System.in);
		n=m.nextInt();
		System.out.println("enter range");
		z=m.nextInt();
		Sample15 obj=new Sample15();
		obj.m1(n,z);
	}
}
