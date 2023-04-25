package sample;
import java.util.*;
class andd 
{
	public static void main (String[] ar)
	{
		int i,j,k=0,count=0;
		String s,s1,s2,s3="";
		System.out.println("enter string");
		Scanner m=new Scanner(System.in);
		s=m.nextLine();
		s=s+" ";
		System.out.println("which word want to delete");
		s1=m.nextLine();
		s1=" "+s1;
		for(i=0;i<s.length();i++)
		{

			if(s.charAt(i)==' ')
			{   
				s2=s.substring(k,i);
				k=i;
				if(!(s1.equals(s2)))
				{
					//System.out.print(s2);
                    s3=s3+s2;

				}
				else
				{
					count++;
				}


			}

		}
		if(count>0)
		{
			System.out.println(s3);
		}
		else
		{
System.out.println("word not present");
			
		}
	}
}
