/* 800E1330 000DE270  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800E1334 000DE274  7C 08 02 A6 */ mflr r0
/* 800E1338 000DE278  90 01 00 14 */ stw r0, 0x14(r1)
/* 800E133C 000DE27C  4B FF FF A5 */ bl daAlink_c_NS_checkLv6BossRoom
/* 800E1340 000DE280  2C 03 00 00 */ cmpwi r3, 0
/* 800E1344 000DE284  41 82 00 14 */ beq lbl_800E1358
/* 800E1348 000DE288  3C 60 80 39 */ lis r3, lbl_8038EAFC@ha
/* 800E134C 000DE28C  38 63 EA FC */ addi r3, r3, lbl_8038EAFC@l
/* 800E1350 000DE290  C0 23 00 34 */ lfs f1, 0x34(r3)
/* 800E1354 000DE294  48 00 00 10 */ b lbl_800E1364
lbl_800E1358:
/* 800E1358 000DE298  3C 60 80 39 */ lis r3, lbl_8038EAFC@ha
/* 800E135C 000DE29C  38 63 EA FC */ addi r3, r3, lbl_8038EAFC@l
/* 800E1360 000DE2A0  C0 23 00 2C */ lfs f1, 0x2c(r3)
lbl_800E1364:
/* 800E1364 000DE2A4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800E1368 000DE2A8  7C 08 03 A6 */ mtlr r0
/* 800E136C 000DE2AC  38 21 00 10 */ addi r1, r1, 0x10
/* 800E1370 000DE2B0  4E 80 00 20 */ blr