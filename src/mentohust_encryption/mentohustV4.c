#include "mentohustV4.h"

const unsigned char array[1820] = {
    0x20, 0x12, 0x05, 0x03, 0x21, 0x57, 0x00, 0x00, 0xd4, 0xf6, 0x7c, 0x00,
    0xf8, 0xfa, 0x7c, 0x99, 0x0c, 0x82, 0x4c, 0x00, 0xdc, 0x00, 0x21, 0x01,
    0x08, 0xfb, 0x7c, 0x00, 0xb2, 0x26, 0x40, 0x58, 0xe4, 0x6e, 0x21, 0x01,
    0xd4, 0xf6, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x97,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xf0, 0x41, 0x00, 0x00, 0xf0, 0x41, 0x00, 0x00, 0x40, 0x40,
    0x00, 0x00, 0x00, 0x40, 0x00, 0xc0, 0x15, 0x44, 0x00, 0x00, 0x16, 0x44,
    0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0xd7, 0xe1, 0x40, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x52, 0xe3, 0x40,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40, 0x5a, 0x00, 0x00, 0x00,
    0x00, 0x6f, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0xa8, 0xfc, 0x7c, 0x00,
    0xca, 0x26, 0x40, 0x00, 0x5e, 0x2e, 0x00, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0x67, 0x69, 0x4c, 0x01, 0x30, 0x31, 0x40, 0x00, 0x89, 0x2e, 0x40, 0x00,
    0x97, 0x2e, 0x40, 0x00, 0x00, 0x35, 0x40, 0x00, 0x87, 0x69, 0x4c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x75, 0x40, 0x00, 0x14, 0x6f, 0x21, 0x01,
    0x08, 0x00, 0x7c, 0x00, 0x84, 0xf7, 0x7c, 0x00, 0x90, 0xf7, 0x7c, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0xe8, 0x1e, 0x98, 0x81, 0x10, 0xfb, 0x06, 0xc9,
    0xed, 0xb7, 0xdd, 0xd6, 0xa4, 0xf9, 0x7c, 0x00, 0x10, 0x00, 0x7c, 0x00,
    0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00, 0xe0, 0xfa, 0x7c, 0x00,
    0xd5, 0x68, 0xf7, 0xbf, 0x10, 0xfb, 0x00, 0x00, 0x24, 0xf8, 0x7c, 0x00,
    0xeb, 0x82, 0xf8, 0xbf, 0x08, 0xf9, 0x7c, 0x00, 0x10, 0xfb, 0x7c, 0x00,
    0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00, 0x5e, 0x69, 0x4c, 0x00,
    0xcc, 0xf9, 0x7c, 0x00, 0x7c, 0xf9, 0x7c, 0x00, 0xe4, 0x6e, 0x21, 0x01,
    0x1a, 0xd0, 0xa1, 0xcd, 0xf5, 0x20, 0xc9, 0xed, 0xb7, 0xdd, 0xd6, 0xa4,
    0x34, 0x31, 0x30, 0x31, 0x30, 0x33, 0x37, 0x39, 0x31, 0x30, 0x32, 0x34,
    0x31, 0x34, 0x35, 0x00, 0x08, 0xf9, 0x7c, 0x00, 0x20, 0xf8, 0x7c, 0x00,
    0x2e, 0xde, 0xf9, 0xbf, 0x08, 0xf9, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x14, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x00, 0x00, 0x00, 0x04, 0x30, 0x30, 0x30, 0x32, 0x00, 0x00, 0x00,
    0xd4, 0xf6, 0x7c, 0x00, 0xf8, 0xfa, 0x7c, 0x00, 0x0c, 0x82, 0x4c, 0x00,
    0xdc, 0x00, 0x21, 0x01, 0x08, 0xfb, 0x7c, 0x00, 0xb2, 0x26, 0x40, 0x00,
    0xe4, 0x6e, 0x21, 0x01, 0xd4, 0xf6, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x42, 0x00, 0x00, 0x70, 0x42,
    0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x96, 0x44,
    0x00, 0x00, 0x96, 0x44, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0x52, 0xe3, 0x40, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40,
    0x5a, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00,
    0xa8, 0xfc, 0x7c, 0x00, 0xca, 0x26, 0x40, 0x00, 0x5e, 0x2e, 0x00, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0x67, 0x69, 0x4c, 0x01, 0x30, 0x31, 0x40, 0x00,
    0x89, 0x2e, 0x40, 0x00, 0x97, 0x2e, 0x40, 0x00, 0x00, 0x35, 0x40, 0x00,
    0x87, 0x69, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x75, 0x40, 0x00,
    0x14, 0x6f, 0x21, 0x01, 0x08, 0x00, 0x7c, 0x00, 0x84, 0xf7, 0x7c, 0x00,
    0x90, 0xf7, 0x7c, 0x00, 0x08, 0xf9, 0x7c, 0x00, 0xe8, 0x1e, 0x98, 0x81,
    0x10, 0xfb, 0x06, 0xc9, 0xed, 0xb7, 0xdd, 0xd6, 0xa4, 0xf9, 0x7c, 0x00,
    0x10, 0x00, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00,
    0xe0, 0xfa, 0x7c, 0x00, 0xd5, 0x68, 0xf7, 0xbf, 0x10, 0xfb, 0x00, 0x00,
    0x24, 0xf8, 0x7c, 0x00, 0xeb, 0x82, 0xf8, 0xbf, 0x08, 0xf9, 0x7c, 0x00,
    0x10, 0xfb, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00,
    0x5e, 0x69, 0x4c, 0x00, 0xcc, 0xf9, 0x7c, 0x00, 0x7c, 0xf9, 0x7c, 0x00,
    0xe4, 0x6e, 0x21, 0x01, 0x1a, 0xd0, 0xa1, 0xd5, 0xc5, 0x20, 0xc9, 0xed,
    0xb7, 0xdd, 0xd6, 0xa4, 0x35, 0x31, 0x30, 0x31, 0x30, 0x33, 0x37, 0x39,
    0x31, 0x30, 0x32, 0x34, 0x31, 0x31, 0x34, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0x20, 0xf8, 0x7c, 0x00, 0x2e, 0xde, 0xf9, 0xbf, 0x08, 0xf9, 0x7c, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x00, 0x00, 0x00, 0x04, 0x30, 0x30, 0x30,
    0x33, 0x00, 0x00, 0x00, 0xd4, 0xf6, 0x7c, 0x00, 0xf8, 0xfa, 0x7c, 0x00,
    0x0c, 0x82, 0x4c, 0x00, 0xdc, 0x00, 0x21, 0x01, 0x08, 0xfb, 0x7c, 0x00,
    0xb2, 0x26, 0x40, 0x00, 0xe4, 0x6e, 0x21, 0x01, 0xd4, 0xf6, 0x7c, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x41,
    0x00, 0x00, 0x70, 0x41, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x96, 0x43, 0x00, 0x00, 0x96, 0x43, 0x00, 0x00, 0x80, 0x3f,
    0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x52, 0xe3, 0x40, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0xd7, 0xe1, 0x40, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x21, 0x01,
    0x00, 0x00, 0x00, 0x00, 0xa8, 0xfc, 0x7c, 0x00, 0xca, 0x26, 0x40, 0x00,
    0x5e, 0x2e, 0x00, 0x00, 0x08, 0xf9, 0x7c, 0x00, 0x67, 0x69, 0x4c, 0x01,
    0x30, 0x31, 0x40, 0x00, 0x89, 0x2e, 0x40, 0x00, 0x97, 0x2e, 0x40, 0x00,
    0x00, 0x35, 0x40, 0x00, 0x87, 0x69, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x75, 0x40, 0x00, 0x14, 0x6f, 0x21, 0x01, 0x08, 0x00, 0x7c, 0x00,
    0x84, 0xf7, 0x7c, 0x00, 0x90, 0xf7, 0x7c, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0xe8, 0x1e, 0x98, 0x81, 0x10, 0xfb, 0x06, 0xc9, 0xed, 0xb7, 0xdd, 0xd6,
    0xa4, 0xf9, 0x7c, 0x00, 0x10, 0x00, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00,
    0x14, 0xf8, 0x7c, 0x00, 0xe0, 0xfa, 0x7c, 0x00, 0xd5, 0x68, 0xf7, 0xbf,
    0x10, 0xfb, 0x00, 0x00, 0x24, 0xf8, 0x7c, 0x00, 0xeb, 0x82, 0xf8, 0xbf,
    0x08, 0xf9, 0x7c, 0x00, 0x10, 0xfb, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00,
    0x14, 0xf8, 0x7c, 0x00, 0x5e, 0x69, 0x4c, 0x00, 0xcc, 0xf9, 0x7c, 0x00,
    0x7c, 0xf9, 0x7c, 0x00, 0xe4, 0x6e, 0x21, 0x01, 0x1a, 0xd0, 0xa1, 0xc2,
    0xed, 0x20, 0xc9, 0xed, 0xb7, 0xdd, 0xd6, 0xa4, 0x34, 0x31, 0x30, 0x31,
    0x30, 0x33, 0x38, 0x31, 0x31, 0x30, 0x32, 0x34, 0x31, 0x38, 0x37, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0x20, 0xf8, 0x7c, 0x00, 0x2e, 0xde, 0xf9, 0xbf,
    0x08, 0xf9, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x14, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x00, 0x00, 0x00,
    0x08, 0x57, 0x61, 0x6e, 0x67, 0x44, 0x6f, 0x6e, 0x67, 0xf6, 0x7c, 0x00,
    0xf8, 0xfa, 0x7c, 0x00, 0x0c, 0x82, 0x4c, 0x00, 0xdc, 0x00, 0x21, 0x01,
    0x08, 0xfb, 0x7c, 0x00, 0xb2, 0x26, 0x40, 0x00, 0xe4, 0x6e, 0x21, 0x01,
    0xd4, 0xf6, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xc8, 0x42, 0x00, 0x00, 0xc8, 0x42, 0x00, 0x00, 0x40, 0x40,
    0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x16, 0x45, 0x00, 0x00, 0x16, 0x45,
    0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0xd7, 0xe1, 0x40, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x52, 0xe3, 0x40,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40, 0x5a, 0x00, 0x00, 0x00,
    0x00, 0x6f, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0xa8, 0xfc, 0x7c, 0x00,
    0xca, 0x26, 0x40, 0x00, 0x5e, 0x2e, 0x00, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0x67, 0x69, 0x4c, 0x01, 0x30, 0x31, 0x40, 0x00, 0x89, 0x2e, 0x40, 0x00,
    0x97, 0x2e, 0x40, 0x00, 0x00, 0x35, 0x40, 0x00, 0x87, 0x69, 0x4c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x75, 0x40, 0x00, 0x14, 0x6f, 0x21, 0x01,
    0x08, 0x00, 0x7c, 0x00, 0x84, 0xf7, 0x7c, 0x00, 0x90, 0xf7, 0x7c, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0xe8, 0x1e, 0x98, 0x81, 0x10, 0xfb, 0x06, 0xc9,
    0xed, 0xb7, 0xdd, 0xd6, 0xa4, 0xf9, 0x7c, 0x00, 0x10, 0x00, 0x7c, 0x00,
    0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00, 0xe0, 0xfa, 0x7c, 0x00,
    0xd5, 0x68, 0xf7, 0xbf, 0x10, 0xfb, 0x00, 0x00, 0x24, 0xf8, 0x7c, 0x00,
    0xeb, 0x82, 0xf8, 0xbf, 0x08, 0xf9, 0x7c, 0x00, 0x10, 0xfb, 0x7c, 0x00,
    0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00, 0x5e, 0x69, 0x4c, 0x00,
    0xcc, 0xf9, 0x7c, 0x00, 0x7c, 0xf9, 0x7c, 0x00, 0xe4, 0x6e, 0x21, 0x01,
    0x00, 0xd0, 0xa1, 0xc2, 0xed, 0x20, 0xc9, 0xed, 0xb7, 0xdd, 0xd6, 0xa4,
    0x34, 0x31, 0x30, 0x31, 0x30, 0x33, 0x38, 0x31, 0x31, 0x30, 0x32, 0x34,
    0x31, 0x38, 0x37, 0x00, 0x08, 0xf9, 0x7c, 0x00, 0x20, 0xf8, 0x7c, 0x00,
    0x2e, 0xde, 0xf9, 0xbf, 0x08, 0xf9, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x14, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x00, 0x00, 0x00, 0x03, 0x72, 0x65, 0x64, 0x67, 0x44, 0x6f, 0x6e,
    0x67, 0xf6, 0x7c, 0x00, 0xf8, 0xfa, 0x7c, 0x00, 0x0c, 0x82, 0x4c, 0x00,
    0xdc, 0x06, 0x3a, 0x30, 0x3a, 0x3d, 0x2c, 0x24, 0xb2, 0x26, 0x40, 0x00,
    0xe4, 0x6e, 0x21, 0x01, 0xd4, 0xf6, 0x7c, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x00, 0x00, 0xf0, 0x41,
    0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x16, 0x44,
    0x00, 0x00, 0x16, 0x44, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f,
    0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40, 0x00, 0x00, 0x00, 0x00,
    0xc0, 0x52, 0xe3, 0x40, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xd7, 0xe1, 0x40,
    0x5a, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00,
    0xa8, 0xfc, 0x7c, 0x00, 0xca, 0x26, 0x40, 0x00, 0x5e, 0x2e, 0x00, 0x00,
    0x08, 0xf9, 0x7c, 0x00, 0x67, 0x69, 0x4c, 0x01, 0x30, 0x31, 0x40, 0x00,
    0x89, 0x2e, 0x40, 0x00, 0x97, 0x2e, 0x40, 0x00, 0x00, 0x35, 0x40, 0x00,
    0x87, 0x69, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x75, 0x40, 0x00,
    0x14, 0x6f, 0x21, 0x01, 0x08, 0x00, 0x7c, 0x00, 0x84, 0xf7, 0x7c, 0x00,
    0x90, 0xf7, 0x7c, 0x00, 0x08, 0xf9, 0x7c, 0x00, 0xe8, 0x1e, 0x98, 0x81,
    0x10, 0xfb, 0x06, 0xc9, 0xed, 0xb7, 0xdd, 0xd6, 0xa4, 0xf9, 0x7c, 0x00,
    0x10, 0x00, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00,
    0xe0, 0xfa, 0x7c, 0x00, 0xd5, 0x68, 0xf7, 0xbf, 0x10, 0xfb, 0x00, 0x00,
    0x24, 0xf8, 0x7c, 0x00, 0xeb, 0x82, 0xf8, 0xbf, 0x08, 0xf9, 0x7c, 0x00,
    0x10, 0xfb, 0x7c, 0x00, 0x3c, 0xf8, 0x7c, 0x00, 0x14, 0xf8, 0x7c, 0x00,
    0x5e, 0x69, 0x4c, 0x00, 0xcc, 0xf9, 0x7c, 0x00, 0x7c, 0xf9, 0x7c, 0x00,
    0xe4, 0x6e, 0x21, 0x01, 0x00, 0xd0, 0xa1, 0xc2, 0xed, 0x20, 0xc9, 0xed,
    0xb7, 0xdd, 0xd6, 0xa4, 0x34, 0x31, 0x30, 0x31, 0x30, 0x33, 0x38, 0x31,
    0x31, 0x30, 0x32, 0x34, 0x31, 0x38, 0x37, 0x00, 0x08, 0xf9, 0x7c, 0x00,
    0x20, 0xf8, 0x7c, 0x00, 0x2e, 0xde, 0xf9, 0xbf, 0x08, 0xf9, 0x7c, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31, 0x31,
    0x31, 0x31, 0x31, 0x31, 0x31, 0x00, 0x00, 0x00};

