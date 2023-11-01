
#ifndef RCC_CNFG_H_
#define RCC_CNFG_H_

/* select  clock clock :    RCC_HSI
							RCC_HSE_RC
							RCC_HSE_CRYSTAL
							RCC_PLL

*/
#define RCC_CLOCK_TYPE RCC_HSI
 
 
/* select PLL INPUT :	RCC_PLL_IN_HSI_DIV_2
						RCC_PLL_IN_HSE_DIV_2
						RCC_PLL_IN_HSE
*/

#if RCC_CLOCK_TYPE == RCC_PLL
#define PLL_INPUT RCC_PLL_IN_HSE
#endif
/* select PLL multiplier factor :	PLL_IN_x2    0000
									PLL_IN_x3    0001
									PLL_IN_x4    0010
									PLL_IN_x5    0011
									PLL_IN_x6    0100
									PLL_IN_x7    0101
									PLL_IN_x8    0110
									PLL_IN_x9    0111
									PLL_IN_x10   1000
									PLL_IN_x11   1001
									PLL_IN_x12   1010
									PLL_IN_x13   1011
	                                PLL_IN_x14   1100
                                    PLL_IN_x15   1101
                                    PLL_IN_x16   1110
                                    PLL_IN_x16   1111
*/
	
#if RCC_CLOCK_TYPE == RCC_PLL
#define PLL_MUL_FACTOR PLL_IN_x2
#endif

#endif