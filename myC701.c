#include<stdio.h>
void main(){
    short a;
    long b;
    long long c;
    long double d;
    float s;
    printf("Size of short = %d byte\n" ,sizeof(a));
    printf("Size of long = %d byte\n" ,sizeof(b));
    printf("Size of long = %d byte\n" ,sizeof(c));
    printf("Size of long double = %d byte\n" ,sizeof(d));
    printf("Size of float = %d byte\n" ,sizeof(s));
}