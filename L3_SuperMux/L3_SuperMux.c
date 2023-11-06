#include "wiced.h"
#include "sparcommon.h"
#include "wiced_platform.h"
#include "wiced_rtos.h"
#include "wiced_hal_gpio.h"
#include "wiced_bt_trace.h"

APPLICATION_START()
{
    wiced_set_debug_uart(WICED_ROUTE_DEBUG_TO_PUART);

    WICED_BT_TRACE("Hello, World welome\n");
    while(1)
    {
        WICED_BT_TRACE("Hello, World welome\n");

        WICED_BT_TRACE("Setting 0\n");
        wiced_hal_gpio_set_pin_output(WICED_GPIO_PIN_LED_1,0); //for green LED
        wiced_hal_gpio_set_pin_output(WICED_GPIO_PIN_LED_2,0); //FOR RED Led

      wiced_rtos_delay_milliseconds(5000,KEEP_THREAD_ACTIVE );
        WICED_BT_TRACE("Setting 1\n");

        wiced_hal_gpio_set_pin_output(WICED_GPIO_PIN_LED_1,1); // for green led
        wiced_hal_gpio_set_pin_output(WICED_GPIO_PIN_LED_2,1); // FOR  red led
        wiced_rtos_delay_milliseconds(50,KEEP_THREAD_ACTIVE );
    }
}
