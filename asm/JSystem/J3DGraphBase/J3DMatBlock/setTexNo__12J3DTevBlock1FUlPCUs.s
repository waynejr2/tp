lbl_803227B4:
/* 803227B4  A0 A5 00 00 */	lhz r5, 0(r5)
/* 803227B8  54 80 08 3C */	slwi r0, r4, 1
/* 803227BC  7C 63 02 14 */	add r3, r3, r0
/* 803227C0  B0 A3 00 08 */	sth r5, 8(r3)
/* 803227C4  4E 80 00 20 */	blr 