lbl_80084954:
/* 80084954  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80084958  7C 08 02 A6 */	mflr r0
/* 8008495C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80084960  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80084964  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80084968  7C 7E 1B 78 */	mr r30, r3
/* 8008496C  7C 9F 23 78 */	mr r31, r4
/* 80084970  38 BE 01 24 */	addi r5, r30, 0x124
/* 80084974  38 61 00 08 */	addi r3, r1, 8
/* 80084978  48 1E 21 BD */	bl __mi__4cXyzCFRC3Vec
/* 8008497C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80084980  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80084984  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80084988  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8008498C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80084990  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80084994  D0 5E 00 84 */	stfs f2, 0x84(r30)
/* 80084998  D0 3E 00 88 */	stfs f1, 0x88(r30)
/* 8008499C  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 800849A0  38 7E 01 24 */	addi r3, r30, 0x124
/* 800849A4  7F E4 FB 78 */	mr r4, r31
/* 800849A8  48 1E A8 35 */	bl SetC__8cM3dGCylFRC4cXyz
/* 800849AC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 800849B0  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 800849B4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800849B8  7C 08 03 A6 */	mtlr r0
/* 800849BC  38 21 00 30 */	addi r1, r1, 0x30
/* 800849C0  4E 80 00 20 */	blr 