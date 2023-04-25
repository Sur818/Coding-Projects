package sample;
import java.util.*;

class Sacount
{
  protected int bal,count=0;
  Sacount()
  {
   bal=0;
  }
  void deposit (int amt)
  {
   bal=bal+amt;
    showbal();
  }
  void withdraw(int amt)
  {
   
   if(amt<bal)
   {
   bal=bal-amt;
   showbal();
   }
   else
{
 System.out.println("insufficient balance");
  }
  }
  void showbal()
  {
   System.out.println("balance="+bal);
  }
  
}
class Cacount extends Sacount
{
  void deposit (int amt)
  {
   bal=bal+amt;
    showbal();
  }
  void withdraw(int amt)
  {
    count++;
    if(amt<=bal&&count<=3)
    {
   bal=bal-amt;
   showbal();
   }
   else if(amt+20<=bal&&count>3)
   {
    bal=bal-amt-20;
    showbal();
   }
   else
{
 System.out.println("insufficient balanace");
}
}
  void showbal()
  {
   System.out.println("balance="+bal);
   }
   }
 class Methodover7
{
  static
{
  System.out.println("WELCOME!");
 System.out.println("1.saving account");
 System.out.println("2.Current account");
}
 public static void main(String[] ar)
 {
   int n=5,amt;
   Sacount obj=new Sacount();
   Cacount obj1=new Cacount();
   System.out.print("enter account type:-");
   Scanner m=new Scanner(System.in);
   n=m.nextInt();
   switch(n)
   {
    case 1:
    {
      while(n!=4)
      {
     System.out.println("1.deposi");
     System.out.println("2.withdraw");
     System.out.println("3.show balance");
     System.out.println("4.for exist");
     n=m.nextInt();
     switch(n)
     {
      case 1:
      {
       System.out.println("enter amount");
       amt=m.nextInt();
       obj.deposit(amt);
       break;
       }
       case 2:
       {
        System.out.println("enter amount");
       amt=m.nextInt();
        obj.withdraw(amt);
        break;
       }
       case 3:
       {
        obj.showbal();
        break;
       }
       case 4:
       {
         System.out.println("thank you for banking! 🙏");
         break;
       }
       }
       }
       break;
       }
       case 2:
       {
         while(n!=4)
         {
        System.out.println("1.deposi");
     System.out.println("2.withdraw");
     System.out.println("3.show balance");
     System.out.println("4.exist");
     n=m.nextInt();
        switch(n)
        {
         case 1:
      {
       System.out.println("enter amount");
       amt=m.nextInt();
       obj1.deposit(amt);
       break;
       }
       case 2:
       {
        System.out.println("enter amount");
       amt=m.nextInt();
        obj1.withdraw(amt);
        break;
       }
       case 3:
       {
        obj1.showbal();
        break;
       }
       case 4:
       {
         System.out.println("thank you for banking!🙏");
         break;
         }
       }
        }
        break;
        
       }
       default:
       {
         System.out.println("\nenter valid choice🤦!");
       }
      }
    } 
   }
