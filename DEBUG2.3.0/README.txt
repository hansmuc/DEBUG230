https://github.com/espressif/esp-gdbstub

wrong  gdb.h from arduino

copy jantje/gdb to private lib path
   -and include in project
   
   
#include "Arduino.h"
#include "gdb.h"
extern "C" {
#include "ets_sys.h"   <-- for uart_div_modify(0, UART_CLK_FREQ / 115200);

}
*******************

#include "gdb.h"
extern "C" {
#include "ets_sys.h"

}

//#include "user_interface.h"
//The setup function is called once at startup of the sketch
void RAMFUNC setup() {

//	uart_div_modify(0, UART_CLK_FREQ / 115200);
    Serial.begin(115200);   <-------------------------
	gdbstub_init();

}

// The loop function is called in an endless loop
void RAMFUNC loop() {
	delay(10);
	delay(10);
}
*********************************************


RESET Mcu before start debugger  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

remote target com5


check no breakpoints in base libs  !!!!!!!!!!!!!!!!!!!!!!!
