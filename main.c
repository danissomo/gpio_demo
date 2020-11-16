#include "orangepiwin.h"
#include "gpiomacro.h"

int main(){
	for(int i= 0; i < 40; i++){
		export_pin(pinouts[i]);
		set_direction(pinouts[i], OUTPUT);
		set_pin(pinouts[i], 1);
	}
}