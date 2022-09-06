#ifndef TARIFF_CALC_H_INCLUDED
#define TARIFF_CALC_H_INCLUDED

#include <stdlib.h>
#include <stdint.h>

enum tariff_categories {
    UNITS_0_100,
    UNITS_101_200,
    UNITS_201_500,
    UNITS_501_plus,
    NUM_CATEGORIES
};

typedef struct {
    float fixed_charge;
    float unit_charge;
}charge_data_t;

uint32_t get_tariff_category(uint32_t units);
float get_fixed_charges(uint32_t tariff_slab);
float get_unit_charges(uint32_t tariff_slab);

float get_usage_charges(uint32_t units);

float calc_net_bill(uint32_t units);

void set_fixed_charges(float * data);


#endif // TARIFF_CALC_H_INCLUDED
