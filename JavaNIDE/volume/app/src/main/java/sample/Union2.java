package sample;
import java.util.*;

class Union2
 {
public static void main(String[] arr)
{
  int arr1[]=new int[]{1,2,3,4,6};
  int arr2[]=new int[]{2,5,6,7};
  int f=0,n,i,j;
  Scanner m=new Scanner(System.in);
 System.out.println("enter your choice");
 n=m.nextInt();
 switch (n)
 {
 case 1:
 {
   System.out.println("union of both set is");
   System.out.print("{");
 for(i=0;i<5;i++)
 {
   System.out.print(arr1[i]+"\t");
 }
 for(i=0;i<4;i++)
 {
   for(j=0;j<5;j++)
   {
     if(arr1[j]!=arr2[i])
     {
       f=1;
     }
     else
    {
      f=0;
     break;
     }
     }
     
     if(f==1)
    {
      System.out.print(arr2[i]+"\t");
    }
    }
    System.out.print("}");
    break;
    }
   
 case 2:
 {
   System.out.println("intersection of both set:");
  for(i=0;i<5;i++)
  {
   for(j=0;j<4;j++)
   {
     if(arr2[j]==arr1[i])
     {
       System.out.print(arr2[j]+"\t");
     }
   }
  }
  break;
 }
 case 3:
 {
   System.out.print("{");
  for(i=0;i<5;i++)
  {
    for(j=0;j<4;j++)
    {
      System.out.print("("+arr1[i]+","+arr2[j]+")"+" ");
    }
  }
  System.out.print("}");
  break;
 }
 default:
 {
   System.out.println("enter valid choice");
 }
 
} 
  
}

}


