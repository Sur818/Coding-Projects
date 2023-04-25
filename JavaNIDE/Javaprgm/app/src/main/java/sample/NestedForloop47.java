package sample;
import java.util.*;
class NestedForloop47
{

 static int palin(int n)
  {
    int z,rev=0,i,z1;
    z=n;
   for(i=1;z!=0;z++)
   {
     z1=z%10;
     rev=rev*10+z1;
     z=z/10;
   }
   if(rev==n)
   {
     System.out.print(rev);
     return rev;
   }
   else
{
  return 0;
}
  }
  public static void main (String[] ar)
  {
   int i,j,k=0,n,p;
   System.out.println("entee no of row");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
     //NestedForloop47 obj=new NestedForloop47();
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
    k++;
    p=palin(k);
    System.out.print(j);
    if(p!=0)
    {
    System.out.print(k);
    }
    else
{
 j--;
}
  }
  System.out.print("\n");
 }
}
}

