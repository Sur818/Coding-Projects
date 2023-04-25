#include<stdio.h>

int main()
{
  int i,j,n,temp;
printf("Enter size of array ");
scanf("%d",&n);
 int a[n];
 int*ptr=&a;
printf("\nEnter element in array\n");
for(i=0;i<n;i++) {
    printf("a[%d] = ",i);
    scanf("%d", (ptr+i));
}

for(i=0;i<n;i++) {
    for(j=0;j<n-2;j++) {
          if(*(ptr+j)>*(ptr+j+2))
            {
           temp=*(ptr+j);
           *(ptr+j)=*(ptr+j+2);
           *(ptr+j+2)=temp;
       } 
    }
 }

printf("\n\nSorted Array -----\n");
for(i=0;i<n;i++) {
    printf("[%d] : %d\n",i, *(ptr+i));
}
return 0;
}