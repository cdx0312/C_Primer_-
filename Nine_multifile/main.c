#include <stdio.h>
#include "hotel.h"
int main() {
    int nights;
    double hotel_rates;
    int code;

    while ((code = menu()) != QUIT) {
        switch (code) {
            case 1: hotel_rates = HOTEL1;
                    break;
            case 2: hotel_rates = HOTEL2;
                    break;
            case 3: hotel_rates = HOTEL3;
                    break;
            case 4: hotel_rates = HOTEL4;
                    break;
            default:hotel_rates = 0.0;
                    printf("Ooops! \n");
                    break;
        }
        nights = getnights();
        showprice(hotel_rates, nights);
    }
    printf("Thank you and goodbye. \n");

    return 0;
}