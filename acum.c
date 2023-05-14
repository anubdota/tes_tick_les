#include <stdio.h>
void main(){
    char a[5]={'\0', 'a', 'b', 'c', 'd'}, i;
    for (i=1; i<5; i++) a[i] += a[i-1] -'a' + i;
    for (i=0; i<5; i++) printf("%d ",a[i]);
}