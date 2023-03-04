#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,sum=0;
int i;
printf("enter the number of elements:");
scanf("%d",&n);
int*arr=(int*)calloc(n,sizeof (int));
printf("enter %d elements :\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
sum+=arr[i];
}
printf("the sum of %d elements is: %d\n",n,sum);
free(arr);
return 0;
}


