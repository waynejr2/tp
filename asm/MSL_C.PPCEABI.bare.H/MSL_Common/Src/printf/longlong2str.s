lbl_80367D1C:
/* 80367D1C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80367D20  7C 08 02 A6 */	mflr r0
/* 80367D24  90 01 00 34 */	stw r0, 0x34(r1)
/* 80367D28  38 00 00 00 */	li r0, 0
/* 80367D2C  BE C1 00 08 */	stmw r22, 8(r1)
/* 80367D30  7C B7 2B 78 */	mr r23, r5
/* 80367D34  7C 85 02 78 */	xor r5, r4, r0
/* 80367D38  7C D8 33 78 */	mr r24, r6
/* 80367D3C  7C 9E 23 78 */	mr r30, r4
/* 80367D40  7C 7F 1B 78 */	mr r31, r3
/* 80367D44  3B 77 FF FF */	addi r27, r23, -1
/* 80367D48  3B 20 00 00 */	li r25, 0
/* 80367D4C  3B 40 00 00 */	li r26, 0
/* 80367D50  98 17 FF FF */	stb r0, -1(r23)
/* 80367D54  7C 60 02 78 */	xor r0, r3, r0
/* 80367D58  7C A0 03 79 */	or. r0, r5, r0
/* 80367D5C  40 82 00 30 */	bne lbl_80367D8C
/* 80367D60  80 18 00 0C */	lwz r0, 0xc(r24)
/* 80367D64  2C 00 00 00 */	cmpwi r0, 0
/* 80367D68  40 82 00 24 */	bne lbl_80367D8C
/* 80367D6C  88 18 00 03 */	lbz r0, 3(r24)
/* 80367D70  28 00 00 00 */	cmplwi r0, 0
/* 80367D74  41 82 00 10 */	beq lbl_80367D84
/* 80367D78  88 18 00 05 */	lbz r0, 5(r24)
/* 80367D7C  28 00 00 6F */	cmplwi r0, 0x6f
/* 80367D80  41 82 00 0C */	beq lbl_80367D8C
lbl_80367D84:
/* 80367D84  7F 63 DB 78 */	mr r3, r27
/* 80367D88  48 00 02 94 */	b lbl_8036801C
lbl_80367D8C:
/* 80367D8C  88 B8 00 05 */	lbz r5, 5(r24)
/* 80367D90  38 05 FF A8 */	addi r0, r5, -88
/* 80367D94  28 00 00 20 */	cmplwi r0, 0x20
/* 80367D98  41 81 00 8C */	bgt lbl_80367E24
/* 80367D9C  3C A0 80 3D */	lis r5, lit_1248@ha
/* 80367DA0  54 00 10 3A */	slwi r0, r0, 2
/* 80367DA4  38 A5 2F 18 */	addi r5, r5, lit_1248@l
/* 80367DA8  7C 05 00 2E */	lwzx r0, r5, r0
/* 80367DAC  7C 09 03 A6 */	mtctr r0
/* 80367DB0  4E 80 04 20 */	bctr 
/* 80367DB4  38 00 00 00 */	li r0, 0
/* 80367DB8  6C 65 80 00 */	xoris r5, r3, 0x8000
/* 80367DBC  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 80367DC0  3B 80 00 0A */	li r28, 0xa
/* 80367DC4  7C 00 20 10 */	subfc r0, r0, r4
/* 80367DC8  3B A0 00 00 */	li r29, 0
/* 80367DCC  7C 63 29 10 */	subfe r3, r3, r5
/* 80367DD0  7C 65 29 10 */	subfe r3, r5, r5
/* 80367DD4  7C 63 00 D1 */	neg. r3, r3
/* 80367DD8  41 82 00 4C */	beq lbl_80367E24
/* 80367DDC  23 DE 00 00 */	subfic r30, r30, 0
/* 80367DE0  3B 20 00 01 */	li r25, 1
/* 80367DE4  7F FF 01 90 */	subfze r31, r31
/* 80367DE8  48 00 00 3C */	b lbl_80367E24
/* 80367DEC  38 00 00 00 */	li r0, 0
/* 80367DF0  3B 80 00 08 */	li r28, 8
/* 80367DF4  98 18 00 01 */	stb r0, 1(r24)
/* 80367DF8  3B A0 00 00 */	li r29, 0
/* 80367DFC  48 00 00 28 */	b lbl_80367E24
/* 80367E00  38 00 00 00 */	li r0, 0
/* 80367E04  3B 80 00 0A */	li r28, 0xa
/* 80367E08  98 18 00 01 */	stb r0, 1(r24)
/* 80367E0C  3B A0 00 00 */	li r29, 0
/* 80367E10  48 00 00 14 */	b lbl_80367E24
/* 80367E14  38 00 00 00 */	li r0, 0
/* 80367E18  3B 80 00 10 */	li r28, 0x10
/* 80367E1C  98 18 00 01 */	stb r0, 1(r24)
/* 80367E20  3B A0 00 00 */	li r29, 0
lbl_80367E24:
/* 80367E24  7F E3 FB 78 */	mr r3, r31
/* 80367E28  7F C4 F3 78 */	mr r4, r30
/* 80367E2C  7F A5 EB 78 */	mr r5, r29
/* 80367E30  7F 86 E3 78 */	mr r6, r28
/* 80367E34  4B FF A6 29 */	bl __mod2u
/* 80367E38  7C 96 23 78 */	mr r22, r4
/* 80367E3C  7F E3 FB 78 */	mr r3, r31
/* 80367E40  7F C4 F3 78 */	mr r4, r30
/* 80367E44  7F A5 EB 78 */	mr r5, r29
/* 80367E48  7F 86 E3 78 */	mr r6, r28
/* 80367E4C  4B FF A3 ED */	bl __div2u
/* 80367E50  2C 16 00 0A */	cmpwi r22, 0xa
/* 80367E54  7C 9E 23 78 */	mr r30, r4
/* 80367E58  7C 7F 1B 78 */	mr r31, r3
/* 80367E5C  40 80 00 0C */	bge lbl_80367E68
/* 80367E60  38 16 00 30 */	addi r0, r22, 0x30
/* 80367E64  48 00 00 1C */	b lbl_80367E80
lbl_80367E68:
/* 80367E68  88 18 00 05 */	lbz r0, 5(r24)
/* 80367E6C  28 00 00 78 */	cmplwi r0, 0x78
/* 80367E70  40 82 00 0C */	bne lbl_80367E7C
/* 80367E74  38 16 00 57 */	addi r0, r22, 0x57
/* 80367E78  48 00 00 08 */	b lbl_80367E80
lbl_80367E7C:
/* 80367E7C  38 16 00 37 */	addi r0, r22, 0x37
lbl_80367E80:
/* 80367E80  38 80 00 00 */	li r4, 0
/* 80367E84  9C 1B FF FF */	stbu r0, -1(r27)
/* 80367E88  7F C3 22 78 */	xor r3, r30, r4
/* 80367E8C  3B 5A 00 01 */	addi r26, r26, 1
/* 80367E90  7F E0 22 78 */	xor r0, r31, r4
/* 80367E94  7C 60 03 79 */	or. r0, r3, r0
/* 80367E98  40 82 FF 8C */	bne lbl_80367E24
/* 80367E9C  38 60 00 08 */	li r3, 8
/* 80367EA0  7F A0 22 78 */	xor r0, r29, r4
/* 80367EA4  7F 83 1A 78 */	xor r3, r28, r3
/* 80367EA8  7C 60 03 79 */	or. r0, r3, r0
/* 80367EAC  40 82 00 28 */	bne lbl_80367ED4
/* 80367EB0  88 18 00 03 */	lbz r0, 3(r24)
/* 80367EB4  28 00 00 00 */	cmplwi r0, 0
/* 80367EB8  41 82 00 1C */	beq lbl_80367ED4
/* 80367EBC  88 1B 00 00 */	lbz r0, 0(r27)
/* 80367EC0  2C 00 00 30 */	cmpwi r0, 0x30
/* 80367EC4  41 82 00 10 */	beq lbl_80367ED4
/* 80367EC8  38 00 00 30 */	li r0, 0x30
/* 80367ECC  3B 5A 00 01 */	addi r26, r26, 1
/* 80367ED0  9C 1B FF FF */	stbu r0, -1(r27)
lbl_80367ED4:
/* 80367ED4  88 18 00 00 */	lbz r0, 0(r24)
/* 80367ED8  28 00 00 02 */	cmplwi r0, 2
/* 80367EDC  40 82 00 5C */	bne lbl_80367F38
/* 80367EE0  80 18 00 08 */	lwz r0, 8(r24)
/* 80367EE4  2C 19 00 00 */	cmpwi r25, 0
/* 80367EE8  90 18 00 0C */	stw r0, 0xc(r24)
/* 80367EEC  40 82 00 10 */	bne lbl_80367EFC
/* 80367EF0  88 18 00 01 */	lbz r0, 1(r24)
/* 80367EF4  28 00 00 00 */	cmplwi r0, 0
/* 80367EF8  41 82 00 10 */	beq lbl_80367F08
lbl_80367EFC:
/* 80367EFC  80 78 00 0C */	lwz r3, 0xc(r24)
/* 80367F00  38 03 FF FF */	addi r0, r3, -1
/* 80367F04  90 18 00 0C */	stw r0, 0xc(r24)
lbl_80367F08:
/* 80367F08  38 60 00 10 */	li r3, 0x10
/* 80367F0C  38 00 00 00 */	li r0, 0
/* 80367F10  7F 83 1A 78 */	xor r3, r28, r3
/* 80367F14  7F A0 02 78 */	xor r0, r29, r0
/* 80367F18  7C 60 03 79 */	or. r0, r3, r0
/* 80367F1C  40 82 00 1C */	bne lbl_80367F38
/* 80367F20  88 18 00 03 */	lbz r0, 3(r24)
/* 80367F24  28 00 00 00 */	cmplwi r0, 0
/* 80367F28  41 82 00 10 */	beq lbl_80367F38
/* 80367F2C  80 78 00 0C */	lwz r3, 0xc(r24)
/* 80367F30  38 03 FF FE */	addi r0, r3, -2
/* 80367F34  90 18 00 0C */	stw r0, 0xc(r24)
lbl_80367F38:
/* 80367F38  80 78 00 0C */	lwz r3, 0xc(r24)
/* 80367F3C  7C 1B B8 50 */	subf r0, r27, r23
/* 80367F40  7C 03 02 14 */	add r0, r3, r0
/* 80367F44  2C 00 01 FD */	cmpwi r0, 0x1fd
/* 80367F48  40 81 00 0C */	ble lbl_80367F54
/* 80367F4C  38 60 00 00 */	li r3, 0
/* 80367F50  48 00 00 CC */	b lbl_8036801C
lbl_80367F54:
/* 80367F54  7C 1A 18 00 */	cmpw r26, r3
/* 80367F58  7C 7A 18 50 */	subf r3, r26, r3
/* 80367F5C  38 80 00 30 */	li r4, 0x30
/* 80367F60  40 80 00 48 */	bge lbl_80367FA8
/* 80367F64  54 60 E8 FF */	rlwinm. r0, r3, 0x1d, 3, 0x1f
/* 80367F68  7C 09 03 A6 */	mtctr r0
/* 80367F6C  41 82 00 30 */	beq lbl_80367F9C
lbl_80367F70:
/* 80367F70  98 9B FF FF */	stb r4, -1(r27)
/* 80367F74  98 9B FF FE */	stb r4, -2(r27)
/* 80367F78  98 9B FF FD */	stb r4, -3(r27)
/* 80367F7C  98 9B FF FC */	stb r4, -4(r27)
/* 80367F80  98 9B FF FB */	stb r4, -5(r27)
/* 80367F84  98 9B FF FA */	stb r4, -6(r27)
/* 80367F88  98 9B FF F9 */	stb r4, -7(r27)
/* 80367F8C  9C 9B FF F8 */	stbu r4, -8(r27)
/* 80367F90  42 00 FF E0 */	bdnz lbl_80367F70
/* 80367F94  70 63 00 07 */	andi. r3, r3, 7
/* 80367F98  41 82 00 10 */	beq lbl_80367FA8
lbl_80367F9C:
/* 80367F9C  7C 69 03 A6 */	mtctr r3
lbl_80367FA0:
/* 80367FA0  9C 9B FF FF */	stbu r4, -1(r27)
/* 80367FA4  42 00 FF FC */	bdnz lbl_80367FA0
lbl_80367FA8:
/* 80367FA8  38 60 00 10 */	li r3, 0x10
/* 80367FAC  38 00 00 00 */	li r0, 0
/* 80367FB0  7F 83 1A 78 */	xor r3, r28, r3
/* 80367FB4  7F A0 02 78 */	xor r0, r29, r0
/* 80367FB8  7C 60 03 79 */	or. r0, r3, r0
/* 80367FBC  40 82 00 20 */	bne lbl_80367FDC
/* 80367FC0  88 18 00 03 */	lbz r0, 3(r24)
/* 80367FC4  28 00 00 00 */	cmplwi r0, 0
/* 80367FC8  41 82 00 14 */	beq lbl_80367FDC
/* 80367FCC  88 78 00 05 */	lbz r3, 5(r24)
/* 80367FD0  38 00 00 30 */	li r0, 0x30
/* 80367FD4  98 7B FF FF */	stb r3, -1(r27)
/* 80367FD8  9C 1B FF FE */	stbu r0, -2(r27)
lbl_80367FDC:
/* 80367FDC  2C 19 00 00 */	cmpwi r25, 0
/* 80367FE0  41 82 00 10 */	beq lbl_80367FF0
/* 80367FE4  38 00 00 2D */	li r0, 0x2d
/* 80367FE8  9C 1B FF FF */	stbu r0, -1(r27)
/* 80367FEC  48 00 00 2C */	b lbl_80368018
lbl_80367FF0:
/* 80367FF0  88 18 00 01 */	lbz r0, 1(r24)
/* 80367FF4  28 00 00 01 */	cmplwi r0, 1
/* 80367FF8  40 82 00 10 */	bne lbl_80368008
/* 80367FFC  38 00 00 2B */	li r0, 0x2b
/* 80368000  9C 1B FF FF */	stbu r0, -1(r27)
/* 80368004  48 00 00 14 */	b lbl_80368018
lbl_80368008:
/* 80368008  28 00 00 02 */	cmplwi r0, 2
/* 8036800C  40 82 00 0C */	bne lbl_80368018
/* 80368010  38 00 00 20 */	li r0, 0x20
/* 80368014  9C 1B FF FF */	stbu r0, -1(r27)
lbl_80368018:
/* 80368018  7F 63 DB 78 */	mr r3, r27
lbl_8036801C:
/* 8036801C  BA C1 00 08 */	lmw r22, 8(r1)
/* 80368020  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80368024  7C 08 03 A6 */	mtlr r0
/* 80368028  38 21 00 30 */	addi r1, r1, 0x30
/* 8036802C  4E 80 00 20 */	blr 