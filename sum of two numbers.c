#include<stdio.h>
#include<conio.h>

int main()
{
    
    int a;
    int b;
    int sum;
    
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    
    sum = a + b;
    
    printf("%d + %d = %d\n",sum);
    
    getch();
    return 0;
}
