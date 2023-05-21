#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("enter any digit: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
        //sum=sum+r;

    }
    printf("%d",sum);
    /*if(n==sum)
        printf("palindrome\n");
    else
        printf("not palindrome\n");*/
}

