package sample;
 class Innerclass7 
 {
   int a=10;
   void m1()
   {
     System.out.println(a);
     //System.out.println(a+b);
   }
   class B
{
  int b=10;
  void m2()
  {
    System.out.println(b);
    System.out.println(b+a);
  }
 
  
  
}
   
  public static void main (String[] ar)
  {
    
    Innerclass7.B obj=new Innerclass7().new B();
    obj.m2();
    Innerclass7 obj1=new Innerclass7();
    obj1.m1();
    
    
    
  }
  
}
