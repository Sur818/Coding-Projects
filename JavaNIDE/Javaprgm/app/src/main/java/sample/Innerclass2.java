package sample;
import java.util.*;
class Innerclass2 
{

		interface I1
	{

	     void m1();
		 }

		
		class I1A implements I1
		{

			public void m1()
			{
				System.out.println("hello world");
			}
		}
	public static void main (String[] ar)
	{

		Innerclass2.I1A obj=new Innerclass2().new I1A();
		obj.m1();



	}
}
