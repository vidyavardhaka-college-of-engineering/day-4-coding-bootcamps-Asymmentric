//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  //Declare all the variables[row, col, array a(2D array), i] used in the code
  int row,coloumn=2;

  

   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   scanf("%d",&row);
   //Read the elements of matrix a using nested for loop and scanf statment
   int a[row][coloumn];
   for(int i=0;i<row;i++){
     for(int j=0;j<2;j++){
       scanf("%d",&a[i][j]);
     }
   }
   for(int i=0;i<row;i++){
     for(int j=0;j<2;j++){
       printf("%d ",a[i][j]);
     }printf("\n");
   }

   
  return 0;
}
