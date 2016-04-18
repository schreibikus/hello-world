#include "mmpf_typedef.h"
#include "mmpf_ldc.h"

MMP_USHORT m_usPositionX_FHD[LDC_X_POS_ARRAY_SIZE] = 
{
	0x0000, 
	0x0028, 
	0x0058, 
	0x0088, 
	0x00b8, 
	0x00e8, 
	0x0118, 
	0x0148, 
	0x0170, 
	0x01a0, 
	0x01d0, 
	0x0200, 
	0x0230, 
	0x0260, 
	0x0288, 
	0x02b8, 
	0x02e8, 
	0x0318, 
	0x0348, 
	0x0378, 
	0x03a8, 
	0x03d0, 
	0x0400, 
	0x0430, 
	0x0460, 
	0x0490, 
	0x04c0, 
	0x04f0, 
	0x0518, 
	0x0548, 
	0x0578, 
	0x05a8, 
	0x05d8, 
	0x0608, 
	0x0630, 
	0x0660, 
	0x0690, 
	0x06c0, 
	0x06f0, 
	0x0720, 
	0x0750, 
	0x0780, 
};

MMP_USHORT m_usPositionY_FHD[LDC_Y_POS_ARRAY_SIZE] = 
{
	0x0000, 
	0x0020, 
	0x0040, 
	0x0068, 
	0x0088, 
	0x00a8, 
	0x00d0, 
	0x00f0, 
	0x0118, 
	0x0138, 
	0x0158, 
	0x0180, 
	0x01a0, 
	0x01c8, 
	0x01e8, 
	0x0208, 
	0x0230, 
	0x0250, 
	0x0270, 
	0x0298, 
	0x02b8, 
	0x02e0, 
	0x0300, 
	0x0320, 
	0x0348, 
	0x0368, 
	0x0390, 
	0x03b0, 
	0x03d0, 
	0x03f8, 
	0x0418, 
	0x0440, 
};

MMP_ULONG m_ulDeltaMemA_000_127_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0x0651074f,
	0x040c06c9,
	0x01f8063b,
	0x005105b6,
	0xff2f0544,
	0xfe5b04d4,
	0xfdf20474,
	0xfdeb042a,
	0xfe3b03ed,
	0xfedc03c5,
	0xffc403b4,
	0x00a103b8,
	0x017003d3,
	0x01f10404,
	0x021c0443,
	0x01ef049a,
	0x015a0501,
	0x0073056d,
	0xff0c05ec,
	0xfd380675,
	0xfaf70705,
	0x05e50642,
	0x03a105c9,
	0x01910549,
	0xffef04cf,
	0xfed30468,
	0xfe090402,
	0xfdac03a9,
	0xfdb10366,
	0xfe11032e,
	0xfec40309,
	0xffbf02fa,
	0x00ad02fe,
	0x018f0316,
	0x02220343,
	0x025b037d,
	0x023a03cc,
	0x01b0042b,
	0x00d1048c,
	0xff710501,
	0xfda0057d,
	0xfb620600,
	0x05790528,
	0x033704be,
	0x0129044e,
	0xff8c03e4,
	0xfe770389,
	0xfdb60330,
	0xfd6402e2,
	0xfd7702a7,
	0xfde70275,
	0xfeac0255,
	0xffba0247,
	0x00ba024b,
	0x01af0260,
	0x02530288,
	0x029a02bb,
	0x02870301,
	0x02080354,
	0x013003a9,
	0xffd6040f,
	0xfe09047c,
	0xfbcd04ee,
	0x051d0421,
	0x02db03c8,
	0x00d00369,
	0xff370310,
	0xfe2702c3,
	0xfd6e0277,
	0xfd270235,
	0xfd440203,
	0xfdc301d9,
	0xfe9701be,
	0xffb601b2,
	0x00c601b5,
	0x01cb01c8,
	0x027d01e9,
	0x02d00214,
	0x02c90250,
	0x02530296,
	0x018102de,
	0x002d0334,
	0xfe640390,
	0xfc2903f0,
	0x04d1032a,
	0x029002e2,
	0x00870297,
	0xfef1024f,
	0xfde60212,
	0xfd3301d5,
	0xfcf401a0,
	0xfd1b0178,
	0xfda40156,
	0xfe860140,
	0xffb20137,
	0x00cf0139,
	0x01e20148,
	0x02a00163,
	0x02fe0186,
	0x02ff01b5,
	0x029101ee,
	0x01c50228,
	0x0074026d,
	0xfeae02b6,
	0xfc750303,
	0x049c0259,
	0x025c0222,
	0x005301e9,
	0xfec001b2,
	0xfdb80183,
	0xfd0a0154,
	0xfcd0012c,
	0xfcfd010d,
	0xfd8f00f3,
	0xfe7a00e2,
	0xffb000db,
	0x00d600dd,
	0x01f200e8,
	0x02b900fd,
	0x031d0117,
	0x0326013c,
	0x02bc0167,
	0x01f40194,
	0x00a601c8,
	0xfee20201,
	0xfcaa023b,
	0x04720177,
	0x02320155,
};