const unsigned char array_1[2035] = {
    0x20, 0x12, 0x05, 0x03, 0x21, 0x57, 0x74, 0x2e, 0x63, 0x70, 0x70, 0x20,
    0x3a, 0x20, 0x44, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x73, 0x20, 0x74, 0x68,
    0x65, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x20, 0x62, 0x65, 0x68, 0x61,
    0x76, 0x69, 0x6f, 0x72, 0x73, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x74, 0x68,
    0x65, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f,
    0x6e, 0x2e, 0x0d, 0x0a, 0x2f, 0x2f, 0x0d, 0x0a, 0x0d, 0x0a, 0x23, 0x69,
    0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x22, 0x73, 0x74, 0x64, 0x61,
    0x66, 0x78, 0x2e, 0x68, 0x22, 0x0d, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c,
    0x75, 0x64, 0x65, 0x20, 0x22, 0x54, 0x65, 0x73, 0x74, 0x2e, 0x68, 0x22,
    0x0d, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x22,
    0x54, 0x65, 0x73, 0x74, 0x44, 0x6c, 0x67, 0x2e, 0x68, 0x22, 0x0d, 0x0a,
    0x0d, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x5f, 0x44, 0x45,
    0x42, 0x55, 0x47, 0x0d, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65,
    0x20, 0x6e, 0x65, 0x77, 0x20, 0x44, 0x45, 0x42, 0x55, 0x47, 0x5f, 0x4e,
    0x45, 0x57, 0x0d, 0x0a, 0x23, 0x75, 0x6e, 0x64, 0x65, 0x66, 0x20, 0x54,
    0x48, 0x49, 0x53, 0x5f, 0x46, 0x49, 0x4c, 0x45, 0x0d, 0x0a, 0x73, 0x74,
    0x61, 0x74, 0x69, 0x63, 0x20, 0x63, 0x68, 0x61, 0x72, 0x20, 0x54, 0x48,
    0x49, 0x53, 0x5f, 0x46, 0x49, 0x4c, 0x45, 0x5b, 0x5d, 0x20, 0x3d, 0x20,
    0x5f, 0x5f, 0x46, 0x49, 0x4c, 0x45, 0x5f, 0x5f, 0x3b, 0x0d, 0x0a, 0x23,
    0x65, 0x6e, 0x64, 0x69, 0x66, 0x0d, 0x0a, 0x0d, 0x0a, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x0d, 0x0a, 0x2f, 0x2f, 0x20, 0x43, 0x54, 0x65, 0x73, 0x74,
    0x41, 0x70, 0x70, 0x0d, 0x0a, 0x0d, 0x0a, 0x42, 0x45, 0x47, 0x49, 0x4e,
    0x5f, 0x4d, 0x45, 0x53, 0x53, 0x41, 0x47, 0x45, 0x5f, 0x4d, 0x41, 0x50,
    0x28, 0x43, 0x54, 0x65, 0x73, 0x74, 0x41, 0x70, 0x70, 0x2c, 0x20, 0x43,
    0x57, 0x69, 0x6e, 0x41, 0x70, 0x70, 0x29, 0x0d, 0x0a, 0x09, 0x2f, 0x2f,
    0x7b, 0x7b, 0x41, 0x46, 0x58, 0x5f, 0x4d, 0x53, 0x47, 0x5f, 0x4d, 0x41,
    0x50, 0x28, 0x43, 0x54, 0x65, 0x73, 0x74, 0x41, 0x70, 0x70, 0x29, 0x0d,
    0x0a, 0x09, 0x09, 0x2f, 0x2f, 0x20, 0x4e, 0x4f, 0x54, 0x45, 0x20, 0x2d,
    0x20, 0x74, 0x68, 0x65, 0x20, 0x43, 0x6c, 0x61, 0x73, 0x73, 0x57, 0x69,
    0x7a, 0x61, 0x72, 0x64, 0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20, 0x61, 0x64,
    0x64, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65,
    0x20, 0x6d, 0x61, 0x70, 0x70, 0x69, 0x6e, 0x67, 0x20, 0x6d, 0x61, 0x63,
    0x72, 0x6f, 0x73, 0x20, 0x68, 0x65, 0x72, 0x65, 0x2e, 0x0d, 0x0a, 0x09,
    0x09, 0x2f, 0x2f, 0x20, 0x20, 0x20, 0x20, 0x44, 0x4f, 0x20, 0x4e, 0x4f,
    0x54, 0x20, 0x45, 0x44, 0x49, 0x54, 0x20, 0x77, 0x68, 0x61, 0x74, 0x20,
    0x79, 0x6f, 0x75, 0x20, 0x73, 0x65, 0x65, 0x20, 0x69, 0x6e, 0x20, 0x74,
    0x68, 0x65, 0x73, 0x65, 0x20, 0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x73, 0x20,
    0x6f, 0x66, 0x20, 0x67, 0x65, 0x6e, 0x65, 0x72, 0x61, 0x74, 0x65, 0x64,
    0x20, 0x63, 0x6f, 0x64, 0x65, 0x21, 0x0d, 0x0a, 0x09, 0x2f, 0x2f, 0x7d,
    0x7d, 0x41, 0x46, 0x58, 0x5f, 0x4d, 0x53, 0x47, 0x0d, 0x0a, 0x09, 0x4f,
    0x4e, 0x5f, 0x43, 0x4f, 0x4d, 0x4d, 0x41, 0x4e, 0x44, 0x28, 0x49, 0x44,
    0x5f, 0x48, 0x45, 0x4c, 0x50, 0x2c, 0x20, 0x43, 0x57, 0x69, 0x6e, 0x41,
    0x70, 0x70, 0x3a, 0x3a, 0x4f, 0x6e, 0x48, 0x65, 0x6c, 0x70, 0x29, 0x0d,
    0x0a, 0x45, 0x4e, 0x44, 0x5f, 0x4d, 0x45, 0x53, 0x53, 0x41, 0x47, 0x45,
    0x5f, 0x4d, 0x41, 0x50, 0x28, 0x29, 0x0d, 0x0a, 0x0d, 0x0a, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x0d, 0x0a, 0x2f, 0x2f, 0x20, 0x43, 0x54, 0x65, 0x73,
    0x74, 0x41, 0x70, 0x70, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x72, 0x75,
    0x63, 0x74, 0x69, 0x6f, 0x6e, 0x0d, 0x0a, 0x0d, 0x0a, 0x43, 0x54, 0x65,
    0x73, 0x74, 0x41, 0x70, 0x70, 0x3a, 0x3a, 0x43, 0x54, 0x65, 0x73, 0x74,
    0x41, 0x70, 0x70, 0x28, 0x29, 0x0d, 0x0a, 0x7b, 0x0d, 0x0a, 0x09, 0x2f,
    0x2f, 0x20, 0x54, 0x4f, 0x44, 0x4f, 0x3a, 0x20, 0x61, 0x64, 0x64, 0x20,
    0x63, 0x6f, 0x6e, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x69, 0x6f, 0x6e,
    0x20, 0x63, 0x6f, 0x64, 0x65, 0x20, 0x68, 0x65, 0x72, 0x65, 0x2c, 0x0d,
    0x0a, 0x09, 0x2f, 0x2f, 0x20, 0x50, 0x6c, 0x61, 0x63, 0x65, 0x20, 0x61,
    0x6c, 0x6c, 0x20, 0x73, 0x69, 0x67, 0x6e, 0x69, 0x66, 0x69, 0x63, 0x61,
    0x6e, 0x74, 0x20, 0x69, 0x6e, 0x69, 0x74, 0x69, 0x61, 0x6c, 0x69, 0x7a,
    0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x49, 0x6e, 0x69,
    0x74, 0x49, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x63, 0x65, 0x0d, 0x0a, 0x7d,
    0x0d, 0x0a, 0x0d, 0x0a, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x0d, 0x0a, 0x2f,
    0x2f, 0x20, 0x54, 0x68, 0x65, 0x20, 0x6f, 0x6e, 0x65, 0x20, 0x61, 0x6e,
    0x64, 0x20, 0x6f, 0x6e, 0x6c, 0x79, 0x20, 0x43, 0x54, 0x65, 0x73, 0x74,
    0x41, 0x70, 0x70, 0x20, 0x6f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x0d, 0x0a,
    0x0d, 0x0a, 0x43, 0x54, 0x65, 0x73, 0x74, 0x41, 0x70, 0x70, 0x20, 0x74,
    0x68, 0x65, 0x41, 0x70, 0x70, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f,
    0x2f, 0x2f, 0x2f, 0x0d, 0x0a, 0x2f, 0x2f, 0x20, 0x43, 0x54, 0x65, 0x73,
    0x74, 0x41, 0x70, 0x70, 0x20, 0x69, 0x6e, 0x69, 0x74, 0x69, 0x61, 0x6c,
    0x69, 0x7a, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0d, 0x0a, 0x0d, 0x0a, 0x42,
    0x4f, 0x4f, 0x4c, 0x20, 0x43, 0x54, 0x65, 0x73, 0x74, 0x41, 0x70, 0x70,
    0x3a, 0x3a, 0x49, 0x6e, 0x69, 0x74, 0x49, 0x6e, 0x73, 0x74, 0x61, 0x6e,
    0x63, 0x65, 0x28, 0x29, 0x0d, 0x0a, 0x7b, 0x0d, 0x0a, 0x09, 0x41, 0x66,
    0x78, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x43, 0x6f, 0x6e, 0x74, 0x72,
    0x6f, 0x6c, 0x43, 0x6f, 0x6e, 0x74, 0x61, 0x69, 0x6e, 0x65, 0x72, 0x28,
    0x29, 0x3b, 0x0d, 0x0a, 0x0d, 0x0a, 0x09, 0x2f, 0x2f, 0x20, 0x53, 0x74,
    0x61, 0x6e, 0x64, 0x61, 0x72, 0x64, 0x20, 0x69, 0x6e, 0x69, 0x74, 0x69,
    0x61, 0x6c, 0x69, 0x7a, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0d, 0x0a, 0x09,
    0x2f, 0x2f, 0x20, 0x49, 0x66, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x61, 0x72,
    0x65, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20,
    0x74, 0x68, 0x65, 0x73, 0x65, 0x20, 0x66, 0x65, 0x61, 0x74, 0x75, 0x72,
    0x65, 0x73, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x77, 0x69, 0x73, 0x68, 0x20,
    0x74, 0x6f, 0x20, 0x72, 0x65, 0x64, 0x75, 0x63, 0x65, 0x20, 0x74, 0x68,
    0x65, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x0d, 0x0a, 0x09, 0x2f, 0x2f, 0x20,
    0x20, 0x6f, 0x66, 0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x66, 0x69, 0x6e,
    0x61, 0x6c, 0x20, 0x65, 0x78, 0x65, 0x63, 0x75, 0x74, 0x61, 0x62, 0x6c,
    0x65, 0x2c, 0x20, 0x79, 0x6f, 0x75, 0x20, 0x73, 0x68, 0x6f, 0x75, 0x6c,
    0x64, 0x20, 0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x20, 0x66, 0x72, 0x6f,
    0x6d, 0x20, 0x74, 0x68, 0x65, 0x20, 0x66, 0x6f, 0x6c, 0x6c, 0x6f, 0x77,
    0x69, 0x6e, 0x67, 0x0d, 0x0a, 0x09, 0x2f, 0x2f, 0x20, 0x20, 0x74, 0x68,
    0x65, 0x20, 0x73, 0x70, 0x65, 0x63, 0x69, 0x66, 0x69, 0x63, 0x20, 0x69,
    0x6e, 0x69, 0x74, 0x69, 0x61, 0x6c, 0x69, 0x7a, 0x61, 0x74, 0x69, 0x6f,
    0x6e, 0x20, 0x72, 0x6f, 0x75, 0x74, 0x69, 0x6e, 0x65, 0x73, 0x20, 0x79,
    0x6f, 0x75, 0x20, 0x64, 0x6f, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x6e, 0x65,
    0x65, 0x64, 0x2e, 0x0d, 0x0a, 0x0d, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65,
    0x66, 0x20, 0x5f, 0x41, 0x46, 0x58, 0x44, 0x4c, 0x4c, 0x0d, 0x0a, 0x09,
    0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x33, 0x64, 0x43, 0x6f, 0x6e, 0x74,
    0x72, 0x6f, 0x6c, 0x73, 0x28, 0x29, 0x3b, 0x09, 0x09, 0x09, 0x2f, 0x2f,
    0x20, 0x43, 0x61, 0x6c, 0x6c, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x77,
    0x68, 0x65, 0x6e, 0x20, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x4d, 0x46,
    0x43, 0x20, 0x69, 0x6e, 0x20, 0x61, 0x20, 0x73, 0x68, 0x61, 0x72, 0x65,
    0x64, 0x20, 0x44, 0x4c, 0x4c, 0x0d, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65,
    0x0d, 0x0a, 0x09, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x33, 0x64, 0x43,
    0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x73, 0x53, 0x74, 0x61, 0x74, 0x69,
    0x63, 0x28, 0x29, 0x3b, 0x09, 0x2f, 0x2f, 0x20, 0x43, 0x61, 0x6c, 0x6c,
    0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x77, 0x68, 0x65, 0x6e, 0x20, 0x6c,
    0x69, 0x6e, 0x6b, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x6f, 0x20, 0x4d, 0x46,
    0x43, 0x20, 0x73, 0x74, 0x61, 0x74, 0x69, 0x63, 0x61, 0x6c, 0x6c, 0x79,
    0x0d, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0d, 0x0a, 0x0d, 0x0a,
    0x09, 0x43, 0x54, 0x65, 0x73, 0x74, 0x44, 0x6c, 0x67, 0x20, 0x64, 0x6c,
    0x67, 0x3b, 0x0d, 0x0a, 0x09, 0x6d, 0x5f, 0x70, 0x4d, 0x61, 0x69, 0x6e,
    0x57, 0x6e, 0x64, 0x20, 0x3d, 0x20, 0x26, 0x64, 0x6c, 0x67, 0x3b, 0x0d,
    0x0a, 0x09, 0x69, 0x6e, 0x74, 0x20, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f,
    0x6e, 0x73, 0x65, 0x20, 0x3d, 0x20, 0x64, 0x6c, 0x67, 0x2e, 0x44, 0x6f,
    0x4d, 0x6f, 0x64, 0x61, 0x6c, 0x28, 0x29, 0x3b, 0x0d, 0x0a, 0x09, 0x69,
    0x66, 0x20, 0x28, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65,
    0x20, 0x3d, 0x3d, 0x20, 0x49, 0x44, 0x4f, 0x4b, 0x29, 0x0d, 0x0a, 0x09,
    0x7b, 0x0d, 0x0a, 0x09, 0x09, 0x2f, 0x2f, 0x20, 0x54, 0x4f, 0x44, 0x4f,
    0x3a, 0x20, 0x50, 0x6c, 0x61, 0x63, 0x65, 0x20, 0x63, 0x6f, 0x64, 0x65,
    0x20, 0x68, 0x65, 0x72, 0x65, 0x20, 0x74, 0x6f, 0x20, 0x68, 0x61, 0x6e,
    0x64, 0x6c, 0x65, 0x20, 0x77, 0x68, 0x65, 0x6e, 0x20, 0x74, 0x68, 0x65,
    0x20, 0x64, 0x69, 0x61, 0x6c, 0x6f, 0x67, 0x20, 0x69, 0x73, 0x0d, 0x0a,
    0x09, 0x09, 0x2f, 0x2f, 0x20, 0x20, 0x64, 0x69, 0x73, 0x6d, 0x69, 0x73,
    0x73, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x4f, 0x4b, 0x0d,
    0x0a, 0x09, 0x7d, 0x0d, 0x0a, 0x09, 0x65, 0x6c, 0x73, 0x65, 0x20, 0x69,
    0x66, 0x20, 0x28, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65,
    0x20, 0x3d, 0x3d, 0x20, 0x49, 0x44, 0x43, 0x41, 0x4e, 0x43, 0x45, 0x4c,
    0x29, 0x0d, 0x0a, 0x09, 0x7b, 0x0d, 0x0a, 0x09, 0x09, 0x2f, 0x2f, 0x20,
    0x54, 0x4f, 0x44, 0x4f, 0x3a, 0x20, 0x50, 0x6c, 0x61, 0x63, 0x65, 0x20,
    0x63, 0x6f, 0x64, 0x65, 0x20, 0x68, 0x65, 0x72, 0x65, 0x20, 0x74, 0x6f,
    0x20, 0x68, 0x61, 0x6e, 0x64, 0x6c, 0x65, 0x20, 0x77, 0x68, 0x65, 0x6e,
    0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x69, 0x61, 0x6c, 0x6f, 0x67, 0x20,
    0x69, 0x73, 0x0d, 0x0a, 0x09, 0x09, 0x2f, 0x2f, 0x20, 0x20, 0x64, 0x69,
    0x73, 0x6d, 0x69, 0x73, 0x73, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68,
    0x20, 0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x0d, 0x0a, 0x09, 0x7d, 0x0d,
    0x0a, 0x0d, 0x0a, 0x09, 0x2f, 0x2f, 0x20, 0x53, 0x69, 0x6e, 0x63, 0x65,
    0x20, 0x74, 0x68, 0x65, 0x20, 0x64, 0x69, 0x61, 0x6c, 0x6f, 0x67, 0x20,
    0x68, 0x61, 0x73, 0x20, 0x62, 0x65, 0x65, 0x6e, 0x20, 0x63, 0x6c, 0x6f,
    0x73, 0x65, 0x64, 0x2c, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20,
    0x46, 0x41, 0x4c, 0x53, 0x45, 0x20, 0x73, 0x6f, 0x20, 0x74, 0x68, 0x61,
    0x74, 0x20, 0x77, 0x65, 0x20, 0x65, 0x78, 0x69, 0x74, 0x20, 0x74, 0x68,
    0x65, 0x0d, 0x0a, 0x09, 0x2f, 0x2f, 0x20, 0x20, 0x61, 0x70, 0x70, 0x6c,
    0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x72, 0x61, 0x74,
    0x68, 0x65, 0x72, 0x20, 0x74, 0x68, 0x61, 0x6e, 0x20, 0x73, 0x74, 0x61,
    0x72, 0x74, 0x20, 0x74, 0x68, 0x65, 0x20, 0x61, 0x70, 0x70, 0x6c, 0x69,
    0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x27, 0x73, 0x20, 0x6d, 0x65, 0x73,
    0x73, 0x61, 0x67, 0x65, 0x20, 0x70, 0x75, 0x6d, 0x70, 0x2e, 0x0d, 0x0a,
    0x09, 0x72, 0xe6, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x46, 0x41, 0x4c, 0x53,
    0x45, 0x3b, 0x0d, 0x0a, 0x7d, 0x0d, 0xe6};

