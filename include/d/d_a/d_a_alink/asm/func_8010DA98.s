/* 8010DA98 0010A9D8  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8010DA9C 0010A9DC  7C 08 02 A6 */ mflr r0
/* 8010DAA0 0010A9E0  90 01 00 14 */ stw r0, 0x14(r1)
/* 8010DAA4 0010A9E4  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8010DAA8 0010A9E8  7C 7F 1B 78 */ mr r31, r3
/* 8010DAAC 0010A9EC  81 83 06 28 */ lwz r12, 0x628(r3)
/* 8010DAB0 0010A9F0  81 8C 01 98 */ lwz r12, 0x198(r12)
/* 8010DAB4 0010A9F4  7D 89 03 A6 */ mtctr r12
/* 8010DAB8 0010A9F8  4E 80 04 21 */ bctrl
/* 8010DABC 0010A9FC  28 03 00 00 */ cmplwi r3, 0
/* 8010DAC0 0010AA00  41 82 00 24 */ beq lbl_8010DAE4
/* 8010DAC4 0010AA04  80 7F 28 18 */ lwz r3, 0x2818(r31)
/* 8010DAC8 0010AA08  28 03 00 00 */ cmplwi r3, 0
/* 8010DACC 0010AA0C  41 82 00 18 */ beq lbl_8010DAE4
/* 8010DAD0 0010AA10  80 03 0A 64 */ lwz r0, 0xa64(r3)
/* 8010DAD4 0010AA14  28 00 00 00 */ cmplwi r0, 0
/* 8010DAD8 0010AA18  41 82 00 0C */ beq lbl_8010DAE4
/* 8010DADC 0010AA1C  38 60 00 01 */ li r3, 1
/* 8010DAE0 0010AA20  48 00 00 08 */ b lbl_8010DAE8
lbl_8010DAE4:
/* 8010DAE4 0010AA24  38 60 00 00 */ li r3, 0
lbl_8010DAE8:
/* 8010DAE8 0010AA28  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8010DAEC 0010AA2C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8010DAF0 0010AA30  7C 08 03 A6 */ mtlr r0
/* 8010DAF4 0010AA34  38 21 00 10 */ addi r1, r1, 0x10
/* 8010DAF8 0010AA38  4E 80 00 20 */ blr