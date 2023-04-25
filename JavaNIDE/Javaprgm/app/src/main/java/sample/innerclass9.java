package sample;
import java.util.*;
 class innerclass9
{

   class A 
{
 void Halistoneseq(int num)
  {
    int []a=new int[100];
    int k=0,i;
    a[k++]=num;
   while(num>1)
  
    {
    if(num%2==0)
    {
      num=num/2; 
     a[k++]=num;
    }
    
    else
  {
 num=num*3+1;
 a[k++]=num;
  }
      
    }
    System.out.print("[");
  for(i=0;i<k;i++)
  {
    System.out.print(a[i]+" ");
  }
  System.out.print("]");
}
 
  
  }
   
 public static void main (String[] ar)
 {
   int n;
   System.out.println("enter no");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   innerclass9.A obj=new innerclass9().new A();
  obj.Halistoneseq(n);
  
  }
}
