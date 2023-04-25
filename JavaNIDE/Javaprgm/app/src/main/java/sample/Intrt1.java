package sample;
import java.util.*;

interface I3
{
	int m1(int n);
	int  m2();
	void m3();
}

class I4 implements I3
{

	int i,n1,bin,n,f;
	public int m1(int n)
	{ 
		for(i=1;n!=0;i=i*10)
		{
			n1=n%2;
			bin=bin+n1*i;
			n=n/2;
		}
		System.out.println("bin="+bin);
		return bin; 
	}
	public int m2()
	{
		n=bin;
		for(i=1;n!=0;i++)
		{
			n1=n%10;
			if(n1==1)
			{
				f++;
			}
			n=n/10;
		}
		
		return f;
	}
	public void m3()
	{
		if(f%2==0)
		{
			System.out.println("suraj no");
		}
		else
		{
			System.out.println("not suraj no");

		}
	}
}
class Intrt1
{
	public static void main (String[] ar)
	{
		int n;
		System.out.println("enter no");
		Scanner m=new Scanner (System.in);
		n=m.nextInt();
		I4 obj=new I4();
		obj.m1(n);
		obj.m2();
		obj.m3();
	}
}

