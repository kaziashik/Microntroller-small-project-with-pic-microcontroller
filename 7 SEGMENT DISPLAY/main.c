   #include<16F84A.h>
   #use delay (clock= 4MHz)
   #fuses HS
   void main()
   {
   while(true)
   {
   output_b(0x3F);
   delay_ms(1000);
   output_b(0x06);
   delay_ms(1000);
   output_b(0x5B);
   delay_ms(1000);
   output_b(0x4F);
   delay_ms(1000);
   output_b(0x66);
   delay_ms(1000);
   output_b(0x6D);
   delay_ms(1000);
   output_b(0x7D);
   delay_ms(1000);
   output_b(0x07);
   delay_ms(1000);
   output_b(0x7F);
   delay_ms(1000);
   output_b(0x6F);
   delay_ms(1000);
   
   }
   }
