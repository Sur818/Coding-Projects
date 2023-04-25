package sample;
import java.util.*;
class ArrayList6 
{
	public static void main (String[] ar)
	{

		int i,j,n=5;
	
		//System.out.print("enter size of arry");
		Scanner m=new Scanner(System.in);
		//n=m.nextint();
		
		ArrayList<String> List=new ArrayList<>(5);
		for(i=0;i<n;i++)
		{
			System.out.println("a["+i+"]:-");
			String x=m.nextLine();
			List.add(x);  
		}
		System.out.print("which word want to delete");
		String s=m.nextLine();
		Iterator <String>b= List.iterator();
		while(b.hasNext())
		{


			String s1=b.next();
			if(s1.equalsIgnoreCase(s))
			{
				b.remove();
			}
			else
			{
				System.out.println(s1);
			}
		}
		
		}
		
		}
    
    
