/*
 * File:   main.c
 * Author: prerak8880
 *
 * Created on 19 October, 2024, 5:16 AM
 */


#include <xc.h>
#include "clcd.h"

#pragma config WDTE = OFF

static void init_config(void){
    init_clcd();
}
void main(void) {
    init_config();
    
    while(1){
        clcd_print("HOLA!", LINE1(3));
        clcd_print("WELCOME", LINE2(2));
        clcd_print("PRERAK", LINE3(3));
        clcd_putch(8+'0', LINE4(5));
    }
    return;
}
