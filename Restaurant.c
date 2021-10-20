#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()

{
    int a[10],i,j,x;
    float p[10],q[10],total=0;
    char c[20][20];
    printf("\n WELCOME TO MEXICAN RESTARAUNT\n");
    for(i=1;i<=10;i++)
    {
        printf("Enter the item\n");
        gets(c[i]);
        printf("Enter the quantity\n");
        scanf("%d",&a[i]);
        printf("Enter the rate\n");
        scanf("%f",&p[i]);
        q[i]=p[i]*a[i];
        j=i;
        total=total+q[i];
        printf("Enter any key to ADD more\n Enter 0 to make BILl:");
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
    }
printf("\n \t\tMEXICAN RESTRAUNT\n");
printf("\n---------------------*********---------------------");
printf("\nProduct \tQty \t Rate \t Price");
for(i=1;i<=j;i++)
{
    printf("\n %s\t\t %d\t\t %0.2f\t\t%0.2f\n", c[i],a[i],p[i],q[i]);

}
printf("\n\t\t TOTAL AMOUNT:- %0.2f\n",total);
printf("\n______________________________________________________\n");
printf("\n Thank You Visit Again\n");



    return 0;
}
