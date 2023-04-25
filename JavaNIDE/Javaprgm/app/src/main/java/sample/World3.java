package sample;
import java.util.*;
class World3
{
  int i,n,n1,rev=0,p,q,s,z;
  World3(int n)
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
   System.out.println(n);
 }
 
}
 public static void main(String[] ar)
 {
   int n,i;
   System.out.println("enter range");
   Scanner m=new Scanner (System.in);
   n=m.nextInt();
   for(i=1;i<=n;i++)
   {
     World3 obj=new World3(i);
     obj.comp(i);
   }
  
 }
  
}
