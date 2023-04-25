package sample;
import java.util.Arrays;

 class Method
 {
   int a,b,c,sum=0,i;
  void m1()
  {
   c=a+b;
   System.out.println("Sum is"+c);
  }
  
  void m1(int n)
  {
    for(i=1;i<=n;i++)
    {  
    System.out.print(i+"*"+(i+1)+"+");
     sum=sum+i*(i+1);
     }
   System.out.println("sum is "+sum);
  }
  
 void m1(char str[],int m)
{
 Arrays.sort(str);
 for(i=0;i<m;i++)
 {
   System.out.println(str[i]);
 }

 }
public static void main(String[] ar)
{
  int m;
  char str[]={'a','c','b','d','e'};
  m=str.length;
 Method t=new Method();
 t.a=10;
 t.b=20;
 t.m1();
 t.m1(5);
 t.m1(str,m);
 }
}
