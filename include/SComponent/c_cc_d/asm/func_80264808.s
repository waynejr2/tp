/* 80264808 00261748  38 00 00 00 */ li r0, 0
/* 8026480C 0026174C  90 04 00 00 */ stw r0, 0(r4)
/* 80264810 00261750  C0 03 00 20 */ lfs f0, 0x20(r3)
/* 80264814 00261754  D0 04 00 04 */ stfs f0, 4(r4)
/* 80264818 00261758  C0 03 00 24 */ lfs f0, 0x24(r3)
/* 8026481C 0026175C  D0 04 00 08 */ stfs f0, 8(r4)
/* 80264820 00261760  C0 03 00 28 */ lfs f0, 0x28(r3)
/* 80264824 00261764  D0 04 00 0C */ stfs f0, 0xc(r4)
/* 80264828 00261768  C0 03 00 2C */ lfs f0, 0x2c(r3)
/* 8026482C 0026176C  D0 04 00 10 */ stfs f0, 0x10(r4)
/* 80264830 00261770  C0 02 B6 20 */ lfs f0, lbl_80455020-_SDA2_BASE_(r2)
/* 80264834 00261774  D0 04 00 14 */ stfs f0, 0x14(r4)
/* 80264838 00261778  4E 80 00 20 */ blr