MMP_ULONG m_ulDeltaMemA_128_255_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0x002b0130,
	0xfe99010d,
	0xfd9300ee,
	0xfce900d1,
	0xfcb400b7,
	0xfce600a3,
	0xfd7e0092,
	0xfe700087,
	0xffae0082,
	0x00db0084,
	0x01ff008b,
	0x02cd0098,
	0x033700a9,
	0x034400c1,
	0x02df00dd,
	0x021900f9,
	0x00ce011b,
	0xff0b013f,
	0xfcd40164,
	0x045b009c,
	0x021b008e,
	0x0014007e,
	0xfe83006f,
	0xfd7f0063,
	0xfcd60056,
	0xfca4004b,
	0xfcd90043,
	0xfd75003b,
	0xfe6b0037,
	0xffad0035,
	0x00de0035,
	0x02060038,
	0x02d8003e,
	0x03450045,
	0x0355004f,
	0x02f2005b,
	0x022e0067,
	0x00e40075,
	0xff220084,
	0xfceb0094,
	0x0456ffc4,
	0x0216ffca,
	0x0010ffd0,
	0xfe7fffd5,
	0xfd7bffda,
	0xfcd3ffdf,
	0xfca1ffe3,
	0xfcd6ffe7,
	0xfd73ffe9,
	0xfe6affeb,
	0xffacffec,
	0x00deffec,
	0x0207ffea,
	0x02daffe8,
	0x0347ffe5,
	0x0358ffe2,
	0x02f6ffdd,
	0x0232ffd8,
	0x00e8ffd3,
	0xff26ffcd,
	0xfcefffc7,
	0x0463ff03,
	0x0223ff1b,
	0x001cff34,
	0xfe8bff4c,
	0xfd86ff60,
	0xfcddff74,
	0xfcaaff86,
	0xfcddff94,
	0xfd78ff9f,
	0xfe6cffa6,
	0xffadffaa,
	0x00ddffa9,
	0x0203ffa4,
	0x02d4ff9b,
	0x0340ff8f,
	0x034fff7f,
	0x02ecff6c,
	0x0227ff59,
	0x00ddff42,
	0xff1aff29,
	0xfce3ff10,
	0x0482fe25,
	0x0242fe51,
	0x003afe7f,
	0xfea8feab,
	0xfda1fed1,
	0xfcf6fef6,
	0xfcbfff17,
	0xfcefff30,
	0xfd85ff44,
	0xfe74ff52,
	0xffaeff58,
	0x00d9ff56,
	0x01faff4d,
	0x02c5ff3d,
	0x032dff27,
	0x0338ff0a,
	0x02d1fee7,
	0x020bfec4,
	0x00bffe99,
	0xfefbfe6c,
	0xfcc3fe3d,
	0x04b5fd40,
	0x0274fd7f,
	0x006bfdc1,
	0xfed7fe01,
	0xfdcdfe37,
	0xfd1dfe6d,
	0xfce1fe9c,
	0xfd0bfebf,
	0xfd99fedd,
	0xfe7ffef1,
	0xffb1fef9,
	0x00d3fef7,
	0x01eafeea,
	0x02aefed2,
	0x030ffeb3,
	0x0314fe89,
	0x02a8fe57,
	0x01defe24,
	0x008ffde7,
	0xfecafda6,
	0xfc91fd62,
	0x04f9fc4f,
	0x02b8fca0,
	0x00adfcf6,
	0xff16fd48,
};

