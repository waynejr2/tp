lbl_803227EC:
/* 803227EC  80 A5 00 00 */	lwz r5, 0(r5)
/* 803227F0  54 84 10 3A */	slwi r4, r4, 2
/* 803227F4  38 04 00 0A */	addi r0, r4, 0xa
/* 803227F8  7C A3 01 2E */	stwx r5, r3, r0
/* 803227FC  4E 80 00 20 */	blr 