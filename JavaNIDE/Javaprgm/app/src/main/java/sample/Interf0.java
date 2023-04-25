package sample;
import java.util.*;

interface Afcat
{
	int a=10;
	void m1(int n);
	//void m2(int n);
}
class Ssb implements Afcat
{
	double sum=0,fact=1;
	public void m1(int n)
	{
		int i=1;
		while(i<=n)
		{
			int j=1;
			while (j<=i)
			{
				fact=fact*j;
				j++;
			}
			System.out.print(i+"/"+i+"!");
			if(i<n)
			{
				System.out.print(" + ");
			}
			sum=sum+i/fact;
			fact=1;
			i++;
		}
		System.out.println("sum is ="+sum);
	}
}
class Interf0
{
	public static void main (String[] ar)
	{
		int n;
		Ssb obj=new Ssb();
		System.out.println("enter last term");
		Scanner m=new Scanner (System.in);
		n=m.nextInt();
		obj.m1(n);

	}
}
