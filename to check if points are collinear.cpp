//to check if points are collinear.
#include<stdio.h>
int main()
{
    int x,y,a,b,c,d,v1,v2;
    printf("enter the coordinates of A:");
    scanf("%d%d",&x,&y);
    printf("enter the coordinates of B:");
    scanf("%d%d",&a,&b);
    printf("enter the coordinates of C:");
    scanf("%d%d",&c,&d);
    
    v1=(a-x)/(b-y);
    v2=(c-a)/(d-b);
    
    if(v1==v2){
        printf("points are collinear\n");
    }
    else{
        printf("points are not collinear");
    }
    return 0;
}

