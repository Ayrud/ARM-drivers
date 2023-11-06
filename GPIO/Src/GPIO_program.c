#include "GPIO_interface.h"
#include "GPIO_registers.h"
#include "BIT_Math.h"
#include "STD_Types.h"

GPIO * PORTS_ARRAY[3]={GPIOA,GPIOB,GPIOC};

void GPIO_voidSetPinDirection(u8 PORT_NAME,PIN_NUMBER Copy_PinNumber,PIN_MODE Copy_PINMODE)
{
	if(Copy_PinNumber<PIN8)
	{
		CLR_GPIO_PIN_MODE(PORTS_ARRAY[PORT_NAME]->GPIO_CRL,Copy_PinNumber);
		SET_GPIO_PIN_MODE(PORTS_ARRAY[PORT_NAME]->GPIO_CRL,Copy_PinNumber,Copy_PINMODE);

	}
	else
	{
		CLR_GPIO_PIN_MODE(PORTS_ARRAY[PORT_NAME]->GPIO_CRH,Copy_PinNumber-8);
		SET_GPIO_PIN_MODE(PORTS_ARRAY[PORT_NAME]->GPIO_CRH,Copy_PinNumber-8,Copy_PINMODE);
	}

}

void GPIO_voidSetPinValue(u8 PORT_NAME,PIN_NUMBER Copy_PinNumber,PIN_VALUE Copy_OutputValue)
{
	if(Copy_OutputValue==PIN_SET)
		SET_BIT(PORTS_ARRAY[PORT_NAME]->GPIO_ODR,Copy_PinNumber);
	else
		CLR_BIT(PORTS_ARRAY[PORT_NAME]->GPIO_ODR,Copy_PinNumber);
}
u8 GPIO_u8GetPinValue(u8 PORT_NAME,PIN_NUMBER Copy_PinNumber)
{
	return GET_BIT(PORTS_ARRAY[PORT_NAME]->GPIO_IDR,Copy_PinNumber);
}

