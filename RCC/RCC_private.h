

#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_
/* base address */
#define RCC_BASE_ADD 0x40021000
/* register definations */
#define RCC_CR *((volatile u32*)(RCC_BASE_ADD))
#define RCC_CFGR *((volatile u32*)(RCC_BASE_ADD+0x04))
#define RCC_CIR *((volatile u32*)(RCC_BASE_ADD+0x08))
#define RCC_APB2RSTR *((volatile u32*)(RCC_BASE_ADD+0x0C))
#define RCC_APB1RSTR *((volatile u32*)(RCC_BASE_AD)+0x010))
#define RCC_AHBENR *((volatile u32*)(RCC_BASE_ADD+0x14))
#define RCC_APB2ENR *((volatile u32*)(RCC_BASE_ADD+0x18))
#define RCC_APB1ENR *((volatile u32*)(RCC_BASE_ADD+0x1C))
#define RCC_BDCR *((volatile u32*)(RCC_BASE_ADD+0x20))

/* MULTIPLIER FACTOR */
#define PLL_IN_x2    0b0000
#define PLL_IN_x3    0b0001
#define PLL_IN_x4    0b0010
#define PLL_IN_x5    0b0011
#define PLL_IN_x6    0b0100
#define PLL_IN_x7    0b0101
#define PLL_IN_x8    0b0110
#define PLL_IN_x9    0b0111
#define PLL_IN_x10   0b1000
#define PLL_IN_x11   0b1001
#define PLL_IN_x12   0b1010
#define PLL_IN_x13   0b1011
#define PLL_IN_x14   0b1100
#define PLL_IN_x15   0b1101
#define PLL_IN_x16   0b1110
#define PLL_IN_xX16   0b1111



#endif /* RCC_PRIVATE_H_ */
