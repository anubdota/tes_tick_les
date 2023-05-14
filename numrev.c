#include<stdio.h>
int main(){
    int arr[2] = {1, 2};
int *ptr = arr;   // ptr points to arr[0]

printf("%p\n", ptr+1);  // prints the memory address of arr[1]
printf("%p\n", ptr);    // still prints the memory address of arr[0]
ptr++;                  // ptr is now pointing to arr[1]
printf("%p\n", ptr);    // prints the memory address of arr[1]


    return 0;
}
