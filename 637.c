#include<stdio.h>
#include<stdlib.h>

int recursiveMaximum(int array[],int size){
    if(size==1)return array[0];
    int max=recursiveMaximum(array,size-1);
    return (array[size-1]>max)?array[size-1]:max;


}

int main(){
    int arr[6] = {5, 8, 2, 1, 10, 7};
    int max_value = recursiveMaximum(arr, 6);
    printf("The maximum value in the array is: %d\n", max_value);

    system("pause");
}