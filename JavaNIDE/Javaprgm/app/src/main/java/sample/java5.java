package sample;
import java.util.*;
class java5
 {
  public static void main(String[] ar)
   {
     int n,i,m,rev=0,n1,j;
     Scanner z=new Scanner (System.in);
     System.out.println("enter size if array");
     n=z.nextInt();
     int arr[]=new int[n];
     for(i=0;i<n;i++)
     {
       System.out.printf("arr[%d]=",i);
       arr[i]=z.nextInt();
     }
        for(i=0;i<n;i++)
         {
        m=arr[i];
       for(j=1;m!=0;j++)
         {
         n1=m%10;
        rev=rev*10+n1;
       m=m/10;
        }
System.out.printf("%d\n",rev);
rev=0;
}
    
   }
  
}
