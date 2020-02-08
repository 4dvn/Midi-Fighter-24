#include <Control_Surface.h>

USBMIDI_Interface midi;

// The note numbers corresponding to the buttons in the matrix
const AddressMatrix<4, 8> addresses = {{
  {67, 66, 65, 64}, // Ableton drumrack map
  {63, 62, 61, 60},
  {59, 58, 57, 56},
  {55, 54, 53, 52},  
  {51, 50, 49, 48}, // Ableton drumrack map
  {47, 46, 45, 44},
  {43, 42, 41, 40},
  {39, 38, 37, 36},
}};

NoteButtonMatrix<4, 8> buttonmatrix = {
  {2, 3, 4, 5}, // row pins
  {6, 7, 8, 9, 10, 11, 12, 13},    // column pins
  addresses,    // address matrix
  CHANNEL_1,    // channel and cable number
};

void setup() {
  Control_Surface.begin();
}

void loop() {
  Control_Surface.loop();
}P
