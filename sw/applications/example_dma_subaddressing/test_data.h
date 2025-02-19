#ifndef __TEST_DATA_H__
#define __TEST_DATA_H__


uint32_t original_128B[32] = {
    0x76543211, 0xfedcba99, 0x579a6f91, 0x657d5bef, 0x758ee420, 0x01234568, 0xfedbca97, 0x89abde00,
    0x76543212, 0xfedcba9a, 0x579a6f92, 0x657d5bf0, 0x758ee421, 0x01234569, 0xfedbca98, 0x89abde01,
    0x76543213, 0xfedcba9b, 0x579a6f93, 0x657d5bf1, 0x758ee422, 0x0123456a, 0xfedbca99, 0x89abde02,
    0x76543214, 0xfedcba9c, 0x579a6f94, 0x657d5bf2, 0x758ee423, 0x0123456b, 0xfedbca9a, 0x89abde03
};

uint32_t test_se_half_words[64] = {
    0x00003211, 0x00007654, 0xffffba99, 0xfffffedc, 0x00006f91, 0x0000579a, 0x00005bef, 0x0000657d,
    0xffffe420, 0x0000758e, 0x00004568, 0x00000123, 0xffffca97, 0xfffffedb, 0xffffde00, 0xffff89ab,
    0x00003212, 0x00007654, 0xffffba9a, 0xfffffedc, 0x00006f92, 0x0000579a, 0x00005bf0, 0x0000657d,
    0xffffe421, 0x0000758e, 0x00004569, 0x00000123, 0xffffca98, 0xfffffedb, 0xffffde01, 0xffff89ab,
    0x00003213, 0x00007654, 0xffffba9b, 0xfffffedc, 0x00006f93, 0x0000579a, 0x00005bf1, 0x0000657d,
    0xffffe422, 0x0000758e, 0x0000456a, 0x00000123, 0xffffca99, 0xfffffedb, 0xffffde02, 0xffff89ab,
    0x00003214, 0x00007654, 0xffffba9c, 0xfffffedc, 0x00006f94, 0x0000579a, 0x00005bf2, 0x0000657d,
    0xffffe423, 0x0000758e, 0x0000456b, 0x00000123, 0xffffca9a, 0xfffffedb, 0xffffde03, 0xffff89ab
};

uint32_t test_half_words[64] = {
    0x00003211, 0x00007654, 0x0000ba99, 0x0000fedc, 0x00006f91, 0x0000579a, 0x00005bef, 0x0000657d,
    0x0000e420, 0x0000758e, 0x00004568, 0x00000123, 0x0000ca97, 0x0000fedb, 0x0000de00, 0x000089ab,
    0x00003212, 0x00007654, 0x0000ba9a, 0x0000fedc, 0x00006f92, 0x0000579a, 0x00005bf0, 0x0000657d,
    0x0000e421, 0x0000758e, 0x00004569, 0x00000123, 0x0000ca98, 0x0000fedb, 0x0000de01, 0x000089ab,
    0x00003213, 0x00007654, 0x0000ba9b, 0x0000fedc, 0x00006f93, 0x0000579a, 0x00005bf1, 0x0000657d,
    0x0000e422, 0x0000758e, 0x0000456a, 0x00000123, 0x0000ca99, 0x0000fedb, 0x0000de02, 0x000089ab,
    0x00003214, 0x00007654, 0x0000ba9c, 0x0000fedc, 0x00006f94, 0x0000579a, 0x00005bf2, 0x0000657d,
    0x0000e423, 0x0000758e, 0x0000456b, 0x00000123, 0x0000ca9a, 0x0000fedb, 0x0000de03, 0x000089ab
};

