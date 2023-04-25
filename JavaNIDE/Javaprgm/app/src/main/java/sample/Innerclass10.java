
package sample;
import java.util.*;
class Innerclass10 
 {
 static void m1(int n)
 {
  int i,j,k=0,u;
  int []b=new int[100];
  for(i=0;i<n;i++)
  {
  if(i<=2)
  {
  b[k++]=i;
  }
   u=k;
   if(i>2)
   {
   for(j=1;j<=4;j++)
   {
     b[k]=b[k]+b[u--];
   } 
   k++;
   }
 }
 
 for(i=0;i<k;i++)
 {
   System.out.println(b[i]);
 }
}
 
 public  static void main(String[] args)
  {
  int n;
  System.out.print("enter range");
  Scanner m=new Scanner(System.in);
  n=m.nextInt();
  m1(n);
  
  
  

  }

}
