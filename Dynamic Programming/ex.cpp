// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int c=5,no=1000;
    do{
        no/=c;
    }while(c--);
    printf("%d\n",no);
}