MMP_ULONG m_ulDeltaMemA_256_335_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfe08fd8e,
	0xfd52fdd3,
	0xfd0ffe10,
	0xfd31fe3d,
	0xfdb4fe64,
	0xfe8ffe7d,
	0xffb4fe88,
	0x00cafe85,
	0x01d6fe74,
	0x028efe55,
	0x02e6fe2e,
	0x02e3fdf8,
	0x0270fdb7,
	0x01a1fd75,
	0x004efd27,
	0xfe87fcd3,
	0xfc4dfc7b,
	0x054efb4f,
	0x030cfbb2,
	0x0100fc1a,
	0xff65fc7d,
	0xfe52fcd2,
	0xfd95fd25,
	0xfd48fd6e,
	0xfd5ffda5,
	0xfdd6fdd3,
	0xfea3fdf1,
	0xffb8fdff,
	0x00c0fdfb,
	0x01bcfde7,
	0x0266fdc2,
	0x02b3fd92,
	0x02a6fd51,
	0x022afd04,
	0x0156fcb4,
	0xfffefc55,
	0xfe33fbef,
	0xfbf8fb85,
	0x05a7fa5d,
	0x0364face,
	0x0155fb45,
	0xffb6fbb7,
	0xfe9efc17,
	0xfdd9fc76,
	0xfd83fcc9,
	0xfd90fd08,
	0xfdf9fd3c,
	0xfeb7fd5f,
	0xffbcfd6d,
	0x00b5fd6a,
	0x01a2fd53,
	0x023efd29,
	0x027ffcf3,
	0x0266fca8,
	0x01e2fc50,
	0x0107fbf5,
	0xffaafb88,
	0xfdddfb14,
	0xfba0fa9b,
	0x0619f93a,
	0x03d5f9ba,
	0x01c3fa41,
	0x001ffac0,
	0xff00fb2d,
	0xfe31fb98,
	0xfdcefbf5,
	0xfdcdfc3b,
	0xfe26fc76,
	0xfed0fc9c,
	0xffc1fcad,
	0x00a7fca9,
	0x0180fc8f,
	0x020afc60,
	0x023cfc23,
	0x0216fbd0,
	0x0186fb6d,
	0x00a3fb06,
	0xff40fa8c,
	0xfd6dfa09,
	0xfb2ef980,
};

MMP_ULONG m_ulDeltaMemB_000_127_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0x053e0711,
	0x02f40681,
	0x011705f8,
	0xffa70577,
	0xfeb7050b,
	0xfe1904a2,
	0xfde4044a,
	0xfe080409,
	0xfe8203d6,
	0xff4c03b9,
	0x002803b3,
	0x011303c3,
	0x01ba03e9,
	0x02120424,
	0x0212046c,
	0x01b204cc,
	0x00e7053b,
	0xffcd05ab,
	0xfe300630,
	0xfc2506bd,
	0xf9b6074d,
	0x04d3060b,
	0x028b0588,
	0x00b2050b,
	0xff480496,
	0xfe600433,
	0xfdcd03d4,
	0xfda40383,
	0xfdd60348,
	0xfe610319,
	0xff3d02ff,
	0x002c02f9,
	0x01290307,
	0x01e3032a,
	0x024a0361,
	0x025703a3,
	0x020303fa,
	0x0142045f,
	0x002f04c5,
	0xfe96053e,
	0xfc8f05be,
	0xfa220641,
	0x046704f8,
	0x02220485,
	0x004c0418,
	0xfee903b2,
	0xfe08035b,
	0xfd800307,
	0xfd6402c0,
	0xfda4028c,
	0xfe400263,
	0xff2f024c,
	0x002f0247,
	0x01400253,
	0x020b0272,
	0x028302a2,
	0x029d02dc,
	0x02550329,
	0x019e0381,
	0x009103db,
	0xfefe0445,
	0xfcf904b5,
	0xfa8e0527,
	0x040b03f8,
	0x01c80398,
	0xfff5033c,
	0xfe9702e5,
	0xfdbc029c,
	0xfd3d0255,
	0xfd2c0219,
	0xfd7801ed,
	0xfe2301ca,
	0xff2201b6,
	0x003201b2,
	0x015401bc,
	0x022f01d6,
	0x02b501ff,
	0x02da0230,
	0x029c0271,
	0x01ed02bc,
	0x00e60308,
	0xff570362,
	0xfd5503c0,
	0xfaea0420,
	0x03bf0309,
	0x017d02bc,
	0xffad0273,
	0xfe53022d,
	0xfd7e01f3,
	0xfd0501ba,
	0xfcfe0189,
	0xfd540166,
	0xfe0b014a,
	0xff17013a,
	0x00340136,
	0x0164013f,
	0x024c0154,
	0x02de0175,
	0x030c019c,
	0x02d601d0,
	0x022e020d,
	0x012b024a,
	0xffa00291,
	0xfda002dc,
	0xfb360329,
	0x038b0240,
	0x01490205,
	0xff7b01cd,
	0xfe240198,
	0xfd52016b,
	0xfcdf013f,
	0xfcde011a,
	0xfd3a00ff,
	0xfdfa00e9,
	0xff1000dd,
	0x003600db,
	0x016f00e1,
	0x026000f1,
	0x02fa010a,
	0x032f0129,
	0x02ff0151,
	0x025b017f,
	0x015c01ae,
	0xffd301e4,
	0xfdd4021e,
	0xfb6b0258,
	0x03610168,
	0x01200142,
};

