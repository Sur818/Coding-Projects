package sample;
import java.util.*;

class For14 
{
  private int i,j,k,m,fact=1,n;
  double sum=0,p;
  void setdata(int x)
  {
   n=x;
  }
void abs()
{
for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++)
 {
   p=p+Math.pow(j,i);
   System.out.print(j+"^"+i);
   if(j<i)
   {
     System.out.print("+");
   }
   for(k=1;k<=j;k++)
   {
    fact=fact*k;
   }
   m=m+fact;
   fact=1;
 }
 System.out.print("/");
 for(j=1;j<=i;j++)
 {
   System.out.print(j+"!");
   if(j<i)
   {
     System.out.print("+");
   }
}
System.out.print(" + ");
sum=sum+p/m;
m=0;
p=0;
}
}
public static void main(String[] ar)
{
 int n;
 Scanner t=new Scanner(System.in);
 System.out.println("enter the no");
 n=t.nextInt();
 For14 obj=new For14();
 obj.setdata(n);
 obj.abs();
 System.out.print("Sum of ser="+obj.sum);
}
}
