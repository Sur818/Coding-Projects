package sample;
 class Constructer
 {
 String name;
int rollno;
char section;
Constructer()
{
 rollno=10;
 section='a';
 name="Carryminati";
 System.out.println(rollno+" "+section+" "+name);
}
Constructer(int x,char y,String z)
{
 rollno=x;
 section=y;
 name=z;
 System.out.println(+rollno+" "+section+" "+name);
}
public static void main(String[] arr)
{
 Constructer s=new Constructer();
 Constructer s1=new Constructer(11,'b',"suraj");
  
}

}

