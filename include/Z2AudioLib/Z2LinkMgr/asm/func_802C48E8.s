/* 802C48E8 002C1828  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802C48EC 002C182C  7C 08 02 A6 */ mflr r0
/* 802C48F0 002C1830  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C48F4 002C1834  93 E1 00 0C */ stw r31, 0xc(r1)
/* 802C48F8 002C1838  7C 7F 1B 78 */ mr r31, r3
/* 802C48FC 002C183C  38 80 00 00 */ li r4, 0
/* 802C4900 002C1840  4B FE 62 95 */ bl Z2SoundStarter_NS_ctor
/* 802C4904 002C1844  3C 60 80 3D */ lis r3, lbl_803CB96C@ha
/* 802C4908 002C1848  38 03 B9 6C */ addi r0, r3, lbl_803CB96C@l
/* 802C490C 002C184C  90 1F 00 00 */ stw r0, 0(r31)
/* 802C4910 002C1850  7F E3 FB 78 */ mr r3, r31
/* 802C4914 002C1854  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 802C4918 002C1858  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802C491C 002C185C  7C 08 03 A6 */ mtlr r0
/* 802C4920 002C1860  38 21 00 10 */ addi r1, r1, 0x10
/* 802C4924 002C1864  4E 80 00 20 */ blr