package sample;
import java.util.*;

class java4
 {
  void smith(int n)
  {
   int i=2;
   while(n>1)
   {
    if(n%i==0)
    {
     System.out.println(i);
        n=n/i;
    }
    else
{
  i++;
}
   }
  }
  public static void main(String[] ar)
  {
    int n;
   java4 obj=new java4();
   Scanner m=new Scanner(System.in);
   System.out.println("enter any no");
   n=m.nextInt();
   obj.smith(n);
  }
}
