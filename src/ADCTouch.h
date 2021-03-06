/*
  ADCTouch.h - Library for Capacittive touch sensors using only one ADC PIN
  Created by martin2250, April 23, 2014.
  Released into the public domain.
*/

#ifndef ADCT_h
#define ADCT_h

#include "Arduino.h"

class ADCTouchClass
{
	public:
	int read(byte ADCChannel, int samples = 100);
};

extern ADCTouchClass ADCTouch;

#endif
