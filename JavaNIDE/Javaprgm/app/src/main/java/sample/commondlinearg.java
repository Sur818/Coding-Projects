package sample;
 class commondlinearg 
 {
   public static void main(String[] ar)
   {
   int i,sum=0;
    for(i=0;i<ar.length;i++)
    {
     sum=sum+Integer.parseInt(ar[i]);
    }
    System.out.print("sum of seriese="+sum);
   }
  
}
