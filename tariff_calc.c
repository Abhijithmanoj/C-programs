#include "tariff_calc.h"

charge_data_t charge_data[NUM_CATEGORIES];
static const float unit_charges[] = {1.5, 3.5, 4.6, 6.6};
static const float fixed_charges[] = {0, 20, 30, 50};

uint32_t get_tariff_category(uint32_t units){
    uint32_t x=units;
    if(x>=0&&x<=100){
        return UNITS_0_100;
    }
    if(x>=101&&x<=200){
        return UNITS_101_200;
    }
    if(x>=201&&x<=500){
        return UNITS_201_500;
    }
    if(x>500){
        return UNITS_501_plus;
    }
    printf("Invalid Input for Unit");
    return 0;
}

float get_fixed_charges(uint32_t tariff_slab){
    return fixed_charges[tariff_slab];
}
float get_unit_charges(uint32_t tariff_slab){
    return unit_charges[tariff_slab];
}

float get_usage_charges(uint32_t units){
    uint32_t tariff_slab;
    tariff_slab = get_tariff_category(units);
    return ((float)units * unit_charges[tariff_slab]);

}

float calc_net_bill(uint32_t units){
    return 0.0;
}
