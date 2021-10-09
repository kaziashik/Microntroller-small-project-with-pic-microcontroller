#include <16f84.h>
#use delay(clock=20Mhz)
#fuses HS
void main()
{
while (true)
{
output_b(0x00);
delay_ms(1000);
output_b(0xFF);
delay_ms(1000);
output_b(0x0F);
delay_ms(1000);
output_b(0xF0);
delay_ms(1000);
}
}
