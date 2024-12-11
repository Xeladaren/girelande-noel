
const int images_count = 25;

const uint8_t PROGMEM images[25][64][3] = {
	/* 00 BLUE_E     */ {{0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 01 BLUE_L     */ {{0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 02 BLUE_N     */ {{0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 03 BLUE_O     */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x02, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 04 GREEN_A    */ {{0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 05 GREEN_C    */ {{0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 06 GREEN_E    */ {{0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 07 GREEN_I    */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 08 GREEN_R    */ {{0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 09 GREEN_T    */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 10 GREEN_U    */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 11 GREEN_V    */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x29, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 12 LUTIN      */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xA3, 0xFF, 0x0C}, {0xA3, 0xFF, 0x0C}, {0xA3, 0xFF, 0x0C}, {0xA3, 0xFF, 0x0C}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x8E, 0x99, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xA3, 0xFF, 0x0C}, {0xA3, 0xFF, 0x0C}, {0x00, 0x00, 0x00}, {0x8E, 0x99, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xA3, 0xFF, 0x0C}, {0xA3, 0xFF, 0x0C}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x8E, 0x99, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x8E, 0x99, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0xFF, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x8E, 0x99, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 13 PIKA       */ {{0x00, 0x00, 0x00}, {0xFF, 0x6E, 0x00}, {0xFF, 0x6E, 0x00}, {0xFF, 0x6E, 0x00}, {0xFF, 0x9A, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFF, 0x9A, 0x00}, {0xFE, 0xFF, 0x00}, {0xFF, 0x9A, 0x00}, {0xFE, 0xFF, 0x00}, {0xFF, 0x6E, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x9A, 0x00}, {0xFF, 0x9A, 0x00}, {0xFF, 0x9A, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x6E, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x9A, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x9A, 0x00}, {0xFF, 0x9A, 0x00}, {0xFF, 0xFF, 0xFF}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFF, 0xFF, 0xFF}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x9A, 0x00}, {0xFF, 0x9A, 0x00}, {0xFF, 0x9A, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x9A, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x9A, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xC0, 0xC0, 0xC0}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xC0, 0xC0, 0xC0}, {0xC0, 0xC0, 0xC0}, {0x00, 0x00, 0x00}},
	/* 14 PRESENT    */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0xF4, 0xFF}, {0x00, 0xF4, 0xFF}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0xF4, 0xFF}, {0x00, 0xF4, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0xF4, 0xFF}, {0x00, 0xF4, 0xFF}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0xF4, 0xFF}, {0x00, 0xF4, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0xF4, 0xFF}, {0x00, 0xF4, 0xFF}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0xF4, 0xFF}, {0x00, 0xF4, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0xF4, 0xFF}, {0x00, 0xF4, 0xFF}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0xF4, 0xFF}, {0x00, 0xF4, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 15 RED_B      */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 16 RED_P      */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 17 RED_S      */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0xFF, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 18 SNOWMAN    */ {{0x00, 0xC1, 0xFF}, {0x00, 0x00, 0x00}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0xC1, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0x66, 0x00}, {0xFF, 0x66, 0x00}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0xC1, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0xC1, 0xFF}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 19 YELLOW_E   */ {{0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 20 YELLOW_J   */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 21 YELLOW_O   */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 22 YELLOW_U   */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 23 YELLOW_X   */ {{0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
	/* 24 YELLOW_Y   */ {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0xFE, 0xFF, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}}
};

#define BLUE_E     0x00
#define BLUE_L     0x01
#define BLUE_N     0x02
#define BLUE_O     0x03
#define GREEN_A    0x04
#define GREEN_C    0x05
#define GREEN_E    0x06
#define GREEN_I    0x07
#define GREEN_R    0x08
#define GREEN_T    0x09
#define GREEN_U    0x0A
#define GREEN_V    0x0B
#define LUTIN      0x0C
#define PIKA       0x0D
#define PRESENT    0x0E
#define RED_B      0x0F
#define RED_P      0x10
#define RED_S      0x11
#define SNOWMAN    0x12
#define YELLOW_E   0x13
#define YELLOW_J   0x14
#define YELLOW_O   0x15
#define YELLOW_U   0x16
#define YELLOW_X   0x17
#define YELLOW_Y   0x18

#define IMAGE_TO_STR(index)	\
	index == 0x00 ? "BLUE_E" : \
	index == 0x01 ? "BLUE_L" : \
	index == 0x02 ? "BLUE_N" : \
	index == 0x03 ? "BLUE_O" : \
	index == 0x04 ? "GREEN_A" : \
	index == 0x05 ? "GREEN_C" : \
	index == 0x06 ? "GREEN_E" : \
	index == 0x07 ? "GREEN_I" : \
	index == 0x08 ? "GREEN_R" : \
	index == 0x09 ? "GREEN_T" : \
	index == 0x0A ? "GREEN_U" : \
	index == 0x0B ? "GREEN_V" : \
	index == 0x0C ? "LUTIN" : \
	index == 0x0D ? "PIKA" : \
	index == 0x0E ? "PRESENT" : \
	index == 0x0F ? "RED_B" : \
	index == 0x10 ? "RED_P" : \
	index == 0x11 ? "RED_S" : \
	index == 0x12 ? "SNOWMAN" : \
	index == 0x13 ? "YELLOW_E" : \
	index == 0x14 ? "YELLOW_J" : \
	index == 0x15 ? "YELLOW_O" : \
	index == 0x16 ? "YELLOW_U" : \
	index == 0x17 ? "YELLOW_X" : \
	index == 0x18 ? "YELLOW_Y" : \
	"Unknow"