MMP_ULONG m_ulDeltaMemB_128_255_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0xff53011e,
	0xfdfe00fc,
	0xfd2f00df,
	0xfcc000c3,
	0xfcc400ab,
	0xfd26009a,
	0xfded008c,
	0xff0a0084,
	0x00370082,
	0x01780087,
	0x02710091,
	0x031100a1,
	0x034b00b5,
	0x032000ce,
	0x028000ec,
	0x0183010a,
	0xfffb012d,
	0xfdfe0151,
	0xfb950177,
	0x03490096,
	0x01090086,
	0xff3d0077,
	0xfde90068,
	0xfd1b005c,
	0xfcaf0050,
	0xfcb60046,
	0xfd1b003f,
	0xfde50039,
	0xff070036,
	0x00380035,
	0x017d0037,
	0x027a003b,
	0x031e0042,
	0x035b004a,
	0x03320055,
	0x02940061,
	0x0198006e,
	0x0012007d,
	0xfe15008c,
	0xfbac009c,
	0x0345ffc7,
	0x0104ffcd,
	0xff39ffd3,
	0xfde5ffd8,
	0xfd18ffdd,
	0xfcabffe1,
	0xfcb3ffe5,
	0xfd19ffe8,
	0xfde4ffea,
	0xff06ffec,
	0x0038ffec,
	0x017effeb,
	0x027cffe9,
	0x0320ffe7,
	0x035effe4,
	0x0336ffdf,
	0x0298ffdb,
	0x019cffd6,
	0x0016ffd0,
	0xfe19ffca,
	0xfbb1ffc4,
	0x0351ff0e,
	0x0111ff27,
	0xff44ff40,
	0xfdf0ff57,
	0xfd22ff6a,
	0xfcb5ff7e,
	0xfcbaff8e,
	0xfd1fff9a,
	0xfde8ffa3,
	0xff08ffa8,
	0x0037ffaa,
	0x017cffa7,
	0x0277ffa0,
	0x031aff95,
	0x0356ff87,
	0x032cff76,
	0x028dff62,
	0x0191ff4d,
	0x000aff36,
	0xfe0dff1d,
	0xfba4ff03,
	0x0371fe39,
	0x0130fe68,
	0xff63fe96,
	0xfe0cfec0,
	0xfd3dfee4,
	0xfcccff07,
	0xfcceff25,
	0xfd2eff3b,
	0xfdf2ff4c,
	0xff0cff56,
	0x0036ff58,
	0x0175ff53,
	0x026aff46,
	0x0308ff32,
	0x0340ff19,
	0x0313fef9,
	0x0272fed4,
	0x0174feaf,
	0xffecfe83,
	0xfdedfe55,
	0xfb85fe26,
	0x03a3fd5d,
	0x0161fda0,
	0xff92fde2,
	0xfe3afe1f,
	0xfd66fe53,
	0xfcf1fe85,
	0xfcedfeb0,
	0xfd46fecf,
	0xfe02fee8,
	0xff13fef6,
	0x0035fef9,
	0x016afef2,
	0x0257fedf,
	0x02edfec2,
	0x031ffe9f,
	0x02ecfe71,
	0x0246fe3c,
	0x0145fe06,
	0xffbbfdc7,
	0xfdbcfd84,
	0xfb52fd41,
	0x03e7fc74,
	0x01a4fccc,
	0xffd3fd20,
	0xfe77fd6f,
};

MMP_ULONG m_ulDeltaMemB_256_335_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfd9ffdb2,
	0xfd23fdf3,
	0xfd16fe2a,
	0xfd67fe52,
	0xfe18fe72,
	0xff1dfe84,
	0x0033fe88,
	0x015bfe7e,
	0x023cfe66,
	0x02c8fe41,
	0x02f2fe14,
	0x02b8fdd9,
	0x020bfd94,
	0x0106fd4f,
	0xff79fcfd,
	0xfd78fca7,
	0xfb0efc50,
	0x043cfb7c,
	0x01f8fbe6,
	0x0024fc4c,
	0xfec3fcac,
	0xfde5fcfd,
	0xfd60fd4b,
	0xfd4afd8d,
	0xfd8ffdbe,
	0xfe33fde4,
	0xff29fdfa,
	0x0030fdff,
	0x0149fdf3,
	0x021cfdd6,
	0x029afdaa,
	0x02bafd73,
	0x0276fd2c,
	0x01c2fcd9,
	0x00b8fc85,
	0xff27fc23,
	0xfd24fbbb,
	0xfab9fb50,
	0x0495fa91,
	0x024ffb0a,
	0x0078fb7f,
	0xff12fbec,
	0xfe2efc48,
	0xfda1fca1,
	0xfd7ffced,
	0xfdb9fd24,
	0xfe4efd50,
	0xff35fd68,
	0x002dfd6e,
	0x0136fd61,
	0x01fafd40,
	0x026bfd0d,
	0x027ffccf,
	0x0232fc7e,
	0x0176fc1f,
	0x0067fbc0,
	0xfed2fb4f,
	0xfcccfad8,
	0xfa60fa5e,
	0x0507f974,
	0x02bff9fe,
	0x00e3fa81,
	0xff77fafc,
	0xfe8bfb64,
	0xfdf2fbc8,
	0xfdc3fc1d,
	0xfdeefc5b,
	0xfe72fc8c,
	0xff44fca7,
	0x002afcad,
	0x011efc9e,
	0x01cffc7a,
	0x022ffc41,
	0x0235fbfc,
	0x01dbfba0,
	0x0116fb36,
	0xfffffaca,
	0xfe64fa4b,
	0xfc5bf9c5,
	0xf9eef93b,
};

