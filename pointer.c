#include <stdio.h>

int main(){
    int i= 10;
    int *ptr = &i;
    printf("At %d address the value of i is %d\n", ptr, *ptr);

    /*int j=*ptr+1;
  int *ptr2=&j;
     printf("At %p address the value of i++ is %d\n", ptr2, *ptr2);*/
   *ptr+=1;
    printf("At %d address the value of i is %d\n", ptr, *ptr);
    return 0;
}