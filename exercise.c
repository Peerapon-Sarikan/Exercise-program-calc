#include<stdio.h>
int main()
{
    int num1;
    int num2;
 int menu;
 int ans;
    printf("Enter Num1:");
    scanf("%d",&num1);
    printf("Enter Num2:");
    scanf("%d",&num2);
    printf("Calulator menu\n 1. +\n 2. -\n 3. *\n 4. /\n");
    scanf("%d",&menu);
switch (menu)
    {
        
        case 1:
        ans = num1+num2;
        printf("ans = num1 + num2 = %d\n",ans);
        break;
        case 2:
        ans = num1-num2;
        printf("ans = num1 - num2 = %d\n",ans);
        break;
        case 3:
        ans = num1*num2;
        printf("ans = num1 * num2 = %d\n",ans);
        break;
        case 4:
        ans = num1/num2;
        printf("ans = num1 / num2 = %d\n",ans);
        break;
    }
    return 0;
}