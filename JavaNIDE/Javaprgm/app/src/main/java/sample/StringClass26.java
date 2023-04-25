package sample;
import java.util.*;
class StringClass26
{
	static int f;
	static int check(String s2,String s1)
	{  
	  f=0;
		char []a=s2.toCharArray();
		for(int i=0;i<s1.length();i++)
		{     
			char ch=s1.charAt(i);
			for(int j=0;j<a.length;j++)
			{
	
				if(ch==a[j])
				{
					f++;

				}


			}
		}
		if(f==s1.length())
		{
			return 1;

		}
		else
		{
			return 0;
		}



	}




	public static void main (String[] ar)
	{

		String s,s1;
		int i,start=0;
		System.out.println("enter the string");
		Scanner m=new Scanner (System.in);
		s=m.nextLine();
		s=s+" ";
		System.out.println("enter word");
		s1=m.nextLine();
		for(i=0;i<s.length();i++)
		{
			char c=s.charAt(i);
			if(c==' ')
			{
				String s2=s.substring(start,i); 
				s2=s2.trim();
				int x=check(s2,s1);
				if(x==1)
				{

					System.out.println(s2);

				}
				start=i;
			}




		}



    }






} 
