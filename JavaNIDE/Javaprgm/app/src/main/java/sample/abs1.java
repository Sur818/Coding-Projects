package sample;
import java.util.*;

abstract class M1
{
	protected int i=1,j,sum=0,n1,n,fact=1,bin,z;
	abstract void set(int x);
}
class Cs extends M1
{
	void set(int x)
	{
		n=x;
		z=n;
		special();
	}
	void special()
	{
		for(i=0;n!=0;i++)
		{
			n1=n%10;
			for(j=1;j<=n1;j++)
			{
				fact=fact*j;
			}
			sum=sum+fact;
			fact=1;
			n=n/10;
		}
		if(sum==z)
		{
		System.out.println("special no");
		}
		else
		{
		System.out.println("not special no");
		}
	}
}
class It extends Cs
{
	void set1(int x)
	{
	n=x;
	sum=0;
		binary();
	}
	void binary()
	{
		for(i=1;n!=0;i=i*10)
		{
			n1=n%2;
			bin=bin+n1*i;
			n=n/2;
		}
		System.out.println("binarry="+bin);
}
}
class abs1
{
	public static void main(String[] ar)
	{
	  int n;
	  System.out.println("inter no");
	  Scanner m=new Scanner(System.in);
	  n=m.nextInt();
		It obj=new It();
		obj.set(n);
		System.out.println("enter no to convert binary");
		n=m.nextInt();
		obj.set1(n);
	}
}