unsigned char *computeV4(const unsigned char *src, int len) {
  static unsigned char buf[0x100];
  static unsigned char s[20];
  memcpy(s, src, 16);

  unsigned char wtmp[160];
  int wpos = 0;
  int i;

  uint32_t v4_check_type = ((signed char)s[0] + (signed char)s[3]) % 5u;
  printf("V4 type: %d\n", v4_check_type);
  switch (v4_check_type) {
    case 0: {
      unsigned char mtmp[16];
      md5_ctx mctx;

      rhash_md5_init(&mctx);
      rhash_md5_update(&mctx, array, 0x71c);
      rhash_md5_final(&mctx, mtmp);
      char tbuf[10];
      for (i = 0; i < 16; ++i) {
        sprintf((char *)wtmp + wpos, "%02x", mtmp[i]);
        wpos += 2;
      }

      for (i = 0; i < 8; ++i) {
        sprintf(tbuf, "%02x", (signed char)(s[2 * i]));
        strcpy((char *)wtmp + wpos, tbuf);
        wpos += strlen(tbuf);
      }

      rhash_md5_init(&mctx);
      rhash_md5_update(&mctx, array_1, 0x7f3);
      rhash_md5_final(&mctx, mtmp);
      for (i = 0; i < 16; ++i) {
        sprintf((char *)wtmp + wpos, "%02x", mtmp[i]);
        wpos += 2;
      }
      for (i = 0; i < 8; ++i) {
        sprintf(tbuf, "%02x", (signed char)(s[2 * i + 1]));
        strcpy((char *)wtmp + wpos, tbuf);
        wpos += strlen(tbuf);
      }
      wpos = 0x60;
      break;
    }
    case 1: {
      sha1_ctx sctx;
      rhash_sha1_init(&sctx);
      rhash_sha1_update(&sctx, array_1, 0x7f3);
      rhash_sha1_final(&sctx, wtmp);
      wpos += 20;

      memcpy(wtmp + wpos, s, 6);
      wpos += 6;

      rhash_sha1_init(&sctx);
      rhash_sha1_update(&sctx, array, 0x71c);
      rhash_sha1_final(&sctx, wtmp + wpos);
      wpos += 20;

      memcpy(wtmp + wpos, s + 6, 10);
      wpos += 10;
      break;
    }
    case 2: {
      sha1_ctx sctx;
      rhash_sha1_init(&sctx);
      rhash_sha1_update(&sctx, array_1, 0x7f3);
      rhash_sha1_final(&sctx, wtmp);
      wpos += 20;

      memcpy(wtmp + wpos, s, 6);
      wpos += 6;

      struct ampheck_ripemd128 rctx;
      ampheck_ripemd128_init(&rctx);
      ampheck_ripemd128_update(&rctx, array, 0x71c);
      ampheck_ripemd128_finish(&rctx, wtmp + wpos);
      wpos += 16;

      memcpy(wtmp + wpos, s + 6, 10);
      wpos += 10;
      break;
    }
    case 3: {
      tiger_ctx tctx;
      rhash_tiger_init(&tctx);
      rhash_tiger_update(&tctx, array, 0x71c);
      rhash_tiger_final(&tctx, wtmp);
      wpos += 24;

      memcpy(wtmp + wpos, s, 10);
      wpos += 10;

      struct ampheck_ripemd128 rctx;
      ampheck_ripemd128_init(&rctx);
      ampheck_ripemd128_update(&rctx, array_1, 0x7f3);
      ampheck_ripemd128_finish(&rctx, wtmp + wpos);
      wpos += 16;

      memcpy(wtmp + wpos, s + 10, 6);
      wpos += 6;
      break;
    }
    case 4: {
      tiger_ctx tctx;
      rhash_tiger_init(&tctx);
      rhash_tiger_update(&tctx, array_1, 0x7f3);
      rhash_tiger_final(&tctx, wtmp);
      wpos += 24;

      memcpy(wtmp + wpos, s, 8);
      wpos += 8;

      sha1_ctx sctx;
      rhash_sha1_init(&sctx);
      rhash_sha1_update(&sctx, array, 0x71c);
      rhash_sha1_final(&sctx, wtmp + wpos);
      wpos += 20;

      memcpy(wtmp + wpos, s + 8, 8);
      wpos += 8;
      break;
    }
    default: {
      return NULL;
    }
  }
  whirlpool_ctx w;
  static unsigned char digest[100];

  rhash_whirlpool_init(&w);
  rhash_whirlpool_update(&w, wtmp, wpos);
  rhash_whirlpool_final(&w, digest);

  char tbuf[10];
  for (i = 0; i < 64; ++i) {
    sprintf(tbuf, "%02x", digest[i]);
    buf[2 * i] = tbuf[0];
    buf[2 * i + 1] = tbuf[1];
  }
  return buf;
}

char *computePwd(const unsigned char *md5) {
  static char buf[20];
  extern char *username;
  extern unsigned int username_length;
  extern char *password;

  unsigned char tmp[40];
  int tmpl = 0;
  tmpl = username_length;
  strcpy((char *)tmp, username);
  memcpy(tmp + tmpl, md5, 16);
  tmpl += 16;

  memcpy(buf, ComputeHash(tmp, tmpl), 16);

  memset(tmp, 0, 16);
  strcpy((char *)tmp, password);

  int i;
  for (i = 0; i < 16; ++i) buf[i] ^= tmp[i];
  return buf;
}

u_char *checkPass(u_char id, const u_char *md5Seed, int seedLen) {
  u_char md5Src[80];
  extern char *password;
  extern unsigned int password_length;
  int md5Len = password_length;
  md5Src[0] = id;
  memcpy(md5Src + 1, password, md5Len);
  md5Len++;

  memcpy(md5Src + md5Len, md5Seed, seedLen);
  md5Len += seedLen;
  return ComputeHash(md5Src, md5Len);
}
