#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>

#include "tariff_calc.h"


void main()
{
    char name[10],addr[20];
    int opt,phn;
    uint32_t tariff_slab,unit;
    float vp;
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
        tariff_slab = get_tariff_category(unit);
        vp=get_usage_charges(unit);
        printf("Tariff Amount:%f",vp);
        printf("\n");
        printf("\nEnter name:");
        scanf("%s",name);
        printf("\nEnter Address:");
        scanf("%s",addr);
        printf("\nEnter Phone:");
        scanf("%d",&phn);
        printf("-----------------------");
        printf("\n Units:%d",unit);
        printf("\n Tariff Amount:%f",vp);
        printf("\n Fixed Charge:%f",get_fixed_charges(tariff_slab));
        printf("\n Total Charge:%f",get_fixed_charges(tariff_slab) + vp);


    }
    else
        printf("INVALID");

}
