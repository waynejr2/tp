lbl_8068A10C:
/* 8068A10C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8068A110  7C 08 02 A6 */	mflr r0
/* 8068A114  90 01 00 14 */	stw r0, 0x14(r1)
/* 8068A118  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8068A11C  93 C1 00 08 */	stw r30, 8(r1)
/* 8068A120  7C 7E 1B 79 */	or. r30, r3, r3
/* 8068A124  7C 9F 23 78 */	mr r31, r4
/* 8068A128  41 82 00 38 */	beq lbl_8068A160
/* 8068A12C  3C 80 80 69 */	lis r4, __vt__12dBgS_ObjAcch@ha
/* 8068A130  38 84 A4 74 */	addi r4, r4, __vt__12dBgS_ObjAcch@l
/* 8068A134  90 9E 00 10 */	stw r4, 0x10(r30)
/* 8068A138  38 04 00 0C */	addi r0, r4, 0xc
/* 8068A13C  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8068A140  38 04 00 18 */	addi r0, r4, 0x18
/* 8068A144  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8068A148  38 80 00 00 */	li r4, 0
/* 8068A14C  4B 9E BE 48 */	b __dt__9dBgS_AcchFv
/* 8068A150  7F E0 07 35 */	extsh. r0, r31
/* 8068A154  40 81 00 0C */	ble lbl_8068A160
/* 8068A158  7F C3 F3 78 */	mr r3, r30
/* 8068A15C  4B C4 4B E0 */	b __dl__FPv
lbl_8068A160:
/* 8068A160  7F C3 F3 78 */	mr r3, r30
/* 8068A164  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8068A168  83 C1 00 08 */	lwz r30, 8(r1)
/* 8068A16C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8068A170  7C 08 03 A6 */	mtlr r0
/* 8068A174  38 21 00 10 */	addi r1, r1, 0x10
/* 8068A178  4E 80 00 20 */	blr 