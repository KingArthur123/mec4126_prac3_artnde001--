// Description----------------------------------------------------------------|
/*
 *
 */
// DEFINES AND INCLUDES-------------------------------------------------------|

#define STM32F051												   //COMPULSORY
#include "stm32f0xx.h"											   //COMPULSORY
#include "lcd_stm32f0.h"
#include <stdio.h>

// GLOBAL VARIABLES ----------------------------------------------------------|
// creating global variables
struct age_data {

  uint8_t day;
  uint8_t month_number;
  uint16_t year_of_birth;
  uint8_t age;
};


// FUNCTION DECLARATIONS -----------------------------------------------------|
//age_data my_age;    //creating a global variable of the struct
void main(void);                                                   //COMPULSORY

// MAIN FUNCTION -------------------------------------------------------------|

void main(void)  // declares an instance of age
{
	struct age_data my_age;
	my_age.day=1;
	my_age.month_number=8;
	my_age.year_of_birth=2000;
	my_age.age=22;






	while(1)
	{

	}
}

// OTHER FUNCTIONS -----------------------------------------------------------|




