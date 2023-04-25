package sample;
import java.util.*;
class Forloop17
 {
   
public static void main (String[] ar)
{
 int i,z,n;
 double sum=0,m;
 System.out.println("enter range");
 Scanner p=new Scanner(System.in);
 n=p.nextInt();
 for(i=1;i<=n;i++)
 {
   z=i+1;
   m=Math.pow(i,z);
   System.out.print("1/"+i+"^"+z);
   if(i<n)
   {
     System.out.print("+");
   }
  sum=sum+1/m;
 }
 System.out.print("\nsum of seriese="+sum);
}
  
}
