#pragma once

#define SCREEN_DISPLAY_REGISTER                 0x2100
#define OAM_SIZE_AND_DATA_AREA_DESIGNATION      0x2101
#define ADDRESS_FOR_ACCESSING_OAM_LOW           0x2102
#define ADDRESS_FOR_ACCESSING_OAM_HIGH          0x2103
#define OAM_DATA_WRITE                          0x2104
#define BG_MODE_AND_TILE_SIZE_SETTING           0x2105
#define MOSAIC_SIZE_AND_BG_ENABLE               0x2106
#define BG_1_ADDRESS_AND_SIZE                   0x2107
#define BG_2_ADDRESS_AND_SIZE                   0x2108
#define BG_3_ADDRESS_AND_SIZE                   0x2109
#define BG_4_ADDRESS_AND_SIZE                   0x210A
#define BG_1_AND_2_TILE_DATA_DESIGNATION        0x210B
#define BG_3_AND_4_TILE_DATA_DESIGNATION        0x210C
#define BG_1_H_SCROLL_OFFSET                    0x210D
#define BG_1_V_SCROLL_OFFSET                    0x210E
#define BG_2_H_SCROLL_OFFSET                    0x210F
#define BG_2_V_SCROLL_OFFSET                    0x2110
#define BG_3_H_SCROLL_OFFSET                    0x2111
#define BG_3_V_SCROLL_OFFSET                    0x2112
#define BG_4_H_SCROLL_OFFSET                    0x2113
#define BG_4_V_SCROLL_OFFSET                    0x2114
#define VRAM_ADDRESS_INCREMENT_VALUE            0x2115
#define ADDRESS_FOR_VRAM_READ_WRITE_LOW_BYTE    0x2116
#define ADDRESS_FOR_VRAM_READ_WRITE_HIGH_BYTE   0x2117
#define DATA_FOR_VRAM_WRITE_LOW_BYTE            0x2118
#define DATA_FOR_VRAM_WRITE_HIGH_BYTE           0x2119
#define INITIAL_SETTING_FOR_MODE_7              0x211A
#define MODE_7_MATRIX_PARAMETER_A               0x211B
#define MODE_7_MATRIX_PARAMETER_B               0x211C
#define MODE_7_MATRIX_PARAMETER_C               0x211D
#define MODE_7_MATRIX_PARAMETER_D               0x211E
#define MODE_7_CENTER_POSITION_X                0x211F
#define MODE_7_CENTER_POSITION_Y                0x2120
#define ADDRESS_FOR_CG_RAM_WRITE                0x2121
#define DATA_FOR_CG_RAM_WRITE                   0x2122
#define BG_1_AND_2_WINDOW_MASK_SETTINGS         0x2123
#define BG_3_AND_4_WINDOW_MASK_SETTINGS         0x2124
#define OBJ_AND_COLOR_WINDOW_SETTINGS           0x2125
#define WINDOW_1_LEFT_POSITION_DESIGNATION      0x2126
#define WINDOW_1_RIGHT_POSITION_DESIGNATION     0x2127
#define WINDOW_2_LEFT_POSTION_DESIGNATION       0x2128
#define WINDOW_2_RIGHT_POSTION_DESIGNATION      0x2129
#define BG_1_2_3_4_WINDOW_LOGIC_SETTINGS        0x212A
#define COLOR_AND_OBJ_WINDOW_LOGIC_SETTINGS     0x212B
#define BG_AND_OBJECT_ENABLE_MAIN_SCREEN        0x212C
#define BG_AND_OBJECT_ENABLE_SUB_SCREEN         0x212D
#define WINDOW_MASK_DESIGNATION_FOR_MAIN_SCREEN 0x212E
#define WINDOW_MASK_DESIGNATION_FOR_SUB_SCREEN  0x212F
#define INITIAL_SETTINGS_FOR_COLOR_ADDITION     0x2130
#define ADD_SUBTRACT_SELECT_AND_ENABLE          0x2131
#define FIXED_COLOR_DATA                        0x2132
#define SCREEN_INITIAL_SETTINGS                 0x2133
#define MULTIPLICATION_RESULT_LOW_BYTE          0x2134
#define MULTIPLICATION_RESULT_MID_BYTE          0x2135
#define MULTIPLICATION_RESULT_HIGH_BYTE         0x2136
#define SOFTWARE_LATCH_FOR_H_V_COUNTER          0x2137
#define READ_DATA_FROM_OAM_LOW_HIGH             0x2138
#define READ_DATA_FROM_VRAM_LOW                 0x2139
#define READ_DATA_FROM_VRAM_HIGH                0x213A
#define READ_DATA_FROM_CG_RAM_LOW_HIGH          0x213B
#define H_COUNTER_DATA                          0x213C
#define V_COUNTER_DATA                          0x213D
#define PPU_STATUS_FLAG                         0x213E
#define APU_I_O_PORT_0                          0x2140
#define APU_I_O_PORT_1                          0x2141
#define APU_I_O_PORT_2                          0x2142
#define APU_I_O_PORT_3                          0x2143
#define WRAM_DATA_READ_WRITE                    0x2180
#define WRAM_ADDRESS_LOW_BYTE                   0x2181
#define WRAM_ADDRESS_MIDDLE_BYTE                0x2182
#define WRAM_ADDRESS_HIGH_BYTE                  0x2183
#define NMI_V_H_COUNT_AND_JOYPAD_ENABLE         0x4200
#define PROGRAMMABLE_I_O_PORT_OUTPUT            0x4201
#define MULTIPLICAND_A                          0x4202
#define MULTPLIER_B                             0x4203
#define DIVIDEND_LOW_BYTE                       0x4204
#define DIVIDEND_HIGH_BYTE                      0x4205
#define DIVISOR_B                               0x4206
#define H_COUNT_TIMER                           0x4207
#define H_COUNT_TIMER_MSB                       0x4208
#define V_COUNT_TIMER                           0x4209
#define V_COUNT_TIMER_MSB                       0x420A
#define REGULAR_DMA_CHANNEL_ENABLE              0x420B
#define H_DMA_CHANNEL_ENABLE                    0x420C
#define CYCLE_SPEED_DESIGNATION                 0x420D
#define NMI_ENABLE                              0x4210
#define IRQ_FLAG_BY_H_V_COUNT_TIMER             0x4211
#define H_V_BLANK_FLAGS_AND_JOYPAD_STATUS       0x4212
#define PROGRAMMABLE_I_O_PORT_INPUT             0x4213
#define QUOTIENT_OF_DIVIDE_RESULT_LOW_BYTE      0x4214
#define QUOTIENT_OF_DIVIDE_RESULT_HIGH_BYTE     0x4215
#define PRODUCT_REMAINDER_RESULT_LOW_BYTE       0x4216
#define PRODUCT_REMAINDER_RESULT_HIGH_BYTE      0x4217
#define JOYPAD_1_DATA_LOW_BYTE                  0x4218
#define JOYPAD_1_DATA_HIGH_BYTE                 0x4219
#define JOYPAD_2_DATA_LOW_BYTE                  0x421A
#define JOYPAD_2_DATA_HIGH_BYTE                 0x421B
#define JOYPAD_3_DATA_LOW_BYTE                  0x421C
#define JOYPAD_3_DATA_HIGH_BYTE                 0x421D
#define JOYPAD_4_DATA_LOW_BYTE                  0x421E
#define JOYPAD_4_DATA_HIGH_BYTE                 0x421F
#define DMA_0_PARAMS                            0x4300
#define DMA_0_B_ADDRESS                         0x4301
#define DMA_0_A_ADDRESS_LOW_BYTE                0x4302
#define DMA_0_A_ADDRESS_HIGH_BYTE               0x4303
#define DMA_0_A_ADDRESS_BANK                    0x4304
#define DMA_0_BYTES_COUNT_LOW_BYTE              0x4305
#define DMA_0_BYTES_COUNT_HIGH_BYTE             0x4306
#define DMA_0_HDMA_DATA_BANK                    0x4307
#define DMA_0_A2_TABLE_ADDRESS_LOW_BYTE         0x4308
#define DMA_0_A2_TABLE_ADDRESS_HIGH_BYTE        0x4309
#define DMA_0_HDMA_LINES_COUNT                  0x430A
#define DMA_1_PARAMS                            0x4310
#define DMA_1_B_ADDRESS                         0x4311
#define DMA_1_A_ADDRESS_LOW_BYTE                0x4312
#define DMA_1_A_ADDRESS_HIGH_BYTE               0x4313
#define DMA_1_A_ADDRESS_BANK                    0x4314
#define DMA_1_BYTES_COUNT_LOW_BYTE              0x4315
#define DMA_1_BYTES_COUNT_HIGH_BYTE             0x4316
#define DMA_1_HDMA_DATA_BANK                    0x4317
#define DMA_1_A2_TABLE_ADDRESS_LOW_BYTE         0x4318
#define DMA_1_A2_TABLE_ADDRESS_HIGH_BYTE        0x4319
#define DMA_1_HDMA_LINES_COUNT                  0x431A
#define DMA_2_PARAMS                            0x4320
#define DMA_2_B_ADDRESS                         0x4321
#define DMA_2_A_ADDRESS_LOW_BYTE                0x4322
#define DMA_2_A_ADDRESS_HIGH_BYTE               0x4323
#define DMA_2_A_ADDRESS_BANK                    0x4324
#define DMA_2_BYTES_COUNT_LOW_BYTE              0x4325
#define DMA_2_BYTES_COUNT_HIGH_BYTE             0x4326
#define DMA_2_HDMA_DATA_BANK                    0x4327
#define DMA_2_A2_TABLE_ADDRESS_LOW_BYTE         0x4328
#define DMA_2_A2_TABLE_ADDRESS_HIGH_BYTE        0x4329
#define DMA_2_HDMA_LINES_COUNT                  0x432A
#define DMA_3_PARAMS                            0x4330
#define DMA_3_B_ADDRESS                         0x4331
#define DMA_3_A_ADDRESS_LOW_BYTE                0x4332
#define DMA_3_A_ADDRESS_HIGH_BYTE               0x4333
#define DMA_3_A_ADDRESS_BANK                    0x4334
#define DMA_3_BYTES_COUNT_LOW_BYTE              0x4335
#define DMA_3_BYTES_COUNT_HIGH_BYTE             0x4336
#define DMA_3_HDMA_DATA_BANK                    0x4337
#define DMA_3_A2_TABLE_ADDRESS_LOW_BYTE         0x4338
#define DMA_3_A2_TABLE_ADDRESS_HIGH_BYTE        0x4339
#define DMA_3_HDMA_LINES_COUNT                  0x433A
#define DMA_4_PARAMS                            0x4340
#define DMA_4_B_ADDRESS                         0x4341
#define DMA_4_A_ADDRESS_LOW_BYTE                0x4342
#define DMA_4_A_ADDRESS_HIGH_BYTE               0x4343
#define DMA_4_A_ADDRESS_BANK                    0x4344
#define DMA_4_BYTES_COUNT_LOW_BYTE              0x4345
#define DMA_4_BYTES_COUNT_HIGH_BYTE             0x4346
#define DMA_4_HDMA_DATA_BANK                    0x4347
#define DMA_4_A2_TABLE_ADDRESS_LOW_BYTE         0x4348
#define DMA_4_A2_TABLE_ADDRESS_HIGH_BYTE        0x4349
#define DMA_4_HDMA_LINES_COUNT                  0x434A
#define DMA_5_PARAMS                            0x4350
#define DMA_5_B_ADDRESS                         0x4351
#define DMA_5_A_ADDRESS_LOW_BYTE                0x4352
#define DMA_5_A_ADDRESS_HIGH_BYTE               0x4353
#define DMA_5_A_ADDRESS_BANK                    0x4354
#define DMA_5_BYTES_COUNT_LOW_BYTE              0x4355
#define DMA_5_BYTES_COUNT_HIGH_BYTE             0x4356
#define DMA_5_HDMA_DATA_BANK                    0x4357
#define DMA_5_A2_TABLE_ADDRESS_LOW_BYTE         0x4358
#define DMA_5_A2_TABLE_ADDRESS_HIGH_BYTE        0x4359
#define DMA_5_HDMA_LINES_COUNT                  0x435A
#define DMA_6_PARAMS                            0x4360
#define DMA_6_B_ADDRESS                         0x4361
#define DMA_6_A_ADDRESS_LOW_BYTE                0x4362
#define DMA_6_A_ADDRESS_HIGH_BYTE               0x4363
#define DMA_6_A_ADDRESS_BANK                    0x4364
#define DMA_6_BYTES_COUNT_LOW_BYTE              0x4365
#define DMA_6_BYTES_COUNT_HIGH_BYTE             0x4366
#define DMA_6_HDMA_DATA_BANK                    0x4367
#define DMA_6_A2_TABLE_ADDRESS_LOW_BYTE         0x4368
#define DMA_6_A2_TABLE_ADDRESS_HIGH_BYTE        0x4369
#define DMA_6_HDMA_LINES_COUNT                  0x436A
#define DMA_7_PARAMS                            0x4370
#define DMA_7_B_ADDRESS                         0x4371
#define DMA_7_A_ADDRESS_LOW_BYTE                0x4372
#define DMA_7_A_ADDRESS_HIGH_BYTE               0x4373
#define DMA_7_A_ADDRESS_BANK                    0x4374
#define DMA_7_BYTES_COUNT_LOW_BYTE              0x4375
#define DMA_7_BYTES_COUNT_HIGH_BYTE             0x4376
#define DMA_7_HDMA_DATA_BANK                    0x4377
#define DMA_7_A2_TABLE_ADDRESS_LOW_BYTE         0x4378
#define DMA_7_A2_TABLE_ADDRESS_HIGH_BYTE        0x4379
#define DMA_7_HDMA_LINES_COUNT                  0x437A
