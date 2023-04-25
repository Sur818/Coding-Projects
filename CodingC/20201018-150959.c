#include<stdio.h>

int main()
{ 
  char ch;
 printf("instructions regarding calculator\n");
 printf("+=ap\n*=gp\n/=hp\na=agp");
 printf("\nEnter the operation= ");
  scanf("%c",&ch);
  switch(ch)
  {
   case'+':
     { 
       int n,a,i,d,sum=0;
     printf("enter the last no of ser");
      scanf("%d",&n);
    printf("\nenter common difference");
    scanf("%d",&d);
      printf("\nenter first term of ap");
      scanf("%d",&a);
      i=a;
      while(i<=n)
       {
      printf("%d+",i);
      sum=sum+i;
  
       i+=d;
       }
       printf("\nyour sum is %d",sum);
       break;
    }
     case'*':
    
    { 
     float n;
    float j,a,r,prod=0.00;
      printf("enter last no of gp");
       scanf("%f",&n);
    printf("\n enter first term");
      scanf("%f",&a);
      printf("\nenter common ratio");
     scanf("%f",&r);
     j=a;
     for(j=a;j<=n;j=j*r)
      {
     printf("%f+",j);
      prod=prod+j;
      }
      printf("\nyour sum of gp is %f",prod);
    break;
    }
    
    case'/':
      {
        float n,a,i,x=1,sum=0.00;
        printf("enter the last term of hp=");
        scanf("%f",&n);
         printf("\nenter the first term=");
          scanf("%f",&a);
          i=a;
         while(i<=n)
          {
        printf("%.0f/%.0f +",x,i);
         
          sum=sum+(x/i);
          i++;
        }
        printf("\nyou sum of hp seriese is %.2f",sum);
        break;
        }
      case 'a':
    
       {
         int i,j,a,b,m,n,d,r,sum=0;
         printf("    I thik you know that agp is collectio of ap + gp\n");
        
       printf("\nEnter the first term of ap ser ");
         scanf("%d",&a);
        printf("\nenter first of gp ser");
          scanf("%d",&b);
        printf("\n enter. last no of agp seriese ");
         scanf("%d,%d",&m,&n);
        printf("\nenter common difference= ");
        scanf("%d",&d);
        printf("enter common ratio= ");
        scanf("%d",&r);
         i=a;
        j=b;
        while (i<=m&&j<=n)
        {
        printf("%d*%d+",i,j);
         sum=sum+i*j;
          i=i+d;
          j=j*r;
          
         }
        printf("your sum is %d",sum);
        break;
        }
       default:
    {
    printf("plz enter valid operation");
    break;
    }
    }
    
       
        
        return 0;
        }
       
        
        
        
     
   
   
    
     
    
     
    
    
    