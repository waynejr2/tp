lbl_800D13E4:
/* 800D13E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D13E8  7C 08 02 A6 */	mflr r0
/* 800D13EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D13F0  80 63 31 80 */	lwz r3, 0x3180(r3)
/* 800D13F4  48 29 3C DD */	bl abs
/* 800D13F8  3C 80 00 01 */	lis r4, 0x0001 /* 0x0000F800@ha */
/* 800D13FC  38 04 F8 00 */	addi r0, r4, 0xF800 /* 0x0000F800@l */
/* 800D1400  7C 60 02 78 */	xor r0, r3, r0
/* 800D1404  7C 04 0E 70 */	srawi r4, r0, 1
/* 800D1408  7C 00 18 38 */	and r0, r0, r3
/* 800D140C  7C 00 20 50 */	subf r0, r0, r4
/* 800D1410  54 03 0F FE */	srwi r3, r0, 0x1f
/* 800D1414  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D1418  7C 08 03 A6 */	mtlr r0
/* 800D141C  38 21 00 10 */	addi r1, r1, 0x10
/* 800D1420  4E 80 00 20 */	blr 