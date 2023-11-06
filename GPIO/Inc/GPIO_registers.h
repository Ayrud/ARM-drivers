#ifndef GPIO_REGISTERS_H_
#define GPIO_REGISTERS_H_

#include "BIT_Math.h"
#include "STD_Types.h"
//GPIOA
//Base Address (PORTA):
#define GPIOA_BASE_ADDRESS		0x40010800
//Base Address (PORTB):
#define GPIOB_BASE_ADDRESS		0x40010C00
//Base Address (PORTC):
#define GPIOC_BASE_ADDRESS		0x40011000
typedef struct
{
	u32 GPIO_CRL;
	u32 GPIO_CRH;
	u32 GPIO_IDR;
	u32 GPIO_ODR;
	u32 GPIO_BSRR;
	u32 GPIO_BRR;
}GPIO;

#define GPIOA			(( GPIO*)GPIOA_BASE_ADDRESS)
#define GPIOB			(( GPIO*)GPIOB_BASE_ADDRESS)
#define GPIOC			(( GPIO*)GPIOC_BASE_ADDRESS)

#define GPIOA_PORT				0
#define GPIOB_PORT				1
#define GPIOC_PORT				2

#endif
