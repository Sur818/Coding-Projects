package sample;
import java.util.*;

class For2
{
 static int  i,j,n;
float sum=0;
 public static void main(String[] ar)
 {
   For2 t=new For2();
  System.out.print("enter term");
  Scanner m=new Scanner(System.in);
  n=m.nextInt();
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {  
    System.out.print(j);
   if(j<i)
    {
   System.out.print("+");
   }
    t.sum=t.sum+((float)j/(float)(i*i));
    }
    System.out.print("/"+i+"*"+i);
    if(i<n)
    {
      
     System.out.print(" + ");
    }
    
  }
  System.out.print("\nsum of seriese="+t.sum);

  
 }
  
}
