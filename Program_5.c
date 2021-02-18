//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int a[10], n, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    //Write your code here
  int big,small;
  big=0 ;
  small=a[i];

  for(int i=0;i<n;i++){
    if(a[i]>=big){
      big=a[i];
    }
    if(a[i]<=small){
      small=a[i];
    }
  }

  printf("Big->%d\n",big);
  printf("small->%d",small);
    return 0;
}
