package sample;
import java.util.*;

class Forloop 
{
  public static void main(String[] ar)
  {
    int i,prod=1,n;
    System.out.println("enter range=");
    Scanner m= new Scanner(System.in);
    n=m.nextInt();
    for(i=1;i<=n;i++)
    {
      prod=prod*i;
    }
    System.out.print("product of "+n+" natural no="+prod);
  }
 
 
}
