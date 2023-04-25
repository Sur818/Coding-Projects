package sample;
import java.util.*;
 class For15 
 {
   private int i,j,sum=0,k,n,m;
   For15()
   {
    k=1;
    m=1;
   }
  void setdata(int x)
   {
   n=x;
   }
   
   void part()
   {
    for(i=1;i<=n;i++)
     {
       for(j=1;j<=2;j++)
       {
         m=m*k;
        System.out.print(k+"*");
        k++;
       }
       System.out.print("/"+i+" + ");
      
       sum=sum+m/i;
       m=1;
    
     }
     System.out.print("sum of ser="+sum);
     }
     class Test
{
     
   }
   public static void main(String[] ar)
   {
     int x;
    For15 obj=new For15();
    Scanner t=new Scanner(System.in);
    x=t.nextInt();
   obj.setdata(x);
  obj.part();
  } 
   }

