lbl_801451EC:
/* 801451EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801451F0  7C 08 02 A6 */	mflr r0
/* 801451F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801451F8  39 61 00 20 */	addi r11, r1, 0x20
/* 801451FC  48 21 CF DD */	bl _savegpr_28
/* 80145200  7C 7C 1B 78 */	mr r28, r3
/* 80145204  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80145208  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8014520C  85 83 4E 20 */	lwzu r12, 0x4e20(r3)
/* 80145210  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80145214  7D 89 03 A6 */	mtctr r12
/* 80145218  4E 80 04 21 */	bctrl 
/* 8014521C  28 03 00 00 */	cmplwi r3, 0
/* 80145220  41 82 00 A0 */	beq lbl_801452C0
/* 80145224  80 03 00 00 */	lwz r0, 0(r3)
/* 80145228  7C 00 E0 00 */	cmpw r0, r28
/* 8014522C  40 81 00 94 */	ble lbl_801452C0
/* 80145230  80 63 00 04 */	lwz r3, 4(r3)
/* 80145234  57 80 10 3A */	slwi r0, r28, 2
/* 80145238  7C 63 00 2E */	lwzx r3, r3, r0
/* 8014523C  8B A3 00 00 */	lbz r29, 0(r3)
/* 80145240  83 E3 00 04 */	lwz r31, 4(r3)
/* 80145244  3B 80 00 00 */	li r28, 0
/* 80145248  3C 60 80 3F */	lis r3, mStatus__20dStage_roomControl_c@ha
/* 8014524C  3B C3 60 94 */	addi r30, r3, mStatus__20dStage_roomControl_c@l
/* 80145250  48 00 00 68 */	b lbl_801452B8
lbl_80145254:
/* 80145254  88 1F 00 00 */	lbz r0, 0(r31)
/* 80145258  54 00 06 BE */	clrlwi r0, r0, 0x1a
/* 8014525C  1C 00 04 04 */	mulli r0, r0, 0x404
/* 80145260  7C 9E 02 14 */	add r4, r30, r0
/* 80145264  88 64 03 F4 */	lbz r3, 0x3f4(r4)
/* 80145268  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 8014526C  41 82 00 0C */	beq lbl_80145278
/* 80145270  38 60 00 00 */	li r3, 0
/* 80145274  48 00 00 50 */	b lbl_801452C4
lbl_80145278:
/* 80145278  70 60 00 09 */	andi. r0, r3, 9
/* 8014527C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80145280  28 00 00 01 */	cmplwi r0, 1
/* 80145284  40 82 00 2C */	bne lbl_801452B0
/* 80145288  80 64 03 FC */	lwz r3, 0x3fc(r4)
/* 8014528C  4B ED 9A 25 */	bl fopScnM_SearchByID__FUi
/* 80145290  88 03 01 D4 */	lbz r0, 0x1d4(r3)
/* 80145294  7C 00 07 75 */	extsb. r0, r0
/* 80145298  40 80 00 10 */	bge lbl_801452A8
/* 8014529C  4B ED D3 C1 */	bl fpcNd_IsDeleteTiming__FP18process_node_class
/* 801452A0  2C 03 00 00 */	cmpwi r3, 0
/* 801452A4  40 82 00 0C */	bne lbl_801452B0
lbl_801452A8:
/* 801452A8  38 60 00 00 */	li r3, 0
/* 801452AC  48 00 00 18 */	b lbl_801452C4
lbl_801452B0:
/* 801452B0  3B 9C 00 01 */	addi r28, r28, 1
/* 801452B4  3B FF 00 01 */	addi r31, r31, 1
lbl_801452B8:
/* 801452B8  7C 1C E8 00 */	cmpw r28, r29
/* 801452BC  41 80 FF 98 */	blt lbl_80145254
lbl_801452C0:
/* 801452C0  38 60 00 01 */	li r3, 1
lbl_801452C4:
/* 801452C4  39 61 00 20 */	addi r11, r1, 0x20
/* 801452C8  48 21 CF 5D */	bl _restgpr_28
/* 801452CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801452D0  7C 08 03 A6 */	mtlr r0
/* 801452D4  38 21 00 20 */	addi r1, r1, 0x20
/* 801452D8  4E 80 00 20 */	blr 