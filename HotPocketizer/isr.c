/*
 * File:   isr.c
 * Author: Prerak
 *
 * Created on 21 September, 2024, 6:04 PM
 */

#include <xc.h>
#include "main.h"

extern int min, sec;
void __interrupt() isr(void)
{
    static unsigned int count = 0;
    
    if (TMR2IF == 1)
    {
        if (++count == 1250)
        {
                count = 0;
            if(sec>0)
            {
                sec--;
            }
            else if(sec == 0 && min>0)
            {
                min--;
                sec = 59;
            }
            
        }
        
        TMR2IF = 0;
    }
}