MMP_ULONG m_ulDeltaMemC_000_127_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0x061906c6,
	0x03d50646,
	0x01c305bf,
	0x001f0540,
	0xff0004d3,
	0xfe310468,
	0xfdce040b,
	0xfdcd03c5,
	0xfe26038a,
	0xfed00364,
	0xffc10353,
	0x00a70357,
	0x01800371,
	0x020a03a0,
	0x023c03dd,
	0x02160430,
	0x01860493,
	0x00a304fa,
	0xff400574,
	0xfd6d05f7,
	0xfb2e0680,
	0x05a705a3,
	0x03640532,
	0x015504bb,
	0xffb60449,
	0xfe9e03e9,
	0xfdd9038a,
	0xfd830337,
	0xfd9002f8,
	0xfdf902c4,
	0xfeb702a1,
	0xffbc0293,
	0x00b50296,
	0x01a202ad,
	0x023e02d7,
	0x027f030d,
	0x02660358,
	0x01e203b0,
	0x0107040b,
	0xffaa0478,
	0xfddd04ec,
	0xfba00565,
	0x054e04b1,
	0x030c044e,
	0x010003e6,
	0xff650383,
	0xfe52032e,
	0xfd9502db,
	0xfd480292,
	0xfd5f025b,
	0xfdd6022d,
	0xfea3020f,
	0xffb80201,
	0x00c00205,
	0x01bc0219,
	0x0266023e,
	0x02b3026e,
	0x02a602af,
	0x022a02fc,
	0x0156034c,
	0xfffe03ab,
	0xfe330411,
	0xfbf8047b,
	0x04f903b1,
	0x02b80360,
	0x00ad030a,
	0xff1602b8,
	0xfe080272,
	0xfd52022d,
	0xfd0f01f0,
	0xfd3101c3,
	0xfdb4019c,
	0xfe8f0183,
	0xffb40178,
	0x00ca017b,
	0x01d6018c,
	0x028e01ab,
	0x02e601d2,
	0x02e30208,
	0x02700249,
	0x01a1028b,
	0x004e02d9,
	0xfe87032d,
	0xfc4d0385,
	0x04b502c0,
	0x02740281,
	0x006b023f,
	0xfed701ff,
	0xfdcd01c9,
	0xfd1d0193,
	0xfce10164,
	0xfd0b0141,
	0xfd990123,
	0xfe7f010f,
	0xffb10107,
	0x00d30109,
	0x01ea0116,
	0x02ae012e,
	0x030f014d,
	0x03140177,
	0x02a801a9,
	0x01de01dc,
	0x008f0219,
	0xfeca025a,
	0xfc91029e,
	0x048201db,
	0x024201af,
	0x003a0181,
	0xfea80155,
	0xfda1012f,
	0xfcf6010a,
	0xfcbf00e9,
	0xfcef00d0,
	0xfd8500bc,
	0xfe7400ae,
	0xffae00a8,
	0x00d900aa,
	0x01fa00b3,
	0x02c500c3,
	0x032d00d9,
	0x033800f6,
	0x02d10119,
	0x020b013c,
	0x00bf0167,
	0xfefb0194,
	0xfcc301c3,
	0x046300fd,
	0x022300e5,
};

