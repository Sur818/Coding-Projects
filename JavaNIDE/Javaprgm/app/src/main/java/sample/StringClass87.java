package sample;
import java.util.*;
class StringClass87 
{
	public static void main (String[] ar)
	{
		int i,j,count=0;
		String s,s1,s2,s3="";
		System.out.println("enter sentence");
		Scanner m=new Scanner(System.in);
		s=m.nextLine();
		System.out.println("enter world want to delete");
		s1=m.nextLine();
		StringTokenizer sb=new StringTokenizer(s," ");

		while(sb.hasMoreTokens())
		{
			s2=sb.nextToken();
			if(s1.equals(s2))
			{
				count++;
			}
			else
			{
				s3=s3+s2;
				s3=s3+" ";
			}  
		}
		if(count>0)
		{
			System.out.println(s3);
		}
		else
		{
			System.out.println("world not present");
		}  

	}

}
