#include<stdio.h>
int top=-1;

void main()
{

  int choice,item,i,n,m,count,j,count1;
printf("size of stack");
scanf("%d",&m);
int stack[m];
    
    while(1)
    {
       printf("1.push\n");
       printf("2.traversing\n");
       printf("3.peek\n");
       printf("4.pop\n"); 
       printf("5.exit\n");    
    
    
    
       printf("Enter the choice");
       scanf("%d",&choice);
    
    
    
       switch(choice)
        {
         case 1 :
                 printf("how many no want to enter");
            scanf("%d",&count);
                  for(i=0;i<count;i++)
                 {
                  if(i==m)
                 {
                  printf("stack is overflowing");
                 }
                else
               {
               printf("Enter the number:\n");
            printf("stack[%d]=",i);
             scanf("%d",&n);
               stack[i]=n;
               //printf("pushed element is =%d\n",n);
             
            }
            
            }
            break;
            case 2:
            {
            printf("\nelement is stack\n");
            for(i=0;i<m;i++)
            {
            printf("%d\n",stack[i]);
           
            }
            }
            break;
           case 3:
          {
           if(j==top)
           {
           printf("stack empty");
           }
           else 
            {
            printf("how many no want to delete");
            scanf("%d",&count1);
            for(j=0;j<count1;j++);
            {
            printf("%d is poped element",stack[i]);
           count--;
        }
        }
        break;
        
            
        }
    
     
                 
              
        }  
        
     } 
    }