MMP_ULONG m_ulDeltaMemC_128_255_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0x001c00cc,
	0xfe8b00b4,
	0xfd8600a0,
	0xfcdd008c,
	0xfcaa007a,
	0xfcdd006c,
	0xfd780061,
	0xfe6c005a,
	0xffad0056,
	0x00dd0057,
	0x0203005c,
	0x02d40065,
	0x03400071,
	0x034f0081,
	0x02ec0094,
	0x022700a7,
	0x00dd00be,
	0xff1a00d7,
	0xfce300f0,
	0x0456003c,
	0x02160036,
	0x00100030,
	0xfe7f002b,
	0xfd7b0026,
	0xfcd30021,
	0xfca1001d,
	0xfcd60019,
	0xfd730017,
	0xfe6a0015,
	0xffac0014,
	0x00de0014,
	0x02070016,
	0x02da0018,
	0x0347001b,
	0x0358001e,
	0x02f60023,
	0x02320028,
	0x00e8002d,
	0xff260033,
	0xfcef0039,
	0x045bff64,
	0x021bff72,
	0x0014ff82,
	0xfe83ff91,
	0xfd7fff9d,
	0xfcd6ffaa,
	0xfca4ffb5,
	0xfcd9ffbd,
	0xfd75ffc5,
	0xfe6bffc9,
	0xffadffcb,
	0x00deffcb,
	0x0206ffc8,
	0x02d8ffc2,
	0x0345ffbb,
	0x0355ffb1,
	0x02f2ffa5,
	0x022eff99,
	0x00e4ff8b,
	0xff22ff7c,
	0xfcebff6c,
	0x0472fe89,
	0x0232feab,
	0x002bfed0,
	0xfe99fef3,
	0xfd93ff12,
	0xfce9ff2f,
	0xfcb4ff49,
	0xfce6ff5d,
	0xfd7eff6e,
	0xfe70ff79,
	0xffaeff7e,
	0x00dbff7c,
	0x01ffff75,
	0x02cdff68,
	0x0337ff57,
	0x0344ff3f,
	0x02dfff23,
	0x0219ff07,
	0x00cefee5,
	0xff0bfec1,
	0xfcd4fe9c,
	0x049cfda7,
	0x025cfdde,
	0x0053fe17,
	0xfec0fe4e,
	0xfdb8fe7d,
	0xfd0afeac,
	0xfcd0fed4,
	0xfcfdfef3,
	0xfd8fff0d,
	0xfe7aff1e,
	0xffb0ff25,
	0x00d6ff23,
	0x01f2ff18,
	0x02b9ff03,
	0x031dfee9,
	0x0326fec4,
	0x02bcfe99,
	0x01f4fe6c,
	0x00a6fe38,
	0xfee2fdff,
	0xfcaafdc5,
	0x04d1fcd6,
	0x0290fd1e,
	0x0087fd69,
	0xfef1fdb1,
	0xfde6fdee,
	0xfd33fe2b,
	0xfcf4fe60,
	0xfd1bfe88,
	0xfda4feaa,
	0xfe86fec0,
	0xffb2fec9,
	0x00cffec7,
	0x01e2feb8,
	0x02a0fe9d,
	0x02fefe7a,
	0x02fffe4b,
	0x0291fe12,
	0x01c5fdd8,
	0x0074fd93,
	0xfeaefd4a,
	0xfc75fcfd,
	0x051dfbdf,
	0x02dbfc38,
	0x00d0fc97,
	0xff37fcf0,
};

MMP_ULONG m_ulDeltaMemC_256_335_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfe27fd3d,
	0xfd6efd89,
	0xfd27fdcb,
	0xfd44fdfd,
	0xfdc3fe27,
	0xfe97fe42,
	0xffb6fe4e,
	0x00c6fe4b,
	0x01cbfe38,
	0x027dfe17,
	0x02d0fdec,
	0x02c9fdb0,
	0x0253fd6a,
	0x0181fd22,
	0x002dfccc,
	0xfe64fc70,
	0xfc29fc10,
	0x0579fad8,
	0x0337fb42,
	0x0129fbb2,
	0xff8cfc1c,
	0xfe77fc77,
	0xfdb6fcd0,
	0xfd64fd1e,
	0xfd77fd59,
	0xfde7fd8b,
	0xfeacfdab,
	0xffbafdb9,
	0x00bafdb5,
	0x01affda0,
	0x0253fd78,
	0x029afd45,
	0x0287fcff,
	0x0208fcac,
	0x0130fc57,
	0xffd6fbf1,
	0xfe09fb84,
	0xfbcdfb12,
	0x05e5f9be,
	0x03a1fa37,
	0x0191fab7,
	0xffeffb31,
	0xfed3fb98,
	0xfe09fbfe,
	0xfdacfc57,
	0xfdb1fc9a,
	0xfe11fcd2,
	0xfec4fcf7,
	0xffbffd06,
	0x00adfd02,
	0x018ffcea,
	0x0222fcbd,
	0x025bfc83,
	0x023afc34,
	0x01b0fbd5,
	0x00d1fb74,
	0xff71faff,
	0xfda0fa83,
	0xfb62fa00,
	0x065df893,
	0x0418f91a,
	0x0204f9a9,
	0x005cfa30,
	0xff39faa2,
	0xfe64fb13,
	0xfdfafb75,
	0xfdf1fbbf,
	0xfe40fbfd,
	0xfedffc25,
	0xffc4fc37,
	0x009ffc32,
	0x016cfc17,
	0x01ecfbe5,
	0x0215fba6,
	0x01e6fb4e,
	0x0150fae6,
	0x0068fa7a,
	0xff01f9f8,
	0xfd2cf96e,
	0xfaebf8dd,
};

