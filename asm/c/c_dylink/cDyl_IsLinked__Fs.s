lbl_80018544:
/* 80018544  7C 60 07 34 */	extsh r0, r3
/* 80018548  54 00 10 3A */	slwi r0, r0, 2
/* 8001854C  3C 60 80 3F */	lis r3, DMC@ha
/* 80018550  38 63 0F 50 */	addi r3, r3, DMC@l
/* 80018554  7C 63 00 2E */	lwzx r3, r3, r0
/* 80018558  28 03 00 00 */	cmplwi r3, 0
/* 8001855C  41 82 00 18 */	beq lbl_80018574
/* 80018560  A0 63 00 00 */	lhz r3, 0(r3)
/* 80018564  30 03 FF FF */	addic r0, r3, -1
/* 80018568  7C 00 19 10 */	subfe r0, r0, r3
/* 8001856C  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80018570  4E 80 00 20 */	blr 
lbl_80018574:
/* 80018574  38 60 00 01 */	li r3, 1
/* 80018578  4E 80 00 20 */	blr 