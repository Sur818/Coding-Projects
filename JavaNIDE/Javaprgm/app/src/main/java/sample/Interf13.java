package sample;
import java.util.*;

 interface ser12
 {
   void m1(int n);
  
}
class Sample18 implements ser12
{
  int i,sum=2,k,f;
  int arr[]= new int[100000];
 public void m1(int n)
  {
    int j=1;
    while (j<=100000)
    {
      if(j<=1)
      {
        j=2;
      }
     for(i=2;i<=j/2;i++)
     {
      f=0;
       if(j%i==0)
       {
         f=1;
         break;
       }
     }
     if(f==0)
     {
       arr[k++]=j;
     }
     j++;
    }
    System.out.print( 2+" " );
    for(i=0;i<n-1;i++)
    {
      sum=sum+arr[i];
      System.out.print(sum+"   ");
   }
    }
 
}
class  Interf13
{
  public static void main(String[] ar)
  {
    int n;
   Scanner m=new Scanner(System.in);
   Sample18 obj=new Sample18();
   System.out.println("enter no of term");
   n=m.nextInt();
   obj.m1(n);
  }
}
