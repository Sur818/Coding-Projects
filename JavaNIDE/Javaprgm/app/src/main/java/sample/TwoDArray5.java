package sample;
import java.util.*;
 class TwoDArray5 
{
  
  public static void main (String[] ar)
	{

		int i,j,r,s,n,temp,count=0;
		System.out.print("enter size if squre matrix");
		Scanner m=new Scanner (System.in);
		n=m.nextInt();
		int [][]a=new int [n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				System.out.print("a["+i+"]["+j+"]=");
				a[i][j]=m.nextInt();
			}
		}
		System.out.print("which elements are want to swap");
		int c=m.nextInt();
		int b=m.nextInt();
	
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i][j]==c)
      {
        for(r=0;r<n;r++)
        {
          for(s=0;s<n;s++)
          {
            if(a[r][s]==b)
            {
             count++;
             if(count==1)
             {
            
              temp=a[i][j];
              a[i][j]=a[r][s];
              a[r][s]=temp;
              }
          }
            
          }
        }
      }
      
   
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
     System.out.println(a[i][j]);
    }
 }
  }
  
  
}
