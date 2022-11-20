#include<stdio.h>

void printArray(int *A, int n)
{
       for(int i=0; i < n; i++)
       {
              printf("%d",A[i]);
       }
       printf("\n");
}
void selectionSort(int *A, int n)
{
       int indexOfMin, temp;
printf("running selection sort...\n");
for(int i=0; i < n-1 ; i++)
{
indexOfMin= i;
for(int j=i+1; j<n; j++)
{
       if(A[j] < A[indexOfMin])
       {
              indexOfMin = j;
       }
}
//swap A[i]
temp = A[i];
A[i] =A[indexOfMin];
A[indexOfMin] = temp;
}
}

int main()
{
       int A[]={3, 5, 2, 3, 13, 12};
       int n=5;
       printArray(A, n);
       selectionSort(A, n);
       printArray(A, n);
       return 0;
}



//output
//input array(there wil be total n-1 passes 5-1=4 in this case)
//0    1      2      3      4
//3    5      2      13     12

//After first pass
// o   1      2      3      4
//2   | 5      3      13     12

//After second pass
// o   1      2      3      4
//2    3|     5      13     12

//After third pass
// o   1      2      3      4
//2    3     5 |     13     12

//After fourth pass
// o   1      2      3      4
//2    3      5      12|     13