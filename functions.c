#include <stdio.h>
#include <string.h>

void main()
{
    char c[10]="hello";
    char b[10]="world";
    int p=5,q=2,r,s,n,x,y;
    float z=1.5;
    strcmp(b,c);
    printf("%s is compared with %s",b,c);
    strcpy(b,c);
    printf("copied is %s",b);
    n=strlen(c);
    printf("%d",n);
    strupr(b);
    printf("upper case is :%s",b);
    strlwr(b);
    printf("lower case is :%s",b);
    strrev(b);
    print("reverse is:%s",b)
    r=pow(p,q);
    print("%d power %d is %d",p,q,r);
    s=sqrt(r);
    printf("square roof of %d is %d",r,s);
    x=ceil(z);
    printf("ceil value of %d is %d",z,x);
    y=floor(z);
    printf("floor value of %d is %d",z,y);
    int a=rand();
    printf("A random value is %d",a
}