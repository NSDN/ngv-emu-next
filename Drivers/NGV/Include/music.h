#ifndef __MUISC_H_
#define __MUSIC_H_


#include "halinc.h"

typedef struct {
	uint16_t length;
	uint8_t* data;
} Music;

Music* getMusic(uint8_t index);


#endif
