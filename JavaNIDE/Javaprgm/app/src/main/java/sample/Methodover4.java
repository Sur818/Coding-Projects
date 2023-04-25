package sample;
import java.util.*;

 class Home
 {
   protected int i,sum=0,fact=1;
  void add(int n)
  {
    int i=1;
   while(i<=n)
   {
    System.out.print(i);
    if(i<n)
    {
     System.out.print("+");
    }
    sum=sum+i;
    i++;
   }
   System.out.print("sum of seriese="+sum);
  }
 
}
class Home1 extends Home
{
 public void add(int n)
  {
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
    
  }
  System.out.println(n+"!="+fact);
  fact=1;
  }
}
class Methodover4
{
 public static void main(String[] sr)
 {
   int n;
   Home1 obj=new Home1();
   Home obj1=new Home();
   Scanner m=new Scanner(System.in);
   System.out.println("enter the no");
   n=m.nextInt();
   obj.add(n);
   obj1.add(n);
   
   
   
 }
}
