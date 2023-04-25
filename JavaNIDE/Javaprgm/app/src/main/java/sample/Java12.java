package sample;
import java.util.*;
class java12 
{
  static int binAd(int b1,int b2)
  {
  int carry=0,i,j=1,sum3=0;
  while (b1!=0||b2!=0) 
	{
		sum3=sum3+((b1%10+b2%10+carry)%2)*j;
		carry=((b1%10+b2%10+carry)/2);
		b1=b1/10;
		b2=b2/10;
		j=j*10;
	}
	if(carry!=0)
	{
	   sum3=sum3+carry; 
	  
}
return sum3;
}
 static int S2comp(int n)
  {
    int i,sum=0,sum1=0,n1;
    for(i=1;n!=0;i=i*10)
    {
      n1=n%2;
      sum=sum+n1*i;
      n=n/2; 
    }
    for(i=1;sum!=0;i=i*10)
    {
      
      n1=sum%10;
      if(n1==0)
      {
        n1=1;
        sum1=sum1+n1*i; 
        n1=0;
      }
      else if(n1==1)
      {
        n1=0;
        sum1=sum1+n1*i;
        n1=1;
     
      }
      sum=sum/10;
      
      } 
      return sum1;
     //return binAd(sum1,1);  
  
}
    
  public static void main (String[] ar)
  {
    int n,q0,q1;
    System.out.print("enter no");
    Scanner m=new Scanner(System.in);
    n=m.nextInt();
   System.out.print( S2comp(n));
       
  }
  
}
