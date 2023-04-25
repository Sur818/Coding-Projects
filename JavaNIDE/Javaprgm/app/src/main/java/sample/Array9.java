package sample;
import java.util.*;
public class Array9
 {
 static boolean isPalindrm(int n)
  {
    int z=n;
    int i,n1,rev=0;
    for(i=0;n!=0;i++)
    {
      n1=n%10;
      rev=rev+n1;
      n=n/10;
    }
    if(rev==z)
    {
      return true;
    }
    else
{
  return false;
}

  }
  public static void main (String[] ar)
  {
    int i,j,n,b,k;
    String s="";
    System.out.println("enter array");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
    int []arr=new int[n];
    for(i=0;i<n;i++)
    {
      System.out.println("arr["+i+"]=");
      arr[i]=m.nextInt();  
    }
    for(i=0;i<n;i++)
   {
     j=0;
    while(j!=i&&j<n)
   {
     k=0;
     while(k!=j&&k!=i&&k<n)
     {
    s=s+arr[i]+arr[j]+arr[k];
      b=Integer.parseInt(s);
      System.out.println(b);
     if(s.equals(isPalindrm(b)))
       {
         System.out.println(s);
       }
     k++;
     s="";
    
   }
   }
   
     j++;
     
   }
    
    
    
  }
}
