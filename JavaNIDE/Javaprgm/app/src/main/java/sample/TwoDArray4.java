package sample;
import java.util.*;
class TwoDArray4
{

	public static void main (String[] ar)
	{

		int i,j,n,temp1=0,temp2=0,temp3=0,temp4=0;
		System.out.print("enter size if squre matrix");
		Scanner m=new Scanner (System.in);
		n=m.nextInt();
		int [][]a=new int [n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				System.out.print("a["+i+"]["+j+"]=");
				a[i][j]=m.nextInt();
			}
		}
		System.out.print("which elements are want to swap");
		int c=m.nextInt();
		int b=m.nextInt();
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]==b)
				{
					temp1=i;
					temp2=j; 
				}
				else if(a[i][j]==c)
				{

					temp3=i;
					temp4=j;

				}

			}
		}
		a[temp1][temp2]=c;
		a[temp3][temp4]=b;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				System.out.println(a[i][j]);
			}
		}






	}

}

