lbl_80784144:
/* 80784144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80784148  7C 08 02 A6 */	mflr r0
/* 8078414C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80784150  C0 03 04 D0 */	lfs f0, 0x4d0(r3)
/* 80784154  D0 03 05 38 */	stfs f0, 0x538(r3)
/* 80784158  C0 03 04 D8 */	lfs f0, 0x4d8(r3)
/* 8078415C  D0 03 05 40 */	stfs f0, 0x540(r3)
/* 80784160  C0 03 04 D4 */	lfs f0, 0x4d4(r3)
/* 80784164  D0 03 05 3C */	stfs f0, 0x53c(r3)
/* 80784168  C0 03 05 3C */	lfs f0, 0x53c(r3)
/* 8078416C  3C 80 80 78 */	lis r4, lit_4682@ha
/* 80784170  C0 24 4E 58 */	lfs f1, lit_4682@l(r4)
/* 80784174  EC 00 08 2A */	fadds f0, f0, f1
/* 80784178  D0 03 05 3C */	stfs f0, 0x53c(r3)
/* 8078417C  C0 03 05 3C */	lfs f0, 0x53c(r3)
/* 80784180  D0 03 05 54 */	stfs f0, 0x554(r3)
/* 80784184  C0 03 05 54 */	lfs f0, 0x554(r3)
/* 80784188  EC 00 08 2A */	fadds f0, f0, f1
/* 8078418C  D0 03 05 54 */	stfs f0, 0x554(r3)
/* 80784190  C0 03 04 D0 */	lfs f0, 0x4d0(r3)
/* 80784194  D0 03 05 50 */	stfs f0, 0x550(r3)
/* 80784198  C0 03 04 D8 */	lfs f0, 0x4d8(r3)
/* 8078419C  D0 03 05 58 */	stfs f0, 0x558(r3)
/* 807841A0  3C 80 80 78 */	lis r4, data_80784FCC@ha
/* 807841A4  38 84 4F CC */	addi r4, r4, data_80784FCC@l
/* 807841A8  80 84 00 00 */	lwz r4, 0(r4)
/* 807841AC  38 63 04 D0 */	addi r3, r3, 0x4d0
/* 807841B0  4B AE CA 54 */	b cLib_targetAngleY__FPC3VecPC3Vec
/* 807841B4  3C 80 80 78 */	lis r4, data_80784FC8@ha
/* 807841B8  B0 64 4F C8 */	sth r3, data_80784FC8@l(r4)
/* 807841BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807841C0  7C 08 03 A6 */	mtlr r0
/* 807841C4  38 21 00 10 */	addi r1, r1, 0x10
/* 807841C8  4E 80 00 20 */	blr 