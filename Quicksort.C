#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
int partition(int A[],int l,int h)
{
 int pivot=A[l];
 int i=l,j=h;

 do
 {
 do{i++;}while(A[i]<=pivot);
 do{j--;}while(A[j]>pivot);

 if(i<j)swap(&A[i],&A[j]);
 }while(i<j);

 swap(&A[l],&A[j]);
 return j;
}

void QuickSort(int A[],int l,int h)
{
 int j;

 if(l<h)
 {
     j=partition(A,l,h);
     QuickSort(A,l,j);
    QuickSort(A,j+1,h);
 }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main(){
      int n;
    printf("Enter the size");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        printf("Enter the element");
        scanf("%d",&A[i]);
    }


 printf("Unsorted Array\n");
    printArray(A,n);
    QuickSort(A,0,n);
    
    printf("sorted Array\n");
    printArray(A, n);

 return 0;
}   