MMP_ULONG m_ulDeltaMemD_000_127_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0x0507068c,
	0x02bf0602,
	0x00e3057f,
	0xff770504,
	0xfe8b049c,
	0xfdf20438,
	0xfdc303e3,
	0xfdee03a5,
	0xfe720374,
	0xff440359,
	0x002a0353,
	0x011e0362,
	0x01cf0386,
	0x022f03bf,
	0x02350404,
	0x01db0460,
	0x011604ca,
	0xffff0536,
	0xfe6405b5,
	0xfc5b063b,
	0xf9ee06c5,
	0x0495056f,
	0x024f04f6,
	0x00780481,
	0xff120414,
	0xfe2e03b8,
	0xfda1035f,
	0xfd7f0313,
	0xfdb902dc,
	0xfe4e02b0,
	0xff350298,
	0x002d0292,
	0x0136029f,
	0x01fa02c0,
	0x026b02f3,
	0x027f0331,
	0x02320382,
	0x017603e1,
	0x00670440,
	0xfed204b1,
	0xfccc0528,
	0xfa6005a2,
	0x043c0484,
	0x01f8041a,
	0x002403b4,
	0xfec30354,
	0xfde50303,
	0xfd6002b5,
	0xfd4a0273,
	0xfd8f0242,
	0xfe33021c,
	0xff290206,
	0x00300201,
	0x0149020d,
	0x021c022a,
	0x029a0256,
	0x02ba028d,
	0x027602d4,
	0x01c20327,
	0x00b8037b,
	0xff2703dd,
	0xfd240445,
	0xfab904b0,
	0x03e7038c,
	0x01a40334,
	0xffd302e0,
	0xfe770291,
	0xfd9f024e,
	0xfd23020d,
	0xfd1601d6,
	0xfd6701ae,
	0xfe18018e,
	0xff1d017c,
	0x00330178,
	0x015b0182,
	0x023c019a,
	0x02c801bf,
	0x02f201ec,
	0x02b80227,
	0x020b026c,
	0x010602b1,
	0xff790303,
	0xfd780359,
	0xfb0e03b0,
	0x03a302a3,
	0x01610260,
	0xff92021e,
	0xfe3a01e1,
	0xfd6601ad,
	0xfcf1017b,
	0xfced0150,
	0xfd460131,
	0xfe020118,
	0xff13010a,
	0x00350107,
	0x016a010e,
	0x02570121,
	0x02ed013e,
	0x031f0161,
	0x02ec018f,
	0x024601c4,
	0x014501fa,
	0xffbb0239,
	0xfdbc027c,
	0xfb5202bf,
	0x037101c7,
	0x01300198,
	0xff63016a,
	0xfe0c0140,
	0xfd3d011c,
	0xfccc00f9,
	0xfcce00db,
	0xfd2e00c5,
	0xfdf200b4,
	0xff0c00aa,
	0x003600a8,
	0x017500ad,
	0x026a00ba,
	0x030800ce,
	0x034000e7,
	0x03130107,
	0x0272012c,
	0x01740151,
	0xffec017d,
	0xfded01ab,
	0xfb8501da,
	0x035100f2,
	0x011100d9,
};

