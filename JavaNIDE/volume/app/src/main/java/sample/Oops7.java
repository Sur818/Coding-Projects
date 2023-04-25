package sample;

 class Oops7
 {
    
   static int a,b,c,sum=0;
   static int add()
    {
     c=a+b;
     System.out.println(c);
     return c;
     
    }
 static
{
  int i=1;
  a=10;
  b=10;
while(i<=10)
{
  sum=sum+add();
  i++;
}
}
public static void main(String[]  ar)
{
// Oops7 obj=new Oops7();
 System.out.println("sum of loop"+sum);
}
  
}
