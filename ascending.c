#include <stdio.h>
int main() {
  int i,j,n,c,a[30];
  printf("number of elements:\n");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              c=a[i];
              a[i]=a[j];
              a[j]=c;
          }
      }
  }
  printf("ascending order:\n");
  for(i=0;i<n;i++)
  {
      printf("%d \t",a[i]);

  }
    return 0;
}

