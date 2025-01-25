#include <stdio.h>
#include "pico/stdlib.h"
#include "include/keyboard4x4.h"
#include "include/mlt8530.h"
#include "include/ws2812b_motion.h"

int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
