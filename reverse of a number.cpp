//print reverse of a number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,sum;
    printf("enter the number :");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}

