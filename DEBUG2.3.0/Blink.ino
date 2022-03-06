#include "Arduino.h"
#include "gdb.h"
extern "C" {
#include "ets_sys.h"

}

//#include "user_interface.h"
//The setup function is called once at startup of the sketch
void RAMFUNC setup() {

//	uart_div_modify(0, UART_CLK_FREQ / 115200);
	Serial.begin(115200);
	gdbstub_init();

}

int count = 1;
int aaa = 1000;
// The loop function is called in an endless loop
void RAMFUNC loop() {
	count++;
	delay(10);
	delay(10);
	aaa++;
}

