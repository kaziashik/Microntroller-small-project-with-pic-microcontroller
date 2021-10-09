#include <16F877A.H>
#use delay (clock=20MHz)
#fuses HS
#define use_portb_lcd
#include <lcd.c>
void main ()

{
lcd_init();
while(TRUE)
{
printf(lcd_putc,"UTeM");
delay_ms(1000);
printf(lcd_putc,"\f");
delay_ms(500);
printf(lcd_putc,"\nKAZI ASHIK");
delay_ms(1000);
printf(lcd_putc,"\f");
delay_ms(500);
printf(lcd_putc,"\nFTKEE");
delay_ms(1000);
printf(lcd_putc,"\f");
delay_ms(500);

}

}

