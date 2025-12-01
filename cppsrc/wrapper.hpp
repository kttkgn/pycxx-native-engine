#pragma once
extern "C" {
#include "../csrc/algo.h"
}

#include <string>
#include <vector>

class AlgoWrapper {
public:
    AlgoWrapper() = default;
    // 计算单个 buffer 的 checksum hex（返回 std::string）
    std::string checksum(const std::vector<unsigned char>& data);
    // 批量计算，多输入时可减少 Python/C++ 边界开销
    std::vector<std::string> checksum_batch(const std::vector<std::vector<unsigned char>>& inputs);
};
