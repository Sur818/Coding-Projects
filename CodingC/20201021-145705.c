#include<stdio.h>
 int great(int x,int y)
  {
    int result;
    if(x>y) 
     {
      printf("xis greater than y");
       result=x;
      }
      else
      {
    printf("x is less than y");
       result=y;
  
} 
  return result;
}
 int main()
   { 
         int x,y;
      printf("enter two no");
       scanf("%d,%d",&x,&y);
       great(x,y);
       printf("%d",great(x,y));
    }
        
 

   

   
