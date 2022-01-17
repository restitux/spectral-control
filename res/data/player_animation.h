#pragma once

#include "stdint.h"

#define spritesWidth 128
#define spritesHeight 128
#define spritesFlags BLIT_2BPP
#define player_animationWidth 64
#define player_animationHeight 32
#define player_animationFrameSize 16
#define player_animationFlags BLIT_2BPP
const uint8_t player_animation[512] = { 0x00,0x01,0x40,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x14,0x00,0x00,0x14,0x00,0x00,0x00,0x06,0x90,0x00,0x00,0x1a,0x40,0x00,0x04,0x01,0x69,0x00,0x00,0x69,0x40,0x00,0x00,0x05,0xa4,0x00,0x00,0x06,0x90,0x00,0x1d,0x05,0xa5,0x00,0x00,0x5a,0x50,0x10,0x00,0x16,0xa9,0x00,0x00,0x5a,0xa4,0x00,0x1a,0x5a,0xaa,0x40,0x01,0xaa,0xa4,0x74,0x50,0x6a,0xaa,0x40,0x01,0xaa,0xa9,0x00,0x06,0x47,0xf5,0x00,0x00,0x5f,0xf5,0xa4,0x74,0x5f,0xfd,0x40,0x00,0x77,0x74,0x10,0x06,0x97,0x7d,0x00,0x00,0x7f,0x76,0x90,0x69,0x1f,0xfd,0x00,0x00,0x7f,0xf4,0x74,0x01,0x96,0xbd,0x00,0x00,0x7e,0x96,0x40,0x19,0x07,0xf4,0x00,0x00,0x6a,0xa5,0xa4,0x01,0xa6,0xb7,0x00,0x00,0xde,0xa5,0x00,0x1a,0x5a,0xa9,0x00,0x00,0x5a,0x95,0xd0,0x00,0x69,0xfd,0x00,0x00,0x7f,0xa4,0x00,0x06,0x7f,0xfd,0x00,0x00,0x7a,0xb5,0x90,0x00,0x19,0xfd,0x00,0x00,0x7f,0x90,0x00,0x05,0x7b,0xfd,0x00,0x01,0x7e,0xf7,0x90,0x00,0x1a,0x6f,0x40,0x01,0xbf,0xd0,0x00,0x01,0xfb,0xed,0x00,0x01,0xee,0xe6,0x40,0x00,0x06,0x9f,0x40,0x01,0xff,0xd0,0x00,0x01,0xff,0xef,0x40,0x06,0xb9,0xb5,0x00,0x00,0x05,0x9f,0x50,0x05,0xff,0x90,0x00,0x01,0xef,0xfb,0x40,0x07,0xf9,0x7d,0x00,0x00,0x05,0xa7,0xe4,0x17,0xdf,0x50,0x00,0x01,0xee,0xef,0x90,0x1b,0xe5,0x6f,0x40,0x00,0x05,0x65,0xf9,0x5f,0x76,0x50,0x00,0x05,0x55,0x55,0x50,0x15,0x55,0x55,0x40,0x00,0x15,0x69,0x55,0x55,0x55,0x54,0x00,0x00,0x01,0x40,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x14,0x00,0x00,0x14,0x00,0x00,0x00,0x06,0x90,0x00,0x00,0x1a,0x40,0x00,0x00,0x01,0x69,0x00,0x00,0x69,0x40,0x40,0x00,0x05,0xa4,0x00,0x00,0x06,0x90,0x00,0x04,0x05,0xa5,0x00,0x00,0x5a,0x51,0xd0,0x00,0x16,0xa9,0x00,0x00,0x5a,0xa4,0x00,0x1d,0x1a,0xaa,0x40,0x01,0xaa,0xa6,0x90,0x50,0x6a,0xaa,0x40,0x01,0xaa,0xa9,0x10,0x1a,0x47,0xf5,0x00,0x00,0x5f,0xf6,0x40,0x74,0x5f,0xfd,0x40,0x00,0x77,0x74,0x74,0x06,0x97,0x7d,0x00,0x00,0x7f,0x76,0x40,0x69,0x1f,0xfd,0x00,0x00,0x7f,0xf5,0xa4,0x01,0xa6,0xbd,0x00,0x00,0x7e,0x95,0x00,0x19,0x07,0xf4,0x00,0x00,0x6a,0xa5,0xd4,0x00,0x69,0xb7,0x00,0x00,0xde,0xa4,0x00,0x1a,0x5a,0xa9,0x00,0x00,0x5a,0x95,0x90,0x00,0x1a,0x7d,0x00,0x00,0x7f,0xa4,0x00,0x06,0x7f,0xfd,0x00,0x00,0x7a,0xb7,0x90,0x00,0x06,0x9d,0x00,0x00,0x7f,0x90,0x00,0x05,0x7f,0xfd,0x00,0x00,0x7e,0xf6,0x40,0x00,0x05,0xa7,0x40,0x01,0xef,0xd0,0x00,0x00,0x7f,0xed,0x00,0x00,0x7e,0xbd,0x00,0x00,0x07,0x69,0x40,0x01,0xff,0xd0,0x00,0x01,0xbe,0xfd,0x00,0x01,0xb9,0xb9,0x00,0x00,0x06,0xda,0x50,0x05,0xfe,0x90,0x00,0x01,0xef,0xb9,0x00,0x05,0xe5,0xbe,0x40,0x00,0x06,0xf6,0x90,0x07,0xda,0x54,0x00,0x06,0xef,0xbe,0x40,0x07,0xe5,0x6f,0xd0,0x00,0x15,0x5d,0xa4,0x17,0xd5,0x95,0x00,0x05,0x55,0x55,0x40,0x05,0x55,0x55,0x50,0x00,0x15,0x55,0x54,0x55,0x55,0x55,0x00 };

