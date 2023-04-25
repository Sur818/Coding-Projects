package sample;

class Construct2 
{
  int a,b,c;
  Construct2()
  {
   a=10;
   b=20;
   c=4;
   System.out.println(a+" "+b+" "+c);
  }
  Construct2(int a,int b)
  {
    c=a+b;
    System.out.println(c);
  }
  
  
  public static void main(String[] arr)
  {
   Construct2 t =new Construct2();
   t.a=5;
   t.b=5;
   t.c=5;
   System.out.println(t.c+" "+t.a+" "+t.b);
   Construct2 s=new Construct2(2,6);
   s.c=59;
   System.out.println(t.c);
   System.out.println(s.c+" "+s.b+" "+s.a);
  }
}
