#include "wasm4.h"
#include "../res/map/new_tiles.set.h"
#include <stdbool.h>

const uint32_t map[] = {2684354609, 220, 221, 222, 223, 220, 221, 222, 223, 220, 221, 222, 223, 3221225521, 35, 52, 35, 2684354609, 223, 3221225521, 192, 236, 237, 238, 239, 236, 237, 238, 95, 96, 237, 238, 239, 187, 37, 181, 38, 192, 239, 187, 208, 252, 253, 254, 255, 252, 253, 254, 111, 112, 253, 254, 255, 203, 53, 181, 54, 208, 255, 203, 192, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 219, 8, 8, 8, 224, 159, 187, 208, 39, 39, 39, 39, 179, 2147483827, 39, 39, 39, 39, 39, 39, 235, 8, 8, 8, 240, 159, 203, 192, 39, 39, 99, 100, 195, 2147483843, 39, 40, 39, 3221225496, 1610612760, 39, 251, 8, 8, 8, 256, 159, 187, 208, 39, 39, 115, 116, 39, 39, 55, 56, 39, 2684354584, 24, 39, 39, 50, 39, 34, 39, 39, 203, 192, 39, 39, 39, 39, 39, 39, 5, 39, 39, 39, 39, 39, 39, 39, 51, 35, 36, 39, 187, 208, 39, 139, 140, 39, 39, 39, 1073741829, 39, 39, 71, 72, 73, 74, 93, 94, 39, 39, 39, 203, 192, 39, 155, 156, 39, 99, 100, 39, 39, 39, 87, 88, 89, 90, 109, 110, 39, 39, 39, 187, 208, 39, 39, 39, 39, 115, 116, 39, 39, 39, 103, 104, 105, 106, 107, 108, 39, 39, 39, 203, 192, 39, 39, 39, 40, 39, 39, 39, 39, 39, 119, 120, 121, 122, 123, 124, 39, 39, 39, 187, 208, 39, 39, 55, 56, 39, 39, 39, 39, 39, 39, 33, 24, 24, 33, 39, 39, 39, 39, 203, 192, 39, 39, 39, 39, 39, 99, 100, 39, 39, 39, 33, 24, 24, 33, 39, 39, 39, 39, 187, 208, 39, 39, 39, 39, 39, 115, 116, 39, 39, 135, 33, 24, 24, 33, 39, 139, 140, 39, 203, 192, 39, 39, 39, 39, 39, 39, 39, 39, 135, 135, 33, 24, 24, 33, 39, 155, 156, 39, 187, 208, 39, 99, 100, 39, 39, 39, 139, 140, 135, 39, 33, 33, 33, 33, 39, 39, 39, 39, 203, 192, 39, 115, 116, 39, 39, 39, 155, 156, 39, 39, 39, 39, 115, 116, 39, 39, 39, 39, 187, 208, 39, 39, 39, 39, 39, 49, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 203, 49, 172, 173, 174, 175, 49, 49, 174, 175, 172, 173, 174, 175, 172, 173, 174, 175, 172, 173, 1610612785};

const uint8_t tilemap[] = TILESET_tiles;
const uint32_t tilesize = TILESIZE_tiles;


int tile_byte(int id) {
    return id * 16;
}

void draw_tile(uint8_t id, uint32_t x, uint32_t y) {
    int byte = tile_byte(id);

    blit(tilemap + tile_byte(id), x * 8, y * 8, 8, 8, BLIT_2BPP);
}

void draw_map() {
    for (int i = 0; i < 400; i++) {
        uint32_t tile = map[i];

        uint32_t tile_id = (tile & 0xFF) - 1;
        uint32_t rotations = ((tile & (0xF << 28)) >> 28);
        
        uint32_t flags = BLIT_2BPP;

        bool flipx = rotations & 0b1000;
        bool flipy = rotations & 0b0100;

        if (flipx) {
            flags |= BLIT_FLIP_X;
        }
        if (flipy) {
            flags |= BLIT_FLIP_Y;
        }
        if (rotations & 0b0010) {
            flags |= BLIT_ROTATE;

            if (flipx) {
                // flags &= ~BLIT_FLIP_X; 
            } else {
                // flags |= BLIT_FLIP_X;
            }
            if (flipy) {
                flags &= ~BLIT_FLIP_Y;
            } else {
                flags |= BLIT_FLIP_Y;
            }
        }

        int x = i % 20;
        int y = i / 20;

        int byte = tile_byte(tile_id);

        blit(tilemap + byte, x * 8, y * 8, 8, 8, flags);
    }
}