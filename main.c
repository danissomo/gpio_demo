#include "orangepiwin.h"
#include "gpiomacro.h"

int main(){
	for(int i= 0; i < 40; i++){
		export_pin(pinouts[i]);
		set_direction(pinouts[i], OUTPUT);
		set_pin(pinouts[i], 1);
	}
	getc(stdin);
	for(int i= 0; i < 40; i++)
		unexport_pin(pinouts[i]);
	getc(stdin);
	for(int i= 0; i < 40; i++)
		export_pin(pinouts[i]);
	for(int i= 0; i < 40; i++)
		printf("%d : %d\n",i , read_pin(pinouts[i]));
	
}