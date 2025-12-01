#include "wrapper.hpp"
#include <cstring>
#include <stdexcept>
#include <sstream>
#include <iomanip>

std::string AlgoWrapper::checksum(const std::vector<unsigned char>& data) {
    char buf[65];
    // 调用 C 层算法
    checksum_hex(data.empty() ? NULL : data.data(), data.size(), buf);
    return std::string(buf);
}

std::vector<std::string> AlgoWrapper::checksum_batch(const std::vector<std::vector<unsigned char>>& inputs) {
    std::vector<std::string> out;
    out.reserve(inputs.size());
    for (const auto& v : inputs) {
        out.push_back(checksum(v));
    }
    return out;
}
