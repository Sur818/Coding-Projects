package sample;
import  java.util.*;

class Construct4 
{
Construct4()
{
  int i,n=2,j;
 System.out.println("Enter row");
 Scanner m=new Scanner(System.in);
 n=m.nextInt();
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
    System.out.print("*");
  }
  System.out.print("\n");
 }
 }
 Construct4(int a,int b)
 {
   int c;
   c=a+b;
   System.out.println(c);
  

 }
 
public static void main(String[] ar)
{
  Construct4 t=new Construct4();
  Construct4 s=new Construct4(2,6);
}
}
