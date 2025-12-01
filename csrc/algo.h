#ifndef ALGO_H
#define ALGO_H

#include <stddef.h>

// 简单示例：计算每个输入 buffer 的简单 checksum（非加密）
// 输入：data 指针，len 长度；输出：32 字符十六进制字符串，需由调用方分配至少 65 字节空间（64 hex + 0）
void checksum_hex(const unsigned char *data, size_t len, char *out_hex);

#endif // ALGO_H
