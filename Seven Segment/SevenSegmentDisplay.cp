#line 1 "F:/MicroController Lab/Seven Segment/SevenSegmentDisplay.c"
char array[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x83, 0xF8, 0x80, 0x90};
int i = 0;
void main() {
TRISD = 0x00;
PORTD = 0xff;

while(i < 10){
portd = array[i];
delay_ms(1000);
i = (i+1)%10;
}
}
