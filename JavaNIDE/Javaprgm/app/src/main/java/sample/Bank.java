package sample;
import java.util.*;
 class Bank 
{
   int b,ac;
   Bank()
  {
    b=500;
    ac=560321;
  }
  void deposit(int n)
 {
   b=b+n;
  System.out.println("your balance is=:"+b);
 }
  void withdraw(int m)
 {
   b=b-m;
   System.out.println("your balance is=:"+b);
 }
 public static void main(String[] arr)
 {
   Bank t=new Bank();
   Scanner m=new Scanner(System.in);
   int i,n=2,d,w;
   System.out.println("for deposit enter 1:");
   System.out.println("for withdrawal enter 2:");
   System.out.println("for balance chack enter 3:");
   System.out.println("for exist enter 4:");
   while(n!=4)
   {
     System.out.println("what you want:");
     n=m.nextInt();
     switch(n)
     {
       case 1:
       {
         System.out.println("enter ammount:");
          d=m.nextInt();
          t.deposit(d);
          break;
       }
       case 2:
       {
         System.out.print("enter amount:");
         w=m.nextInt();
         if(w>t.b)
         {
           System.out.println("insufficient balance 😒");
         }
         else
     {

         t.withdraw(w);
         }
         break;
         
       }
       case 3:
       {
         System.out.println("your current balane is"+t.b);
          break;
          }
          case 4:
          {
            System.out.print("🙏🏻thank you for banking!🙏🏻");
            break;
          }
       
     }
     
   }
   
 }
}
