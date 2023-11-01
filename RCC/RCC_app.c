#include "bit_mask.h"
#include "std_types.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_cnfg.h"

void RCC_voidinit(void)
{
	/* enable the disered clock source */
	#if CLK_SOURCE ==  RCC_HSI
		SETBIT(RCC_CR,0);//enable HSI
		RCC_CFGR = 0x00000000; //no clock output and select HSI as aclock sourc as bit0,1=00 (clk switch)
	#elif CLK_SOURCE ==  RCC_HSE_RC
		SETBIT(RCC_CR,16);//enable HSE 
		SETBIT(RCC_CR,18);//HDE_RC selection
		RCC_CFGR = 0x00000001; //no clock output and select HSE as clock source as bit0,1=01 (clk switch)
	#elif CLK_SOURCE == RCC_HSE_CRYSTAL
		SETBIT(RCC_CR,16);//enable HSE 
		CLRBIT(RCC_CR,18);//HDE_CRYSTAL selection
		RCC_CFGR = 0x00000001; //no clock output and select HSE as clock source as bit0,1=01 (clk switch)
	#elif CLK_SOURCE ==  RCC_PLL_HSE
		SETBIT(RCC_CR,24);//enable PLL
		RCC_CFGR = 0x00000010; //no clock output and select PLL as clock source as bit0,1=10 (clk switch)
		RCC_CFGR |= (PLL_MUL_FACTOR<<18);
		#if   PLL_INPUT == RCC_PLL_IN_HSI_DIV_2
			CLRBIT(RCC_CFGR,16);//select HSI/2
		#elif PLL_INPUT == RCC_PLL_IN_HSE_DIV_2
			SETBIT(RCC_CFGR,16);//select HSE
			SETBIT(RCC_CFGR,17);//select HSE/2
		#elif PLL_INPUT == RCC_PLL_IN_HSE
			SETBIT(RCC_CFGR,16);//select HSE
			CLRBIT(RCC_CFGR,17);
		#endif
	#endif
	
	
	
}

void RCC_voidEnableClock(u8 copy_u8BusId,u8 copy_u8PerId)
{
	if(copy_u8PerId <= 31)
	{
		switch (copy_u8BusId)
		{
		case RCC_AHB:
			SETBIT(RCC_AHBENR,copy_u8PerId);
			break;
		
		case RCC_APB1:
			SETBIT(RCC_APB1ENR,copy_u8PerId);
			break;
			
		case RCC_APB2:
			SETBIT(RCC_APB2ENR,copy_u8PerId);
		    break;
		}
		
	}
	else
	{
		/* return error */
	}
}

void RCC_voidDisableClock(u8 copy_u8BusId,u8 copy_u8PerId)
{
	if(copy_u8PerId <= 31)
	{
		switch (copy_u8BusId)
		{
		case RCC_AHB:
			CLRBIT(RCC_AHBENR,copy_u8PerId);
			break;
		
		case RCC_APB1:
			CLRBIT(RCC_APB1ENR,copy_u8PerId);
			break;
			
		case RCC_APB2:
			CLRBIT(RCC_APB2ENR,copy_u8PerId);
		    break;
		}
		
	}
	else
	{
		/* return error */
	}
}



