#include<stdio.h>
#include<stdlib.h>


int binary_search_recursive(int barray[],int low ,int high , int key){   
    if (low<=high)
    {  
        int mid = low +(high-low)/2;

        if (barray[mid]==key){
            return mid;
        }
        else if (barray[mid]>key)
        {
            return binary_search_recursive(barray,low,mid-1,key);
        }
        else 
        {
            return binary_search_recursive(barray,mid+1,high,key);
        }  
    }
    else 
    {
        return -1;
    }
    
}


int main(){
    int array[100];
    int key =999;
    for (int i = 0; i < 100; i++)
    {
        array[i]=i+1;
    }
    int result =binary_search_recursive(array,0,100,key);
    if (result != -1)
    printf("key %d  in array's index is %d\n",key,result);
    else
    printf("key %d doesn't find in array\n",key);
    system("pause");
}