/* 8011087C 0010D7BC  38 A0 00 00 */ li r5, 0
/* 80110880 0010D7C0  2C 04 00 00 */ cmpwi r4, 0
/* 80110884 0010D7C4  40 82 00 10 */ bne lbl_80110894
/* 80110888 0010D7C8  80 03 05 78 */ lwz r0, 0x578(r3)
/* 8011088C 0010D7CC  54 00 07 FF */ clrlwi. r0, r0, 0x1f
/* 80110890 0010D7D0  40 82 00 18 */ bne lbl_801108A8
lbl_80110894:
/* 80110894 0010D7D4  2C 04 00 00 */ cmpwi r4, 0
/* 80110898 0010D7D8  41 82 00 14 */ beq lbl_801108AC
/* 8011089C 0010D7DC  A0 03 2F DC */ lhz r0, 0x2fdc(r3)
/* 801108A0 0010D7E0  28 00 00 48 */ cmplwi r0, 0x48
/* 801108A4 0010D7E4  40 82 00 08 */ bne lbl_801108AC
lbl_801108A8:
/* 801108A8 0010D7E8  38 A0 00 01 */ li r5, 1
lbl_801108AC:
/* 801108AC 0010D7EC  7C A3 2B 78 */ mr r3, r5
/* 801108B0 0010D7F0  4E 80 00 20 */ blr