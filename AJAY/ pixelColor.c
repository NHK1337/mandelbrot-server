#include "pixelColor.h"


unsigned char stepsToRed (int steps) {
	return 255;
}
unsigned char stepsToBlue (int steps) {
	return 256 - steps;
}
unsigned char stepsToGreen (int steps) {
	return 256 - steps;
}
