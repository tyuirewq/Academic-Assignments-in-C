#include<stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[])
{
    int i,j;
    for(i = 0; i < size-1; i++)
   {
        for(j = 0; j < size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

int main()
{
    int arr[size] = {50, 25, 5, 20, 10}, i;

    bubbleSort(arr);

    printf("After the bubble sort\n");
    for(i = 0; i < size; i++)
        printf("%d ",arr[i]);

    return 0;
}





#include<stdio.h>

void swapping(int *x, int *y)
{// here we are using pointers for swapping elements
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSortingFunction(int arr[],int ab)
{
    int i,j;
    // here is our main loop for bubble sorting
    while(i<ab-1){
        
        while (j<ab -1 - i){
            // this will swaps the number if current element is greater than next element of the array
            if(arr[j]  > arr[j+1])  {swapping(&arr[j], &arr[j+1]);}
            j++;
        }
        i++;
    }
}

// this is our main function from which we are going to call our functions 
int main()
{   int ab;
    printf("Give the Size of the array :   ");
    scanf("%d",&ab);
    int array[ab] ;
    // Here we are taking the input from user.
    for(int i = 0; i<ab;i++){
        printf("\n%d        ", i);
        scanf("%d",&array[i]);
    }

    BubbleSortingFunction(array,ab);

    printf("\n\n       After the bubble sort\n");
    for(int i = 0; i < ab; i++)
        printf("%d ",array[i]);
    return 0;
}
