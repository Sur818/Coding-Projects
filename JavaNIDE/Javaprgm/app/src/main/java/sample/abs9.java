package sample;
import java.util.*;

abstract class Evillno
{
  protected char chr,m;
  int i,l,f;
 abstract void evil(String arr);
}

class Test56 extends Evillno
{
void evil(String arr)
{
 l=arr.length();
 m=arr.charAt(0);
 for(i=0;i<l;i++)
{
 chr=arr.charAt(i);
  if(chr=='0')
  {
    f++;
    }
    
    }
    if(f>0&&m!='0')
    {
     System.out.println("evil no");
    }
    else
{
  System.out.println("not evil no");
}
}
}
class abs9
{
  public static void main(String[] ar)
  {
    String arr;
    Scanner m=new Scanner(System.in);
    Test56 obj=new Test56();
    System.out.println("enter no");
    arr=m.nextLine();
    obj.evil(arr);
     
  }
}
    
