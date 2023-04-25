package sample;
import java.util.*;

 class Loop
{
static  int z=0;
static void cal(int y)
{
  
z=z+y;
System.out.println(z+"+");
}

public static void main(String[] arr)
{
  int n=1;
Scanner m=new Scanner(System.in);
System.out.println("enter no");
while(n!=0)
{

n=m.nextInt();
cal(n);
}
System.out.println("sum is"+z);
}
}
