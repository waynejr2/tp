lbl_80490418:
/* 80490418  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8049041C  7C 08 02 A6 */	mflr r0
/* 80490420  90 01 00 14 */	stw r0, 0x14(r1)
/* 80490424  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80490428  93 C1 00 08 */	stw r30, 8(r1)
/* 8049042C  7C 7F 1B 78 */	mr r31, r3
/* 80490430  80 03 04 A0 */	lwz r0, 0x4a0(r3)
/* 80490434  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80490438  40 82 00 40 */	bne lbl_80490478
/* 8049043C  7F E0 FB 79 */	or. r0, r31, r31
/* 80490440  41 82 00 2C */	beq lbl_8049046C
/* 80490444  7C 1E 03 78 */	mr r30, r0
/* 80490448  4B B8 87 1C */	b __ct__10fopAc_ac_cFv
/* 8049044C  3C 60 80 49 */	lis r3, __vt__12daTag_Push_c@ha
/* 80490450  38 03 09 D4 */	addi r0, r3, __vt__12daTag_Push_c@l
/* 80490454  90 1E 05 70 */	stw r0, 0x570(r30)
/* 80490458  3C 60 80 49 */	lis r3, __vt__18daNpcT_ActorMngr_c@ha
/* 8049045C  38 03 09 C8 */	addi r0, r3, __vt__18daNpcT_ActorMngr_c@l
/* 80490460  90 1E 05 6C */	stw r0, 0x56c(r30)
/* 80490464  38 7E 05 68 */	addi r3, r30, 0x568
/* 80490468  4B CB 52 6C */	b initialize__18daNpcT_ActorMngr_cFv
lbl_8049046C:
/* 8049046C  80 1F 04 A0 */	lwz r0, 0x4a0(r31)
/* 80490470  60 00 00 08 */	ori r0, r0, 8
/* 80490474  90 1F 04 A0 */	stw r0, 0x4a0(r31)
lbl_80490478:
/* 80490478  C0 1F 04 EC */	lfs f0, 0x4ec(r31)
/* 8049047C  3C 60 80 49 */	lis r3, lit_3887@ha
/* 80490480  C0 23 09 4C */	lfs f1, lit_3887@l(r3)
/* 80490484  EC 00 00 72 */	fmuls f0, f0, f1
/* 80490488  D0 1F 04 EC */	stfs f0, 0x4ec(r31)
/* 8049048C  C0 1F 04 F0 */	lfs f0, 0x4f0(r31)
/* 80490490  EC 00 00 72 */	fmuls f0, f0, f1
/* 80490494  D0 1F 04 F0 */	stfs f0, 0x4f0(r31)
/* 80490498  C0 1F 04 EC */	lfs f0, 0x4ec(r31)
/* 8049049C  D0 1F 04 F4 */	stfs f0, 0x4f4(r31)
/* 804904A0  7F E3 FB 78 */	mr r3, r31
/* 804904A4  48 00 02 21 */	bl isDelete__12daTag_Push_cFv
/* 804904A8  2C 03 00 00 */	cmpwi r3, 0
/* 804904AC  41 82 00 0C */	beq lbl_804904B8
/* 804904B0  38 60 00 05 */	li r3, 5
/* 804904B4  48 00 00 08 */	b lbl_804904BC
lbl_804904B8:
/* 804904B8  38 60 00 04 */	li r3, 4
lbl_804904BC:
/* 804904BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804904C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 804904C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804904C8  7C 08 03 A6 */	mtlr r0
/* 804904CC  38 21 00 10 */	addi r1, r1, 0x10
/* 804904D0  4E 80 00 20 */	blr 