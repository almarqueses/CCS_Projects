/***********************************
*
* www.fatihinanc.com
* 
* Muhammed Fatih Ã�NANÃ‡
* 09.12.2012
*
* LM4F120 iÃ§in 2x16 LCD KÃ¼tÃ¼phanesi
* Stellaris LaunchPad
*
***********************************/
/*
RS -> PB0
EN -> PB1
D4 -> PD0
D5 -> PD1
D6 -> PD2
D7 -> PD3
*/

#define delay_us(x)     systick_delay_us(x)
#define delay_ms(x)     systick_delay_ms(x)

#define LCD_DATA        GPIO_PORTD_DATA_R
#define LCD_CONTROL     GPIO_PORTB_DATA_R
#define	EN_ACKAPA()     LCD_EN(1),LCD_EN(0)

#define	LCD_RS(x)       ( (x) ? (LCD_CONTROL |= 0x01) : (LCD_CONTROL &= ~0x01) )
#define LCD_EN(x)       ( (x) ? (LCD_CONTROL |= 0x02) : (LCD_CONTROL &= ~0x02) )


void lcd_command  (unsigned char); // LCD, sending commands to benefit
void lcd_clear	(void);          // LCD screen clean
void lcd_puts   (const char*);   // LCD, string expressions author
void lcd_goto   (char,char);     // The LCD is also row and stun as an expense in the desired location
void lcd_init   (void);          //  LCD initial settings is done
void lcd_putch  (char);          // Is used to write the LCD, single character.
