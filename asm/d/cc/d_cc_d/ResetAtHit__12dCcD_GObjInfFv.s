lbl_80084318:
/* 80084318  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008431C  7C 08 02 A6 */	mflr r0
/* 80084320  90 01 00 14 */	stw r0, 0x14(r1)
/* 80084324  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80084328  7C 7F 1B 78 */	mr r31, r3
/* 8008432C  81 83 00 3C */	lwz r12, 0x3c(r3)
/* 80084330  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80084334  7D 89 03 A6 */	mtctr r12
/* 80084338  4E 80 04 21 */	bctrl 
/* 8008433C  38 00 00 00 */	li r0, 0
/* 80084340  98 1F 00 6C */	stb r0, 0x6c(r31)
/* 80084344  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80084348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008434C  7C 08 03 A6 */	mtlr r0
/* 80084350  38 21 00 10 */	addi r1, r1, 0x10
/* 80084354  4E 80 00 20 */	blr 