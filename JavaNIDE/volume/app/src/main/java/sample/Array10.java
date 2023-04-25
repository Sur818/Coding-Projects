package sample;
import java.util.*;

 class Array10
 {
   private int i;
  void setdata(int n)
   {
     int []arr=new int[n];
     for(i=0;i<n;i++)
     {
      System.out.println("arr["+i+"]");
      Scanner m=new Scanner(System.in);
      arr[i]=m.nextInt();
     }
    Array(arr,n);
   }
 private void Array(int arr[],int n)
  {
   for(i=0;i<n;i++)
   {
    if(arr[i]%2==0)
    {
     System.out.println("even="+arr[i]);
    }
    else
{
 System.out.println("odd="+arr[i]);
}
   }
  
  }
 //}
  //class Test 
//{
  public static void main(String[] ar)
  {
   int x;
   Scanner m=new Scanner(System.in);
   System.out.println("enter size of array");
   x=m.nextInt();
   Array10 obj=new Array10();
   obj.setdata(x);
  }
}

