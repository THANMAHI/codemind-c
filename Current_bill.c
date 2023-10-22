#include<stdio.h>
int main()
{
    float u;
    scanf("%f",&u);
    if(u<=199)
    {
        printf("%.2f",u*(1.20)+100);
    }
    else if(u>=200&&u<400)
    {
        printf("%.2f",u*(1.50)+100);
    }
    else if(u>=400&&u<600)
    {
        printf("%.2f",u*(1.80)+u*(1.80)*0.15);
    }
    else if(u>=600)
    {
        printf("%.2f",u*(2.00)+u*(2.00)*0.15);
    }
}