

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_


#include "bit_mask.h"
#include "std_types.h"

#define RCC_AHB  0
#define RCC_APB1 1
#define RCC_APB2 2
/* AHB BUS PERIPHRALS  */
#define RCC_AHB_DMA1 0
#define RCC_AHB_DMA2 1
#define RCC_AHB_SRAM 2
#define RCC_AHB_FLITF 4
#define RCC_AHB_CRCE 6
#define RCC_AHB_FSMC 8
#define RCC_AHB_SDIO 10
/* APB1 BUS PERIPHRALS */
#define RCC_APB1_TIM2 0
#define RCC_APB1_TIM3 1
#define RCC_APB1_TIM4 2
#define RCC_APB1_TIM5 3
#define RCC_APB1_TIM6 4
#define RCC_APB1_TIM7 5
#define RCC_APB1_TIM12 6
#define RCC_APB1_TIM13 7
#define RCC_APB1_TIM14 8
#define RCC_APB1_WWDT 11
#define RCC_APB1_SPI2 14
#define RCC_APB1_SPI3 15
#define RCC_APB1_USART2 17
#define RCC_APB1_USART3 18
#define RCC_APB1_UART4 19
#define RCC_APB1_UART5 20
#define RCC_APB1_I2C1 21
#define RCC_APB1_I2C2 22
#define RCC_APB1_USB 23
#define RCC_APB1_CAN 25
#define RCC_APB1_BKP 27
#define RCC_APB1_PER 28
#define RCC_APB1_DAC 29
/* APB2 BUS PERIPHRALS */
#define RCC_APB2_AFIORST 0
#define RCC_APB2_IOPARST 2
#define RCC_APB2_IOPBRST 3
#define RCC_APB2_IOPCRST 4
#define RCC_APB2_IOPDRST 5
#define RCC_APB2_IOPERST 6
#define RCC_APB2_IOPFRST 7
#define RCC_APB2_IOPGRST 8
#define RCC_APB2_ADC1RST 9
#define RCC_APB2_ADC2RST 10
#define RCC_APB2_TIM1RST 11
#define RCC_APB2_SPI1RST 12
#define RCC_APB2_TIM8RST 13
#define RCC_APB2_USART1RST 14
#define RCC_APB2_ADC3RST 15
#define RCC_APB2_TIM9RST 19
#define RCC_APB2_TIM10RST 20
#define RCC_APB2_TIM11RST 21


void RCC_voidinit(void);

void RCC_voidEnableClock(u8 copy_u8BusId,u8 copy_u8PerId);

void RCC_disable(u8 BUS_ID,u8 PER_ID);





#endif /* RCC_INTERFACE_H_ */
