





#include<stdio.h>
int main()
{
 int i,j,n,m,k,temp, size=0;
 printf("Enter size of  first array ");
 scanf("%d",&n);
printf("Enter size of second array ");
scanf("%d",&m);
int a[n], b[m], c[100];
printf("\nEnter element in first array\n");
for(i=0;i<n;i++) {
      printf("a[%d]= ",i);
      scanf("%d",&a[i]);
      c[size++] = a[i];
}
printf("\nEnter element in second array\n");

for(j=0;j<m;j++) {
     printf("b[%d]= ",j);
     scanf("%d",&b[j]);
    c[size++] = b[j];
}

for(i=0;i<size;i++) {
    for(j=0;j<size-1;j++) {
        if(c[j]>c[j+1])
            {
              temp=c[j];
              c[j]=c[j+1];
              c[j+1]=temp;
          }
        }
      }
printf("\nAfter  merging and sorting \n");
for(i=0;i<m+n;i++) {
      printf("c[%d]=",i);
      printf("%d\n",c[i]);
}

    return 0;
}



