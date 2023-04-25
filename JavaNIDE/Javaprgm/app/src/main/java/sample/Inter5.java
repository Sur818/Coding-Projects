package sample;
import java.util.*;
interface G2
{
	int bin(int n);
	int  primefact(int m);
	int bindigits(int n);
}
class G1 implements G2
{
	protected int n1,sum,f,sum1,m,i,j,k;
	int  bin;
	public int bin(int n)
	{
	  m=n;
		for(k=1;n!=0;k=k*10)
		{
			n1=n%2;
			bin=bin+n1*k;
			n=n/2;
		}
		System.out.println("binary of"+m+"="+bin);
		return bin;
	}

	public int primefact(int p)
	{
		for(i=2;p>1;i++)
		{
		  while(p%i==0)
		  {
		    System.out.println(i+" ");
		    sum1=sum1+bindigits(i);
		    bin(i); 
		    bin=0; 
     p=p/i;
}
		}
		return sum1;

	}

	public int bindigits(int z)
	{
		int sum2=0;
		for(j=1;z!=0;j++)
		{
			n1=z%2;
			sum2=sum2+n1;
			z=z/2;
		}
		return sum2;
	}


	void show(int n)
	{
		primefact(n);
		if(sum1%2==0)
		{
			System.out.println("stark no");
		}
		else
		{
			System.out.println("not stark no");
		}
	}
}

class Inter5
{
	public static void main(String[] ar)
	{
		int n;
		System.out.println("enter any no");
		Scanner m=new Scanner(System.in);
		n=m.nextInt();
		G1 obj=new G1();
		obj.show(n);


	}
}
