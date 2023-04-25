
 package sample;
import java.util.*;

 class Array11
 {
   private int i,z=0,k=0;
   int []b=new int[10];
   int []c=new int[10];
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
    odev();
   }
 private void Array(int arr[],int n)
  {
   for(i=0;i<n;i++)
   {
    if(arr[i]%2==0)
    {
     b[z++]=arr[i];
     
    }
    else
{
  c[k++]=arr[i];
}
   }
  
  }
  void odev()
  {
    System.out.println("even no are");
   for(i=0;i<z;i++)
   {
    System.out.println(b[i]);
   }
   System.out.println("odd no are");
   for(i=0;i<k;i++)
   {
    System.out.println(c[i]);
   }
  }
 // }
 // class Test
//{
  public static void main(String[] ar)
  {
   int x;
   Scanner m=new Scanner(System.in);
   System.out.println("enter size of array");
   x=m.nextInt();
   Array11 obj=new Array11();
   obj.setdata(x);
   
  }
}