uint32_t test_se_bytes[128] = {
    0x00000011, 0x00000032, 0x00000054, 0x00000076, 0xffffff99, 0xffffffba, 0xffffffdc, 0xfffffffe,
    0xffffff91, 0x0000006f, 0xffffff9a, 0x00000057, 0xffffffef, 0x0000005b, 0x0000007d, 0x00000065,
    0x00000020, 0xffffffe4, 0xffffff8e, 0x00000075, 0x00000068, 0x00000045, 0x00000023, 0x00000001,
    0xffffff97, 0xffffffca, 0xffffffdb, 0xfffffffe, 0x00000000, 0xffffffde, 0xffffffab, 0xffffff89,
    0x00000012, 0x00000032, 0x00000054, 0x00000076, 0xffffff9a, 0xffffffba, 0xffffffdc, 0xfffffffe,
    0xffffff92, 0x0000006f, 0xffffff9a, 0x00000057, 0xfffffff0, 0x0000005b, 0x0000007d, 0x00000065,
    0x00000021, 0xffffffe4, 0xffffff8e, 0x00000075, 0x00000069, 0x00000045, 0x00000023, 0x00000001,
    0xffffff98, 0xffffffca, 0xffffffdb, 0xfffffffe, 0x00000001, 0xffffffde, 0xffffffab, 0xffffff89,
    0x00000013, 0x00000032, 0x00000054, 0x00000076, 0xffffff9b, 0xffffffba, 0xffffffdc, 0xfffffffe,
    0xffffff93, 0x0000006f, 0xffffff9a, 0x00000057, 0xfffffff1, 0x0000005b, 0x0000007d, 0x00000065,
    0x00000022, 0xffffffe4, 0xffffff8e, 0x00000075, 0x0000006a, 0x00000045, 0x00000023, 0x00000001,
    0xffffff99, 0xffffffca, 0xffffffdb, 0xfffffffe, 0x00000002, 0xffffffde, 0xffffffab, 0xffffff89,
    0x00000014, 0x00000032, 0x00000054, 0x00000076, 0xffffff9c, 0xffffffba, 0xffffffdc, 0xfffffffe,
    0xffffff94, 0x0000006f, 0xffffff9a, 0x00000057, 0xfffffff2, 0x0000005b, 0x0000007d, 0x00000065,
    0x00000023, 0xffffffe4, 0xffffff8e, 0x00000075, 0x0000006b, 0x00000045, 0x00000023, 0x00000001,
    0xffffff9a, 0xffffffca, 0xffffffdb, 0xfffffffe, 0x00000003, 0xffffffde, 0xffffffab, 0xffffff89
};

uint32_t test_bytes[128] = {
    0x00000011, 0x00000032, 0x00000054, 0x00000076, 0x00000099, 0x000000ba, 0x000000dc, 0x000000fe,
    0x00000091, 0x0000006f, 0x0000009a, 0x00000057, 0x000000ef, 0x0000005b, 0x0000007d, 0x00000065,
    0x00000020, 0x000000e4, 0x0000008e, 0x00000075, 0x00000068, 0x00000045, 0x00000023, 0x00000001,
    0x00000097, 0x000000ca, 0x000000db, 0x000000fe, 0x00000000, 0x000000de, 0x000000ab, 0x00000089,
    0x00000012, 0x00000032, 0x00000054, 0x00000076, 0x0000009a, 0x000000ba, 0x000000dc, 0x000000fe,
    0x00000092, 0x0000006f, 0x0000009a, 0x00000057, 0x000000f0, 0x0000005b, 0x0000007d, 0x00000065,
    0x00000021, 0x000000e4, 0x0000008e, 0x00000075, 0x00000069, 0x00000045, 0x00000023, 0x00000001,
    0x00000098, 0x000000ca, 0x000000db, 0x000000fe, 0x00000001, 0x000000de, 0x000000ab, 0x00000089,
    0x00000013, 0x00000032, 0x00000054, 0x00000076, 0x0000009b, 0x000000ba, 0x000000dc, 0x000000fe,
    0x00000093, 0x0000006f, 0x0000009a, 0x00000057, 0x000000f1, 0x0000005b, 0x0000007d, 0x00000065,
    0x00000022, 0x000000e4, 0x0000008e, 0x00000075, 0x0000006a, 0x00000045, 0x00000023, 0x00000001,
    0x00000099, 0x000000ca, 0x000000db, 0x000000fe, 0x00000002, 0x000000de, 0x000000ab, 0x00000089,
    0x00000014, 0x00000032, 0x00000054, 0x00000076, 0x0000009c, 0x000000ba, 0x000000dc, 0x000000fe,
    0x00000094, 0x0000006f, 0x0000009a, 0x00000057, 0x000000f2, 0x0000005b, 0x0000007d, 0x00000065,
    0x00000023, 0x000000e4, 0x0000008e, 0x00000075, 0x0000006b, 0x00000045, 0x00000023, 0x00000001,
    0x0000009a, 0x000000ca, 0x000000db, 0x000000fe, 0x00000003, 0x000000de, 0x000000ab, 0x00000089
};

