lbl_80277B1C:
/* 80277B1C  80 63 00 04 */	lwz r3, 4(r3)
/* 80277B20  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 80277B24  88 64 00 95 */	lbz r3, 0x95(r4)
/* 80277B28  80 C5 00 00 */	lwz r6, 0(r5)
/* 80277B2C  88 06 00 30 */	lbz r0, 0x30(r6)
/* 80277B30  7C 63 00 38 */	and r3, r3, r0
/* 80277B34  A8 04 00 80 */	lha r0, 0x80(r4)
/* 80277B38  7C E0 1A 14 */	add r7, r0, r3
/* 80277B3C  88 66 00 1F */	lbz r3, 0x1f(r6)
/* 80277B40  38 C3 FF FF */	addi r6, r3, -1
/* 80277B44  7C 67 33 D6 */	divw r3, r7, r6
/* 80277B48  7C 03 31 D6 */	mullw r0, r3, r6
/* 80277B4C  7C E0 38 50 */	subf r7, r0, r7
/* 80277B50  80 A5 00 08 */	lwz r5, 8(r5)
/* 80277B54  54 63 07 FE */	clrlwi r3, r3, 0x1f
/* 80277B58  54 E0 08 3C */	slwi r0, r7, 1
/* 80277B5C  7C 00 30 50 */	subf r0, r0, r6
/* 80277B60  7C 03 01 D6 */	mullw r0, r3, r0
/* 80277B64  7C 07 02 14 */	add r0, r7, r0
/* 80277B68  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80277B6C  7C 05 00 AE */	lbzx r0, r5, r0
/* 80277B70  98 04 00 94 */	stb r0, 0x94(r4)
/* 80277B74  4E 80 00 20 */	blr 