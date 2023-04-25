package sample;
import java.util.*;

 class Oops
 {
   int i,fact=1;
void fact(int n)
{
    for(i=1;i<=n;i++)
     { 
      fact=fact*i;
      }
 System.out.print(n+"!="+fact);
}
//}
//class B
//{
public static void main(String[] ar)
{
  int x;
System.out.print("enter no");
Scanner m=new Scanner(System.in);
x=m.nextInt();
Oops obj=new Oops();
obj.fact(x);
}

}
