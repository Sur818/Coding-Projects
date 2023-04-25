import java.util.*;

class M
{
	int i,j,prod=1,sum=0;
	void sum(int n)
	{
		for(i=1;i<=n;i++)
				{
			for(j=1;j<=i;j++)
			{
				System.out.print(i+"*");
				prod=prod*i;
			}
			System.out.print("+");
			sum=sum+prod;
			prod=1;
		}
		System.out.print("sum of ser="+sum);

	}


}
class D extends M
{



}

class C
{
	public static void main(String[] ar)
	{
		int x;
		D obj=new D();
		System.out.print("enter no of term");
		Scanner m=new Scanner(System.in);
		x=m.nextInt();
		obj.sum(x);
	}
}
