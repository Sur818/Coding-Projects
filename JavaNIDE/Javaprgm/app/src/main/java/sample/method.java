package Sample;
import java.util.*;

 class method 
 {
 int a=-1,b=+1,c,i,n;
void m1(int n)
{
for(i=1;c<n;i++)
{
 c=a+b;
 a=b;
b=c;
if(c<n)
{
System.out.println(c);
}
}
}
void m1()
{
 for(i=1;i<=n;i++)
 {
   c=a+b;
   a=b;
b=c;
System.out.println(c);
 }
}
{
 System.out.println("facbbonacii sereise");
 
}

public static void main (String[] ar)
{
 method obj=new method ();
 System.out.println("enter choice");
 Scanner m=new Scanner(System.in);
 obj.c=m.nextInt();
 switch(obj.c)
 {
  case 1:
  {
   System.out.println("enter the range");
  obj.n=m.nextInt();
   obj.m1(obj.n);
   break;
  }
  case 2:
  {
   System.out.println("enter the no of term");
   obj.n=m.nextInt();
   obj.m1();
   break;
  }
  default:
  {
    System.out.print("invalid choice");
    break;
  }
 }
 
}
}