#ifndef ON_CHIP

int32_t __attribute__((section(".xheep_data_flash_only"))) __attribute__ ((aligned (16))) flash_only_buffer[32] = {
    0xABCDEF00,
    0xABCDEF01,
    0xABCDEF02,
    0xABCDEF03,
    0xABCDEF04,
    0xABCDEF05,
    0xABCDEF06,
    0xABCDEF07,
    0xABCDEF08,
    0xABCDEF09,
    0xABCDEF0A,
    0xABCDEF0B,
    0xABCDEF0C,
    0xABCDEF0D,
    0xABCDEF0E,
    0xABCDEF0F,
    0xABCDEF10,
    0xABCDEF11,
    0xABCDEF12,
    0xABCDEF13,
    0xABCDEF14,
    0xABCDEF15,
    0xABCDEF16,
    0xABCDEF17,
    0xABCDEF18,
    0xABCDEF19,
    0xABCDEF1A,
    0xABCDEF1B,
    0xABCDEF1C,
    0xABCDEF1D,
    0xABCDEF1E,
    0xABCDEF1F,
};

int32_t __attribute__ ((aligned (16))) flash_only_buffer_golden_value[32] = {
    0xABCDEF00,
    0xABCDEF01,
    0xABCDEF02,
    0xABCDEF03,
    0xABCDEF04,
    0xABCDEF05,
    0xABCDEF06,
    0xABCDEF07,
    0xABCDEF08,
    0xABCDEF09,
    0xABCDEF0A,
    0xABCDEF0B,
    0xABCDEF0C,
    0xABCDEF0D,
    0xABCDEF0E,
    0xABCDEF0F,
    0xABCDEF10,
    0xABCDEF11,
    0xABCDEF12,
    0xABCDEF13,
    0xABCDEF14,
    0xABCDEF15,
    0xABCDEF16,
    0xABCDEF17,
    0xABCDEF18,
    0xABCDEF19,
    0xABCDEF1A,
    0xABCDEF1B,
    0xABCDEF1C,
    0xABCDEF1D,
    0xABCDEF1E,
    0xABCDEF1F,
};

int32_t __attribute__ ((aligned (16))) flash_only_buffer_golden_value_hw_se[64] = {
    0xFFFFEF00,
    0xFFFFABCD,
    0xFFFFEF01,
    0xFFFFABCD,
    0xFFFFEF02,
    0xFFFFABCD,
    0xFFFFEF03,
    0xFFFFABCD,
    0xFFFFEF04,
    0xFFFFABCD,
    0xFFFFEF05,
    0xFFFFABCD,
    0xFFFFEF06,
    0xFFFFABCD,
    0xFFFFEF07,
    0xFFFFABCD,
    0xFFFFEF08,
    0xFFFFABCD,
    0xFFFFEF09,
    0xFFFFABCD,
    0xFFFFEF0A,
    0xFFFFABCD,
    0xFFFFEF0B,
    0xFFFFABCD,
    0xFFFFEF0C,
    0xFFFFABCD,
    0xFFFFEF0D,
    0xFFFFABCD,
    0xFFFFEF0E,
    0xFFFFABCD,
    0xFFFFEF0F,
    0xFFFFABCD,
    0xFFFFEF10,
    0xFFFFABCD,
    0xFFFFEF11,
    0xFFFFABCD,
    0xFFFFEF12,
    0xFFFFABCD,
    0xFFFFEF13,
    0xFFFFABCD,
    0xFFFFEF14,
    0xFFFFABCD,
    0xFFFFEF15,
    0xFFFFABCD,
    0xFFFFEF16,
    0xFFFFABCD,
    0xFFFFEF17,
    0xFFFFABCD,
    0xFFFFEF18,
    0xFFFFABCD,
    0xFFFFEF19,
    0xFFFFABCD,
    0xFFFFEF1A,
    0xFFFFABCD,
    0xFFFFEF1B,
    0xFFFFABCD,
    0xFFFFEF1C,
    0xFFFFABCD,
    0xFFFFEF1D,
    0xFFFFABCD,
    0xFFFFEF1E,
    0xFFFFABCD,
    0xFFFFEF1F,
    0xFFFFABCD,
};

