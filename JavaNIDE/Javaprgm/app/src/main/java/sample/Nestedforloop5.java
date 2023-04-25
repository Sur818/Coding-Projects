package sample;
import java.util.*;
 class Nestedforloop5
 {
  public static void main (String[] ar)
  {
    
  int i,j,k=1,n;
  System.out.println("enter no of row");
  Scanner m=new Scanner (System.in);
  n=m.nextInt();
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      if(k<=9)
      {
  
      System.out.print(k+++"  ");
      }
      else
{
  System.out.print(k+++" ");
}
    }
    System.out.print("\n");
  }
}
}