MMP_ULONG m_ulDeltaMemD_128_255_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0xff4400c0,
	0xfdf000a9,
	0xfd220096,
	0xfcb50082,
	0xfcba0072,
	0xfd1f0066,
	0xfde8005d,
	0xff080058,
	0x00370056,
	0x017c0059,
	0x02770060,
	0x031a006b,
	0x03560079,
	0x032c008a,
	0x028d009e,
	0x019100b3,
	0x000a00ca,
	0xfe0d00e3,
	0xfba400fd,
	0x03450039,
	0x01040033,
	0xff39002d,
	0xfde50028,
	0xfd180023,
	0xfcab001f,
	0xfcb3001b,
	0xfd190018,
	0xfde40016,
	0xff060014,
	0x00380014,
	0x017e0015,
	0x027c0017,
	0x03200019,
	0x035e001c,
	0x03360021,
	0x02980025,
	0x019c002a,
	0x00160030,
	0xfe190036,
	0xfbb1003c,
	0x0349ff6a,
	0x0109ff7a,
	0xff3dff89,
	0xfde9ff98,
	0xfd1bffa4,
	0xfcafffb0,
	0xfcb6ffba,
	0xfd1bffc1,
	0xfde5ffc7,
	0xff07ffca,
	0x0038ffcb,
	0x017dffc9,
	0x027affc5,
	0x031effbe,
	0x035bffb6,
	0x0332ffab,
	0x0294ff9f,
	0x0198ff92,
	0x0012ff83,
	0xfe15ff74,
	0xfbacff64,
	0x0361fe98,
	0x0120febe,
	0xff53fee2,
	0xfdfeff04,
	0xfd2fff21,
	0xfcc0ff3d,
	0xfcc4ff55,
	0xfd26ff66,
	0xfdedff74,
	0xff0aff7c,
	0x0037ff7e,
	0x0178ff79,
	0x0271ff6f,
	0x0311ff5f,
	0x034bff4b,
	0x0320ff32,
	0x0280ff14,
	0x0183fef6,
	0xfffbfed3,
	0xfdfefeaf,
	0xfb95fe89,
	0x038bfdc0,
	0x0149fdfb,
	0xff7bfe33,
	0xfe24fe68,
	0xfd52fe95,
	0xfcdffec1,
	0xfcdefee6,
	0xfd3aff01,
	0xfdfaff17,
	0xff10ff23,
	0x0036ff25,
	0x016fff1f,
	0x0260ff0f,
	0x02fafef6,
	0x032ffed7,
	0x02fffeaf,
	0x025bfe81,
	0x015cfe52,
	0xffd3fe1c,
	0xfdd4fde2,
	0xfb6bfda8,
	0x03bffcf7,
	0x017dfd44,
	0xffadfd8d,
	0xfe53fdd3,
	0xfd7efe0d,
	0xfd05fe46,
	0xfcfefe77,
	0xfd54fe9a,
	0xfe0bfeb6,
	0xff17fec6,
	0x0034feca,
	0x0164fec1,
	0x024cfeac,
	0x02defe8b,
	0x030cfe64,
	0x02d6fe30,
	0x022efdf3,
	0x012bfdb6,
	0xffa0fd6f,
	0xfda0fd24,
	0xfb36fcd7,
	0x040bfc08,
	0x01c8fc68,
	0xfff5fcc4,
	0xfe97fd1b,
};

MMP_ULONG m_ulDeltaMemD_256_335_FHD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfdbcfd64,
	0xfd3dfdab,
	0xfd2cfde7,
	0xfd78fe13,
	0xfe23fe36,
	0xff22fe4a,
	0x0032fe4e,
	0x0154fe44,
	0x022ffe2a,
	0x02b5fe01,
	0x02dafdd0,
	0x029cfd8f,
	0x01edfd44,
	0x00e6fcf8,
	0xff57fc9e,
	0xfd55fc40,
	0xfaeafbe0,
	0x0467fb08,
	0x0222fb7b,
	0x004cfbe8,
	0xfee9fc4e,
	0xfe08fca5,
	0xfd80fcf9,
	0xfd64fd40,
	0xfda4fd74,
	0xfe40fd9d,
	0xff2ffdb4,
	0x002ffdb9,
	0x0140fdad,
	0x020bfd8e,
	0x0283fd5e,
	0x029dfd24,
	0x0255fcd7,
	0x019efc7f,
	0x0091fc25,
	0xfefefbbb,
	0xfcf9fb4b,
	0xfa8efad9,
	0x04d3f9f5,
	0x028bfa78,
	0x00b2faf5,
	0xff48fb6a,
	0xfe60fbcd,
	0xfdcdfc2c,
	0xfda4fc7d,
	0xfdd6fcb8,
	0xfe61fce7,
	0xff3dfd01,
	0x002cfd07,
	0x0129fcf9,
	0x01e3fcd6,
	0x024afc9f,
	0x0257fc5d,
	0x0203fc06,
	0x0142fba1,
	0x002ffb3b,
	0xfe96fac2,
	0xfc8ffa42,
	0xfa22f9bf,
	0x054af8d1,
	0x0300f962,
	0x0122f9ed,
	0xffb2fa6f,
	0xfec1fadc,
	0xfe22fb46,
	0xfdebfb9f,
	0xfe0efbe0,
	0xfe86fc14,
	0xff4dfc31,
	0x0028fc37,
	0x0110fc27,
	0x01b6fc01,
	0x020cfbc5,
	0x020afb7c,
	0x01a8fb1c,
	0x00ddfaac,
	0xffc2fa3a,
	0xfe24f9b4,
	0xfc19f926,
	0xf9aaf894,
};