int32_t __attribute__ ((aligned (16))) flash_only_buffer_golden_value_hw[64] = {
    0x0000EF00,
    0x0000ABCD,
    0x0000EF01,
    0x0000ABCD,
    0x0000EF02,
    0x0000ABCD,
    0x0000EF03,
    0x0000ABCD,
    0x0000EF04,
    0x0000ABCD,
    0x0000EF05,
    0x0000ABCD,
    0x0000EF06,
    0x0000ABCD,
    0x0000EF07,
    0x0000ABCD,
    0x0000EF08,
    0x0000ABCD,
    0x0000EF09,
    0x0000ABCD,
    0x0000EF0A,
    0x0000ABCD,
    0x0000EF0B,
    0x0000ABCD,
    0x0000EF0C,
    0x0000ABCD,
    0x0000EF0D,
    0x0000ABCD,
    0x0000EF0E,
    0x0000ABCD,
    0x0000EF0F,
    0x0000ABCD,
    0x0000EF10,
    0x0000ABCD,
    0x0000EF11,
    0x0000ABCD,
    0x0000EF12,
    0x0000ABCD,
    0x0000EF13,
    0x0000ABCD,
    0x0000EF14,
    0x0000ABCD,
    0x0000EF15,
    0x0000ABCD,
    0x0000EF16,
    0x0000ABCD,
    0x0000EF17,
    0x0000ABCD,
    0x0000EF18,
    0x0000ABCD,
    0x0000EF19,
    0x0000ABCD,
    0x0000EF1A,
    0x0000ABCD,
    0x0000EF1B,
    0x0000ABCD,
    0x0000EF1C,
    0x0000ABCD,
    0x0000EF1D,
    0x0000ABCD,
    0x0000EF1E,
    0x0000ABCD,
    0x0000EF1F,
    0x0000ABCD,
};

int32_t __attribute__ ((aligned (16))) flash_only_buffer_golden_value_bytes_se[128] = {
    0x00000000,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000001,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000002,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000003,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000004,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000005,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000006,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000007,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000008,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000009,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000000A,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000000B,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000000C,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000000D,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000000E,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000000F,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000010,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000011,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000012,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000013,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000014,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000015,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000016,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000017,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000018,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x00000019,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000001A,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000001B,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000001C,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000001D,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000001E,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB,
    0x0000001F,
    0xFFFFFFEF,
    0xFFFFFFCD,
    0xFFFFFFAB
};

int32_t __attribute__ ((aligned (16))) flash_only_buffer_golden_value_bytes[128] = {
    0x00000000,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000001,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000002,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000003,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000004,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000005,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000006,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000007,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000008,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000009,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000000A,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000000B,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000000C,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000000D,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000000E,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000000F,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000010,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000011,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000012,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000013,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000014,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000015,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000016,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000017,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000018,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x00000019,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000001A,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000001B,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000001C,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000001D,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000001E,
    0x000000EF,
    0x000000CD,
    0x000000AB,
    0x0000001F,
    0x000000EF,
    0x000000CD,
    0x000000AB
};

#endif

#endif

