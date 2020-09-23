#include "TM4C123GH6PM.h"

int main() {
    SYSCTL_RCGCGPIO_R = 0x20U;
    GPIO_PORTF_DEN_R = 0xEU;
    GPIO_PORTF_DIR_R = 0xEU;
    
    while (1) {
        GPIO_PORTF_DATA_R = 0x04U;
        int volatile counter = 0;
        while (counter < 500000) {
            ++counter;
        }
        
        GPIO_PORTF_DATA_R = 0x00U;
        counter = 0;
        while (counter < 500000) {
            ++counter;
        }
    }
    
    return 0;
}
