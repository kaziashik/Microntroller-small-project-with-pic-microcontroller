#include <16F877A.h>
#use  delay (clock=4MHz)
#fuses HS
void main ()
{
int i;
while(TRUE)
{
for(i=0;i<10;i++)
{
output_b(0xff);
delay_ms(100);
output_b(0x00);
delay_ms(900);

}

for(i=0; i<10; i++)
{
output_b (0xff);
delay_ms(500);
output_b(0x00);
delay_ms(500);
}

for( i=0; i<10;i++)
{
output_b(0xff);
delay_ms(900);
output_b(0x00);
delay_ms(100);
}
}
}
