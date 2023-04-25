package sample;
import java.util.*;
class World2
{
  int i,n,n1,rev=0,p,q,s,z;
  World2(int n)
  {
    this.n=n;
    z=n*n;
  } 
  
int rev(int n)
{
 for(i=1;n!=0;i++)
   {
     n1=n%10;
     rev=rev*10+n1;
     n=n/10;
   }
 return rev;
}

void comp(int n)
{ 
 p=rev(n);
 q=p*p;
 rev=0;
 s=rev(q);
 
 if(s==z)
 {
   System.out.print("Prime adom no");
 }
 else
{
  System.out.print("not prime adom no");
}
}
 public static void main(String[] ar)
 {
   int n;
   System.out.println("enter no");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   World2 obj=new World2(n);
   obj.comp(n);
   
   
  
 }
  
}
