package sample;
import java.util.Arrays;

 class Array7
 {
   
 static void array(int arr[],int n)
  {
    int i;
   for(i=0;i<n;i++)
   {
     System.out.println(arr[i]);
   }
    
  }  

public static void main(String[] ar)
{
  int n,i;
  int arr[]={1,3,6,5,4,2};
  n=arr.length;
 Arrays.sort(arr);
 array(arr,n);
 }
 }
