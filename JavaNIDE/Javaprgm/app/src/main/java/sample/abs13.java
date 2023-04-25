package sample;
import java.util.*;
abstract class Test562
{
	protected int i,j,f,sum=0,fact=1,k,h,m=1,count=0;
	double z;
	abstract void Primeser1(int n);
}
class Ser extends Test562
{
	void Primeser1(int n)
	{
		for(i=1;i<=n;i++)
		{
			f=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					f=1;
				}
			}
			if(f==0)
			{
				count++;
	
				for(k=1;k<=count;k++)
				{
					System.out.print(i+"+");
					sum=sum+i;
				}
				System.out.print("/"+m+"!");
				System.out.print(" + ");
				for(h=1;h<=m;h++)
				{
					fact=fact*h;
				}
				m++;
				z=z+(double)sum/fact;
				sum=0;
				fact=1;
			}
		}
		System.out.println("sum of seriese is "+z);
	}
}
class abs13
{
	public static void main(String[] ar)
	{
	  int n;
		Ser obj=new Ser();
		Scanner m=new Scanner (System.in);
		System.out.println("enter range");
		n=m.nextInt();
		obj.Primeser1(n);
	}
}
