package sample;
import java.util.*;

abstract class Suraj
{
	int i,j,sum=0,n,sum1=0,n1;
	abstract void smith(int n);

}
class Singh extends Suraj
{

	void prime(int n)
	{
		i=2;
		while(n>1)
		{
			if(n%i==0)
			{
				sum=sum+someofdigits(i);
				n=n/i;
				sum1=0;
			}
			else
			{
				i++;
			}
		}
		System.out.println("sum of digits of prime factor="+sum);
	}

	int someofdigits(int n)
	{
		for(j=1;n!=0;j++)
		{
			n1=n%10;
			sum1=sum1+n1;
			n=n/10;
		}
		return sum1;
	}

	void smith(int n)
	{
		someofdigits(n);
		if(sum1==sum)
		{
			System.out.println("smith no");
		}
		else
		{
			System.out.println(sum1);
		}
	}
}

class abs3
{
	public static void main(String[] ar)
	{
		int n;
		Singh obj=new Singh();
		Scanner m=new Scanner(System.in);
		System.out.println("enter no");
		n=m.nextInt();
		obj.prime(n);
		obj.smith(n);
	}
}
  
