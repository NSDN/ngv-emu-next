#ifndef __TIME_H_
#define __TIME_H_


#include <stdint.h>

long millis();


#define LPAD_UP     0x0001
#define LPAD_DOWN   0x0002
#define LPAD_LEFT   0x0004
#define LPAD_RIGHT  0x0008
#define RPAD_UP     0x0010
#define RPAD_DOWN   0x0020
#define RPAD_LEFT   0x0040
#define RPAD_RIGHT  0x0080

#define KEY_F1      0x0100
#define KEY_F2      0x0200
#define KEY_F3      0x0400
#define KEY_F4      0x0800
#define KEY_F5      0x1000
#define KEY_F6      0x2000
#define KEY_F7      0x4000
#define KEY_F8      0x8000

bool checkKey(uint16_t key);
bool checkKeyUp(uint16_t key);
bool waitKey(uint16_t key);
bool waitKeyUp(uint16_t key);


#endif