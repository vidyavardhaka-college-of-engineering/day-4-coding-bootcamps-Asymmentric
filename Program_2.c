//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
   //Declare all the variables[N, array a & array b, i] used in the code
   int N;
   scanf("%d",&N);
  int a[N],b[N];
   //Read the Value of N using scanf statement

   
   //Read the array elements using for loop and scanf statment
   for(int i=0;i<N;i++){
     scanf("%d",&a[i]);
   }
   //Copy the elements of array 'a'[first array] to  array 'b'[second array] using for loop
    for(int i=0;i<N;i++){
      b[i]=a[i];
     // printf("%d %d",a[i],b[i]);
    }
   //Print the both array elements in using printf statement in the above specified format
  for(int i=0;i<N;i++){
    printf("%d\n ",a[i]);
    printf("%d",b[i]);
    }
   return 0; 
}
