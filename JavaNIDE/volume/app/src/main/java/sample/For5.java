package sample;
import java.util.*;

class For5 
{
  static int  i,j,fact=1,n,z;
  static float sum=0,sum1;
  public static void main(String[] ar)
  {
    Scanner m=new Scanner(System.in);
    System.out.print("enter the last term");
    n=m.nextInt();
    for(i=1;i<=n;i++)
    {
     System.out.print(i+"-"+i+"!"+"/");
     for(j=1;j<=i;j++)
     {
      fact=fact*j;
     }
    z=(i*i)*(i+1)*(i+1);
    sum1=(float)fact/z;
    sum=sum+(i-sum1);
    System.out.print(i+"*"+i+"+"+(i+1)+"*"+(i+1));
     System.out.print(" + ");
     fact=1;
    }
    
    System.out.print("sum of seriese is"+sum);
  }
}
