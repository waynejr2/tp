lbl_80995144:
/* 80995144  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80995148  7C 08 02 A6 */	mflr r0
/* 8099514C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80995150  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80995154  F3 E1 00 58 */	psq_st f31, 88(r1), 0, 0 /* qr0 */
/* 80995158  39 61 00 50 */	addi r11, r1, 0x50
/* 8099515C  4B 9C D0 7C */	b _savegpr_28
/* 80995160  7C 7F 1B 78 */	mr r31, r3
/* 80995164  7C 80 23 78 */	mr r0, r4
/* 80995168  7C BC 2B 78 */	mr r28, r5
/* 8099516C  7C DD 33 78 */	mr r29, r6
/* 80995170  FF E0 08 90 */	fmr f31, f1
/* 80995174  7C FE 3B 78 */	mr r30, r7
/* 80995178  38 A0 00 00 */	li r5, 0
/* 8099517C  80 83 00 20 */	lwz r4, 0x20(r3)
/* 80995180  28 04 00 00 */	cmplwi r4, 0
/* 80995184  41 82 00 44 */	beq lbl_809951C8
/* 80995188  38 61 00 08 */	addi r3, r1, 8
/* 8099518C  7C 05 03 78 */	mr r5, r0
/* 80995190  4B 8D 19 A4 */	b __mi__4cXyzCFRC3Vec
/* 80995194  C0 21 00 08 */	lfs f1, 8(r1)
/* 80995198  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8099519C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 809951A0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 809951A4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 809951A8  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 809951AC  4B 8D 24 C8 */	b cM_atan2s__Fff
/* 809951B0  7C BC 18 50 */	subf r5, r28, r3
/* 809951B4  A8 1F 01 52 */	lha r0, 0x152(r31)
/* 809951B8  7C 1C 00 50 */	subf r0, r28, r0
/* 809951BC  7C 00 07 34 */	extsh r0, r0
/* 809951C0  7C A0 28 50 */	subf r5, r0, r5
/* 809951C4  7C A5 F2 14 */	add r5, r5, r30
lbl_809951C8:
/* 809951C8  2C 1D 00 00 */	cmpwi r29, 0
/* 809951CC  41 82 00 0C */	beq lbl_809951D8
/* 809951D0  7C 05 00 D0 */	neg r0, r5
/* 809951D4  7C 05 07 34 */	extsh r5, r0
lbl_809951D8:
/* 809951D8  3C 60 80 99 */	lis r3, lit_4490@ha
/* 809951DC  C0 63 59 34 */	lfs f3, lit_4490@l(r3)
/* 809951E0  EC 83 F8 24 */	fdivs f4, f3, f31
/* 809951E4  A8 1F 01 34 */	lha r0, 0x134(r31)
/* 809951E8  3C 60 80 99 */	lis r3, lit_4846@ha
/* 809951EC  C8 43 59 48 */	lfd f2, lit_4846@l(r3)
/* 809951F0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 809951F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 809951F8  3C 60 43 30 */	lis r3, 0x4330
/* 809951FC  90 61 00 20 */	stw r3, 0x20(r1)
/* 80995200  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80995204  EC 20 10 28 */	fsubs f1, f0, f2
/* 80995208  EC 03 20 28 */	fsubs f0, f3, f4
/* 8099520C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80995210  7C A0 07 34 */	extsh r0, r5
/* 80995214  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80995218  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8099521C  90 61 00 28 */	stw r3, 0x28(r1)
/* 80995220  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80995224  EC 00 10 28 */	fsubs f0, f0, f2
/* 80995228  EC 00 01 32 */	fmuls f0, f0, f4
/* 8099522C  EC 01 00 2A */	fadds f0, f1, f0
/* 80995230  FC 00 00 1E */	fctiwz f0, f0
/* 80995234  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80995238  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8099523C  B0 1F 01 2E */	sth r0, 0x12e(r31)
/* 80995240  E3 E1 00 58 */	psq_l f31, 88(r1), 0, 0 /* qr0 */
/* 80995244  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80995248  39 61 00 50 */	addi r11, r1, 0x50
/* 8099524C  4B 9C CF D8 */	b _restgpr_28
/* 80995250  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80995254  7C 08 03 A6 */	mtlr r0
/* 80995258  38 21 00 60 */	addi r1, r1, 0x60
/* 8099525C  4E 80 00 20 */	blr 