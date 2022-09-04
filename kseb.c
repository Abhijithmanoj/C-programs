#include<stdio.h>
#include<stdlib.h>
double tariff(int unit)
{
    int x=unit;
    if(x>=0&&x<=100)
    {
        return 1.50*unit;
    }
    else if(x>=101&&x<=200)
    {
        return 3.50*unit;
    }
    else if(x>=201&&x<=500)
    {
        return 4.60*unit;
    }
    else if(x>500)
    {
        return 6.60*unit;
    }
    else
    {

        printf("Invalid Input for Unit");
        return 0;
    }

}
void display(int unit,double vp)
{
    int x=unit;
    double v=vp;
    int y;
    if(x>=0&&x<=100)
    {
        y=0;
    }
    else if(x>=101&&x<=200)
    {
        y=20;
    }
    else if(x>=201&&x<=500)
    {
        y=30;
    }
    else if(x>500)
    {
        y=50;
    }
    else
    {

        printf("Invalid Input for Unit");
    }

    char name[20],addr[20];
    int phone;
    printf(" \nEnter Name:");
    scanf(" %s",name);
    printf("\nEnter Address:");
    scanf(" %s",addr);
    printf("\nEnter Phone:");
    scanf(" %d",&phone);
    printf("--------------------------------------\n");
    printf("\t\t\t   KSEB\n");
    printf("\t\t\tBill Summary\n");
    printf("\n");
    printf("Name:%s\t \t \t%d\n",name,phone);
    printf("Address:%s\n",addr);
    printf("--------------------------------------");
    printf("\nUnit Consumed:%d",x);
    printf("\nTariff Amount:%f",v);
    printf("\nFixed Charge:%d",y);
    printf("\nAmount to pay:%f",v+y);
}
void main()
{
    int opt,unit;
    double vp;
    printf("Usage Type:\n");
    printf("\t 1.Domestic Usage\n");
    printf("\t 2.Commercial Usage\n");
    printf("Select the Category:\n");
    scanf("%d",&opt);
    if(opt==1)
    {
        printf("Domestic  Tariff Range:\n");
        printf("-----------------------\n");
        printf("\tUNITS\tPrice(INR)\tFixed Charges(INR)\n");
        printf("\t0-100\t 1.50\t\t0\n");
        printf("\t101-200\t 3.50\t\t20\n");
        printf("\t201-500\t 4.60\t\t30\n");
        printf("\t>500\t 6.60\t\t50\n");
        printf("\nEnter the number of units consumed:\n");
        scanf("%d",&unit);
        vp=tariff(unit);
        printf("Tariff Amount:%f",vp);
        display(unit,vp);
    }

}
