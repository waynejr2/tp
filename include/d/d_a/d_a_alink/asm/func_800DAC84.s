/* 800DAC84 000D7BC4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800DAC88 000D7BC8  7C 08 02 A6 */ mflr r0
/* 800DAC8C 000D7BCC  90 01 00 14 */ stw r0, 0x14(r1)
/* 800DAC90 000D7BD0  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800DAC94 000D7BD4  7C 7F 1B 78 */ mr r31, r3
/* 800DAC98 000D7BD8  3C 80 00 02 */ lis r4, 0x00020014@ha
/* 800DAC9C 000D7BDC  38 84 00 14 */ addi r4, r4, 0x00020014@l
/* 800DACA0 000D7BE0  81 83 06 28 */ lwz r12, 0x628(r3)
/* 800DACA4 000D7BE4  81 8C 01 18 */ lwz r12, 0x118(r12)
/* 800DACA8 000D7BE8  7D 89 03 A6 */ mtctr r12
/* 800DACAC 000D7BEC  4E 80 04 21 */ bctrl
/* 800DACB0 000D7BF0  80 1F 05 74 */ lwz r0, 0x574(r31)
/* 800DACB4 000D7BF4  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800DACB8 000D7BF8  40 82 00 20 */ bne lbl_800DACD8
/* 800DACBC 000D7BFC  7F E3 FB 78 */ mr r3, r31
/* 800DACC0 000D7C00  3C 80 00 01 */ lis r4, 0x00010002@ha
/* 800DACC4 000D7C04  38 84 00 02 */ addi r4, r4, 0x00010002@l
/* 800DACC8 000D7C08  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 800DACCC 000D7C0C  81 8C 01 14 */ lwz r12, 0x114(r12)
/* 800DACD0 000D7C10  7D 89 03 A6 */ mtctr r12
/* 800DACD4 000D7C14  4E 80 04 21 */ bctrl
lbl_800DACD8:
/* 800DACD8 000D7C18  A0 1F 1F BC */ lhz r0, 0x1fbc(r31)
/* 800DACDC 000D7C1C  28 00 01 9C */ cmplwi r0, 0x19c
/* 800DACE0 000D7C20  40 82 00 0C */ bne lbl_800DACEC
/* 800DACE4 000D7C24  38 60 00 01 */ li r3, 1
/* 800DACE8 000D7C28  48 00 00 94 */ b lbl_800DAD7C
lbl_800DACEC:
/* 800DACEC 000D7C2C  7F E3 FB 78 */ mr r3, r31
/* 800DACF0 000D7C30  38 80 01 41 */ li r4, 0x141
/* 800DACF4 000D7C34  4B FE 72 79 */ bl daAlink_c_NS_commonProcInit
/* 800DACF8 000D7C38  80 1F 05 74 */ lwz r0, 0x574(r31)
/* 800DACFC 000D7C3C  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800DAD00 000D7C40  41 82 00 4C */ beq lbl_800DAD4C
/* 800DAD04 000D7C44  7F E3 FB 78 */ mr r3, r31
/* 800DAD08 000D7C48  38 80 00 16 */ li r4, 0x16
/* 800DAD0C 000D7C4C  3C A0 80 39 */ lis r5, lbl_8038F3C4@ha
/* 800DAD10 000D7C50  38 A5 F3 C4 */ addi r5, r5, lbl_8038F3C4@l
/* 800DAD14 000D7C54  38 A5 00 14 */ addi r5, r5, 0x14
/* 800DAD18 000D7C58  48 04 EB 31 */ bl daAlink_c_NS_setSingleAnimeWolfParam
/* 800DAD1C 000D7C5C  7F E3 FB 78 */ mr r3, r31
/* 800DAD20 000D7C60  3C 80 00 01 */ lis r4, 0x00010034@ha
/* 800DAD24 000D7C64  38 84 00 34 */ addi r4, r4, 0x00010034@l
/* 800DAD28 000D7C68  81 9F 06 28 */ lwz r12, 0x628(r31)
/* 800DAD2C 000D7C6C  81 8C 01 14 */ lwz r12, 0x114(r12)
/* 800DAD30 000D7C70  7D 89 03 A6 */ mtctr r12
/* 800DAD34 000D7C74  4E 80 04 21 */ bctrl
/* 800DAD38 000D7C78  3C 60 80 39 */ lis r3, lbl_8038F3C4@ha
/* 800DAD3C 000D7C7C  38 63 F3 C4 */ addi r3, r3, lbl_8038F3C4@l
/* 800DAD40 000D7C80  C0 03 00 24 */ lfs f0, 0x24(r3)
/* 800DAD44 000D7C84  D0 1F 34 78 */ stfs f0, 0x3478(r31)
/* 800DAD48 000D7C88  48 00 00 28 */ b lbl_800DAD70
lbl_800DAD4C:
/* 800DAD4C 000D7C8C  7F E3 FB 78 */ mr r3, r31
/* 800DAD50 000D7C90  38 80 00 8B */ li r4, 0x8b
/* 800DAD54 000D7C94  3C A0 80 39 */ lis r5, lbl_8038E54C@ha
/* 800DAD58 000D7C98  38 A5 E5 4C */ addi r5, r5, lbl_8038E54C@l
/* 800DAD5C 000D7C9C  4B FD 23 99 */ bl daAlink_c_NS_setSingleAnimeParam
/* 800DAD60 000D7CA0  3C 60 80 39 */ lis r3, lbl_8038E54C@ha
/* 800DAD64 000D7CA4  38 63 E5 4C */ addi r3, r3, lbl_8038E54C@l
/* 800DAD68 000D7CA8  C0 03 00 10 */ lfs f0, 0x10(r3)
/* 800DAD6C 000D7CAC  D0 1F 34 78 */ stfs f0, 0x3478(r31)
lbl_800DAD70:
/* 800DAD70 000D7CB0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DAD74 000D7CB4  D0 1F 33 98 */ stfs f0, 0x3398(r31)
/* 800DAD78 000D7CB8  38 60 00 01 */ li r3, 1
lbl_800DAD7C:
/* 800DAD7C 000D7CBC  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800DAD80 000D7CC0  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800DAD84 000D7CC4  7C 08 03 A6 */ mtlr r0
/* 800DAD88 000D7CC8  38 21 00 10 */ addi r1, r1, 0x10
/* 800DAD8C 000D7CCC  4E 80 00 20 */ blr