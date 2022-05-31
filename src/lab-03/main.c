#include <stdlib.h>

#define STM32_RCC_BASE 				0x40023800
#define STM32_RCC_AHB1ENR_OFFSET	0x0030
#define STM32_RCC_AHB1ENR			(STM32_RCC_BASE+STM32_RCC_AHB1ENR_OFFSET)
#define RCC_AHB1ENR_GPIOCEN 		(1 << 2)

int main(int argc, char *argv[])
{
	while(1){};

	return EXIT_SUCCESS;
}