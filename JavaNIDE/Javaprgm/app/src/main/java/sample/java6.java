package sample;
import java.util.*;

 class java6
 {
  public static void main (String[] ar)
  {
   Scanner z=new Scanner (System.in);
   int i,k=0,n,sum=1,m;
int arr[]=new int[1000];
System.out.printf("enter no of term ");
n=z.nextInt();
System.out.printf("enter common diff of ap");
m=z.nextInt();
for(i=0;k<n;i=i+m)
{
 arr[k++]=i;
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];
System.out.printf("%d\n",sum);
}
}
 }
