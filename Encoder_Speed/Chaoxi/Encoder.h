#ifndef __ENCODER_H_
#define __ENCODER_H_
#include "WeiDai.h"
#include "stm32f10x.h" 
void Encoder_Init(void);
int16_t Encoder_Get(void);
#endif
