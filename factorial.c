
// Factorial : 5! = 5 * 4* 3* 2* 1

#include<stdio.h>
int my_fact(int num);
int main()
{
    int n1 = 5;
    int result = my_fact(n1);

    printf("Result = %d\n",result);
    return 0;
}

int my_fact(int num)
{
    if(num == 0)
        return 1;

    return num * my_fact(num - 1);
}