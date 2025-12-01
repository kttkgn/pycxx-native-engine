\
#include "algo.h"
#include <stdio.h>
#include <string.h>

// 非真实加密的示例 checksum，供演示用
void checksum_hex(const unsigned char *data, size_t len, char *out_hex) {
    unsigned int acc = 0x12345678u;
    for (size_t i = 0; i < len; ++i) {
        acc = (acc * 131u) + data[i];
    }
    // 生成 64 字符的伪 hex（重复 pattern）
    const char *hexchars = "0123456789abcdef";
    for (int i = 0; i < 64; ++i) {
        unsigned int v = (acc + i) & 0xF;
        out_hex[i] = hexchars[v];
    }
    out_hex[64] = '\\0';
}
