lbl_809807F4:
/* 809807F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809807F8  7C 08 02 A6 */	mflr r0
/* 809807FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80980800  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80980804  3C 60 80 99 */	lis r3, __global_destructor_chain@ha
/* 80980808  3B E3 BA 78 */	addi r31, r3, __global_destructor_chain@l
/* 8098080C  48 00 00 20 */	b lbl_8098082C
lbl_80980810:
/* 80980810  80 05 00 00 */	lwz r0, 0(r5)
/* 80980814  90 1F 00 00 */	stw r0, 0(r31)
/* 80980818  80 65 00 08 */	lwz r3, 8(r5)
/* 8098081C  38 80 FF FF */	li r4, -1
/* 80980820  81 85 00 04 */	lwz r12, 4(r5)
/* 80980824  7D 89 03 A6 */	mtctr r12
/* 80980828  4E 80 04 21 */	bctrl 
lbl_8098082C:
/* 8098082C  80 BF 00 00 */	lwz r5, 0(r31)
/* 80980830  28 05 00 00 */	cmplwi r5, 0
/* 80980834  40 82 FF DC */	bne lbl_80980810
/* 80980838  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8098083C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80980840  7C 08 03 A6 */	mtlr r0
/* 80980844  38 21 00 10 */	addi r1, r1, 0x10
/* 80980848  4E 80 00 20 */	blr 