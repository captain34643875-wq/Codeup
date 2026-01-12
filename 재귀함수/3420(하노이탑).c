#include <stdio.h>
void hanoi(int n,char from, char tmp, char to)
{
    if(n==1)
        printf("Disk %d : %c to %c\n",n,from,to);
    else
    {
        hanoi(n-1,from,to,tmp);
        printf("Disk %d : %c to %c\n",n,from,to);
        hanoi(n-1,tmp,from,to);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C');
}