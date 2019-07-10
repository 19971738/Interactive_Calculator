#include <16f877a.h>
#use delay(clock=16M)
#include <lcd.c>
#include <string.h>
#include <stdlib.h>
#define use_portb_kbd TRUE
#include <kbd.c>

void main() {

char k;
char num2[20],num[20],rep[10];   //Stores the strings of the value
char *ptr,ptr2;  // pointer to convert the string
int c,z=0;   //index of the array
char value3=0;;
float b;
int16   value;
float value2;
float d;
lcd_init();
kbd_init();
port_b_pullups(TRUE);  //Activate the internbal resistors
k=0;
d =0;
while(z!=1){
value3=0;c=0;
lcd_gotoxy(1,1);
lcd_putc("Menu user:");
lcd_gotoxy(1,2);
lcd_putc("+=1;-=2;*=3;/=4;");
delay_ms(2000);
lcd_putc("\fchoice: ");
while(c!=1){
value3=kbd_getc();
if (value3 != 0){
   c=1;

}
}
lcd_putc("\f");
switch(value3)
{
case '1':
{
lcd_putc("Suma: ");
c=0;
while(k!='#')
   {
      k=kbd_getc();
      if(k!=0)
         {
         if(k=='*')
         {
         k='.';
         num[c]=k;
         c++;
         printf(lcd_putc, "%c",k);
         }
          if(k!='#'){ 
           num[c]=k;
            c++;
            printf(lcd_putc, "%c",k);
           }
           else k = '#';
         }
   }
   k=0;
   c=0;
   //lcd_putc("\f");
   lcd_putc(" + ");
while(k!='#')
   {
      k=kbd_getc();
      if(k!=0)
         {
         if(k=='*')
         {
         k='.';
         rep[c]=k;
         c++;
         printf(lcd_putc, "%c",k);
         }
           if(k!='#'){ 
           rep[c]=k;
            c++;
            printf(lcd_putc, "%c",k);
           }
           else k = '#';
         }
   }
   lcd_putc("\f");
   value=strtoul(num,&ptr,10);
   value2 =strtod(rep,&ptr2);
   d = value + value2;
   lcd_putc("La suma es: ");
   lcd_gotoxy(1,2);
   printf(lcd_putc, "%f",d);
   delay_ms(2000);
  
  
  
  
 break;
}
case '2':
{
lcd_putc("Resta: ");
c=0;
while(k!='#')
   {
      k=kbd_getc();
      if(k!=0)
         {
         if(k=='*')
         {
         k='.';
         num[c]=k;
         c++;
         printf(lcd_putc, "%c",k);
         }
          if(k!='#'){ 
           num[c]=k;
            c++;
            printf(lcd_putc, "%c",k);
           }
           else k = '#';
         }
   }
   k=0;
   c=0;
   //lcd_putc("\f");
   lcd_putc(" - ");
while(k!='#')
   {
      k=kbd_getc();
      if(k!=0)
         {
         if(k=='*')
         {
         k='.';
         rep[c]=k;
         c++;
         printf(lcd_putc, "%c",k);
         }
           if(k!='#'){ 
           rep[c]=k;
            c++;
            printf(lcd_putc, "%c",k);
           }
           else k = '#';
         }
   }
   lcd_putc("\f");
   value=strtoul(num,&ptr,10);
   value2 =strtod(rep,&ptr2);
   d = value - value2;
   lcd_putc("La resta es: ");
   lcd_gotoxy(1,2);
   printf(lcd_putc, "%f",d);
   delay_ms(2000);
  
  
  
  
 break;
}
case '3':
{
lcd_putc("Multipli: ");
c=0;
while(k!='#')
   {
      k=kbd_getc();
      if(k!=0)
         {
         if(k=='*')
         {
         k='.';
         num[c]=k;
         c++;
         printf(lcd_putc, "%c",k);
         }
          if(k!='#'){ 
           num[c]=k;
            c++;
            printf(lcd_putc, "%c",k);
           }
           else k = '#';
         }
   }
   k=0;
   c=0;
   //lcd_putc("\f");
   lcd_putc(" * ");
while(k!='#')
   {
      k=kbd_getc();
      if(k!=0)
         {
         if(k=='*')
         {
         k='.';
         rep[c]=k;
         c++;
         printf(lcd_putc, "%c",k);
         }
           if(k!='#'){ 
           rep[c]=k;
            c++;
            printf(lcd_putc, "%c",k);
           }
           else k = '#';
         }
   }
   lcd_putc("\f");
   value=strtoul(num,&ptr,10);
   value2 =strtod(rep,&ptr2);
   d = value * value2;
   lcd_putc("La multi is: ");
   lcd_gotoxy(1,2);
   printf(lcd_putc, "%f",d);
   delay_ms(2000);
  
  
  
  
 break;
}
case '4':
{
lcd_putc("Division: ");
c=0;
while(k!='#')
   {
      k=kbd_getc();
      if(k!=0)
         {
         if(k=='*')
         {
         k='.';
         num[c]=k;
         c++;
         printf(lcd_putc, "%c",k);
         }
          if(k!='#'){ 
           num[c]=k;
            c++;
            printf(lcd_putc, "%c",k);
           }
           else k = '#';
         }
   }
   k=0;
   c=0;
   //lcd_putc("\f");
   lcd_putc(" / ");
while(k!='#')
   {
      k=kbd_getc();
      if(k!=0)
         {
         if(k=='*')
         {
         k='.';
         rep[c]=k;
         c++;
         printf(lcd_putc, "%c",k);
         }
           if(k!='#'){ 
           rep[c]=k;
            c++;
            printf(lcd_putc, "%c",k);
           }
           else k = '#';
         }
   }
   lcd_putc("\f");
   value=strtoul(num,&ptr,10);
   value2 =strtod(rep,&ptr2);
   d = value / value2;
   lcd_putc("La division es: ");
   lcd_gotoxy(1,2);
   printf(lcd_putc, "%f",d);
   delay_ms(2000);
  
  
  
  
 break;
}

default:
break;
}
c=0;k=0;
lcd_gotoxy(1,1);
 lcd_putc("U wanna continue? ");
  lcd_gotoxy(1,2);
 lcd_putc("Yes=1  No=2"); 
 while(c!=1){
value3=kbd_getc();
if (value3 != 0){
   c=1;

}
}
lcd_putc("\f");
if(value3 == '1')
{
lcd_putc("Ok, once again.");
delay_ms(1000);
}
else{
lcd_putc("BYE.");
delay_ms(1000);
z=1;
} 
 
      lcd_putc("\f");
      value = 0;
      value2 =0;
      value3=0;
}
   //printf(lcd_putc,"%s-->",num);
   //convert the string to value
   



   
}

