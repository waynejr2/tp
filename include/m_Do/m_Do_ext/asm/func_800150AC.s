/* 800150AC 00011FEC  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 800150B0 00011FF0  7C 08 02 A6 */ mflr r0
/* 800150B4 00011FF4  90 01 00 34 */ stw r0, 0x34(r1)
/* 800150B8 00011FF8  93 E1 00 2C */ stw r31, 0x2c(r1)
/* 800150BC 00011FFC  93 C1 00 28 */ stw r30, 0x28(r1)
/* 800150C0 00012000  7C 7E 1B 78 */ mr r30, r3
/* 800150C4 00012004  81 83 00 00 */ lwz r12, 0(r3)
/* 800150C8 00012008  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 800150CC 0001200C  7D 89 03 A6 */ mtctr r12
/* 800150D0 00012010  4E 80 04 21 */ bctrl
/* 800150D4 00012014  28 03 00 00 */ cmplwi r3, 0
/* 800150D8 00012018  41 82 00 40 */ beq lbl_80015118
/* 800150DC 0001201C  80 6D 90 74 */ lwz r3, lbl_804515F4-_SDA_BASE_(r13)
/* 800150E0 00012020  A3 E3 00 14 */ lhz r31, 0x14(r3)
/* 800150E4 00012024  7F C3 F3 78 */ mr r3, r30
/* 800150E8 00012028  81 9E 00 00 */ lwz r12, 0(r30)
/* 800150EC 0001202C  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 800150F0 00012030  7D 89 03 A6 */ mtctr r12
/* 800150F4 00012034  4E 80 04 21 */ bctrl
/* 800150F8 00012038  7F E4 FB 78 */ mr r4, r31
/* 800150FC 0001203C  38 A1 00 08 */ addi r5, r1, 8
/* 80015100 00012040  81 83 00 00 */ lwz r12, 0(r3)
/* 80015104 00012044  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 80015108 00012048  7D 89 03 A6 */ mtctr r12
/* 8001510C 0001204C  4E 80 04 21 */ bctrl
/* 80015110 00012050  38 61 00 08 */ addi r3, r1, 8
/* 80015114 00012054  48 00 00 0C */ b lbl_80015120
lbl_80015118:
/* 80015118 00012058  80 6D 90 74 */ lwz r3, lbl_804515F4-_SDA_BASE_(r13)
/* 8001511C 0001205C  38 63 00 18 */ addi r3, r3, 0x18
lbl_80015120:
/* 80015120 00012060  48 31 9E 9D */ bl J3DMtxCalcCalcTransformMaya_NS_calcTransform
/* 80015124 00012064  83 E1 00 2C */ lwz r31, 0x2c(r1)
/* 80015128 00012068  83 C1 00 28 */ lwz r30, 0x28(r1)
/* 8001512C 0001206C  80 01 00 34 */ lwz r0, 0x34(r1)
/* 80015130 00012070  7C 08 03 A6 */ mtlr r0
/* 80015134 00012074  38 21 00 30 */ addi r1, r1, 0x30
/* 80015138 00012078  4E 80 00 20 */ blr