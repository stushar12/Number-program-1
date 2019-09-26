#include<stdio.h>
int main()
 {
   int lines;
   printf("\n Enter the number of lines \n");
   scanf("%d", &lines);
int arr[1000],k=0,c=0,m=0,sum=0;
for(int i=1;i<=lines;i++)
{
  sum=sum+i;
}

for(int i=2;i<=1000;i++)
{
  for(int j=1;j<=i;j++)
  {
    if(i%j==0)
      c++;
  }
  if(c==2)
  {
    arr[k]=i;
    if(sum==k+1)
    break;
    k++;
  }
  c=0;
}
printf("\nPrime Number Triangle is \n");
for(int i=1;i<=lines;i++)
{
  for(int j=1;j<=i;j++)
  {
   printf("%d ",arr[m]);
    m++;
  }
  printf("\n");
}
}
