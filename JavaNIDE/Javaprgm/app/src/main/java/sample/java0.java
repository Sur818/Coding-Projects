package sample;
import java.util.*;

class java0
 {
  
  public static void main(String[] ar)
  {
    int a,b;
    char op;
    System.out.println("enter operation like (a+b))");
   Scanner m=new Scanner(System.in);
   a=m.nextInt();
   op=m.next().charAt(0);
   b=m.nextInt();
   switch(op)
   {
    case '+':
    {
     System.out.print("="+(a+b));
     break;
    }
    case '-':
    {
     System.out.print("="+(a-b));
     break;
    }
    case '*':
    {
     System.out.print("="+(a*b));
     break;
    }
    case '/':
    {
     System.out.print("="+((float)a/b));
     break;
    }
    default:
    {
     System.out.print("invalid operation");
    }
   }
  }
}
