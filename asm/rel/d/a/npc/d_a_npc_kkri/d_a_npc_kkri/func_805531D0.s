lbl_805531D0:
/* 805531D0  80 83 00 00 */	lwz r4, 0(r3)
/* 805531D4  2C 04 00 00 */	cmpwi r4, 0
/* 805531D8  41 82 00 0C */	beq lbl_805531E4
/* 805531DC  38 04 FF FF */	addi r0, r4, -1
/* 805531E0  90 03 00 00 */	stw r0, 0(r3)
lbl_805531E4:
/* 805531E4  80 63 00 00 */	lwz r3, 0(r3)
/* 805531E8  4E 80 00 20 */	blr 