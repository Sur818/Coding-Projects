package sample;

class Innerclass12
{
int a=10;
void m1()
{
  System.out.println("m1 is calling");
}
  public static void main(String[] args)
  {
  
  Innerclass12 obj=new Innerclass12();
  obj.m1();
  System.out.println(obj.a);
  

  }

}
