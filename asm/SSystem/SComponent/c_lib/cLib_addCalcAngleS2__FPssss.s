lbl_80270608:
/* 80270608  A8 E3 00 00 */	lha r7, 0(r3)
/* 8027060C  7C 07 20 50 */	subf r0, r7, r4
/* 80270610  7C 04 07 34 */	extsh r4, r0
/* 80270614  7C A0 07 34 */	extsh r0, r5
/* 80270618  7C 04 03 D6 */	divw r0, r4, r0
/* 8027061C  7C 04 07 34 */	extsh r4, r0
/* 80270620  7C C0 07 34 */	extsh r0, r6
/* 80270624  7C 04 00 00 */	cmpw r4, r0
/* 80270628  40 81 00 10 */	ble lbl_80270638
/* 8027062C  7C 07 32 14 */	add r0, r7, r6
/* 80270630  B0 03 00 00 */	sth r0, 0(r3)
/* 80270634  4E 80 00 20 */	blr 
lbl_80270638:
/* 80270638  7C 00 00 D0 */	neg r0, r0
/* 8027063C  7C 04 00 00 */	cmpw r4, r0
/* 80270640  40 80 00 10 */	bge lbl_80270650
/* 80270644  7C 06 38 50 */	subf r0, r6, r7
/* 80270648  B0 03 00 00 */	sth r0, 0(r3)
/* 8027064C  4E 80 00 20 */	blr 
lbl_80270650:
/* 80270650  7C 07 22 14 */	add r0, r7, r4
/* 80270654  B0 03 00 00 */	sth r0, 0(r3)
/* 80270658  4E 80 00 20 */	blr 