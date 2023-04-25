package sample;

class As6
 {
  
 interface As7
{
void m1();
}
class Ab1 implements As7
{
  int i,sum;
 public void m1()
  {
   i=1;
   while(i<=10)
   {
     sum=sum+i;
     i++;
   }
   System.out.println("sum="+sum); 
  }
}
}
class inner9
{
public static void main (String[] ar)
   
   {
     As6.Ab1 obj=new As6().new Ab1();
     obj.m1();
     
   }
}

