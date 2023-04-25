package sample;

class Oops4 
{
 private int a,b,c;
 private float avg;
 void setdata(int x, int y,int z)
 {
  a=x;
  b=y;
  c=z;
avg();
 }
private void avg()
 {
   avg=(float)(a+b+c)/3;
   System.out.print("avg of no is"+avg);
 }
 public static void main(String[] ar)
 {
   int x,y,z;
  Oops4 obj=new Oops4();
  x=2;
  y=6;
  z=6;
obj.setdata(x,y,z);
 
 }
}
