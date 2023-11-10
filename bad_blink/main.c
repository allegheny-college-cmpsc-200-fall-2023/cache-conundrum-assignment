#include <stdio.h>
#include <stdlib.h>

#include "headers/heap.h"
#include "headers/cache.h"
#include "headers/timing.h"

#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

void long_delay(void);

void blink(void) {
    int i;
    reset_cache_nocache();
    while (true) {
        i = 1;
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, i);
        long_delay();
        printf("OFF\n");
        i = 0;
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, i);
        long_delay();
        printf("ON\n");
    }
}

int main(void) {
    // Initialize USB
    stdio_init_all();

    if (cyw43_arch_init()) {
        return -1;
    }   

    /*
        Comment out the function you _do not want_ to run. For example:
        to run blink, comment out bad_blink; to run bad_blink, comment out
        blink.

        Refer to the report in docs/report.md for questions using this assignment.
    */
    blink();
    //bad_blink();

    return 0;
}


void long_delay(void) {
    // TODO: Implement cache hit, miss calculation
    // TODO: Calculate hit, miss rate
    int a;
    // TODO: Create a starting time
    for(int i = 0; i < 10000000U; i++){
        a = i;
    }
    // TODO: Calculate an ending time
    // TODO: Print the net time taken to run functionality
}
