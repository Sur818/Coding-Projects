package sample;

 class Arrays
 {
  
 public static void main(String[] arr)
 {
   int i,j,count=0,k=0;
   int arr1[]=new int[]{1,2,3,4,5};
   int arr2[]=new int[]{2,4,5,6,7};
   int arr3[]=new int [6];
   for(i=0;i<5;i++)
  {
 
       for(j=0;j<5;j++)
     {
     
        if(arr2[j]==arr1[i])
     {
         arr3[k]=arr1[i];
        k++;
      
       count++;
      }
     }
   }
   System.out.println("intersection of both array is");
   for(i=0;i<count;i++)
   {
     System.out.println(arr3[i]);
 }
}
  
}

