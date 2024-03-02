#include <stdio.h>

void selectionSort(int* nums, int length) {
    for (int i=0; i<length-1; i++) {
        int minIndex = i; 
        for (int j=i; j<length; j++) {
            minIndex = i; 
            if (nums[minIndex] > nums[j]) {
                minIndex = j;
            }
        }
        int temp = nums[minIndex];
        nums[minIndex] = nums[i];
        nums[i] = temp;
    }
}

void printArray(int* a, int length) {
    for (int i=0; i<length; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    int nums[] = {5, 4, 3, 2, 1};
    int length = sizeof(nums)/sizeof(nums[0]);
    selectionSort(nums, length);
    printArray(nums, length);
}
