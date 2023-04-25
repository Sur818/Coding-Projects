package sampledata;
import java.util.*;
class dsarray27
 {
   static
{
  System.out.println("this prgm help to find longest subsequenc whoose sum=max");
}
  public static void main(String[] ar)
  {
    int n,k,i;
    System.out.println("enter size of array");
    Scanner sc=new Scanner (System.in);
    n=sc.nextInt();
    int []a=new int[n];
    int []b=new int[n];
    int []s=new int[n];
    for(i=0;i<n;i++)
    {
      System.out.print("a["+i+"]=");
      a[i]=sc.nextInt();
    }
    print_subsequence(a,b,0,s,0,0,0);
      
  }
  
  public static void print_subsequence(int a[],int b[],int c1i,int s[],int c2i,int ans,int length)
  {
   if(c1i>=a.length)
   {
     int temp=sum_subseq(s,c2i);
     if(temp>=ans)
     {
       ans=Math.max(ans,temp);
       length=Math.max(ans,length);
       for(int i=0;i<c2i;i++)
       {
         b[i]=s[i];
       }
     }
     
     if(c2i<=a.length)
     {
     print(b,b.length);
    }
    return ;
   }
    
print_subsequence(a,b,c1i+1,s,c2i,ans,length);
s[c2i]=a[c1i];
print_subsequence(a,b,c1i+1,s,c2i+1,ans,length);
}
    
    
  public static void print(int s[],int n)  
  {
    int i;
    System.out.print("{");
    for(i=0;i<n;i++)
    {
      System.out.print(s[i]+" ");
    }
    System.out.println("}");
  }
  public static int sum_subseq(int s[],int n)
  {
    int i,sum=0;
    for(i=0;i<n;i++)
    {
      sum=sum+s[i];
    }
    return sum;
    
  }
    
    
    
}

