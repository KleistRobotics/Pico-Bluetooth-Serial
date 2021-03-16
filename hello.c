//Example script of USB serial

#include "pico/stdlib.h"
#include <stdio.h>
#include "hardware/uart.h"

int main()
{
    // Initialise UART 0
    uart_init(uart0, 9600);
 
    // Set the GPIO pin mux to the UART - 0 is TX, 1 is RX
    gpio_set_function(0, GPIO_FUNC_UART);
    gpio_set_function(1, GPIO_FUNC_UART);
 
    while (true) { 
        uart_puts(uart0, "Hello world!\n\r");
        sleep_ms(1000);
    }
}