package sampledata;
import java.util.*;
class dsarray2
 {
   public static void main(String ar[])
   {
     
     int i,n;
    
    System.out.print("enter size if array");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    int arr[]=new int[n];
     for(i=0;i<n;i++)
     {
       arr[i]=m.nextInt();
     }
     prinnt(arr,n);
     }
     
     
 public static  void prinnt(int arr[],int n)
     {
       int i;
      for(i=0;i<n;i++)
      {
        System.out.print(arr[i]+"  ");
        
      }
       
       
     }
     


   
   
  
}
