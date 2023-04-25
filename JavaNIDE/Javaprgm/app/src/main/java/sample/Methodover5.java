package sample;
import java.util.*;
class First
{
 protected int n; 
 void setdata(int x)
 {
  n=x;
 }
 void first()
 {
  if(n>=0)
  {
   System.out.println("postive no");
  
  }
  else
{
 System.out.println("nagetive no");
}
   
 }
  
}
class Second extends First
{
 void first()
 {
   int z;
  System.out.println("Enter year");
  Scanner m=new Scanner(System.in);
  z=m.nextInt();
  if(z%4==0)
  {
   System.out.println("leap yaear");
   }
   else
{
 System.out.println("not leap yaer");
 }
}
  }
class Third extends Second
{
 void first()
 {
   if(n%2==0)
   {
    System.out.println("even no");
   }
   else
{
  System.out.println("odd no");
}
  
 }
}
class Methodover5
{
 
 public static void main(String[] ar)
 {
   int x;
   Scanner m=new Scanner (System.in);
   System.out.println("enter no");
   x=m.nextInt();
    First obj2=new First();
   obj2.first();
   obj2.setdata(x);
   
     Third obj=new Third();
     
   obj.first();
   Second obj1=new Second();
   obj1.first();
  
  
 }
}
 


