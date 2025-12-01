\
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "../cppsrc/wrapper.hpp"

namespace py = pybind11;

PYBIND11_MODULE(pyc_accelerator, m) {
    m.doc() = "pyc_accelerator example module (C + C++ + pybind11)";
    py::class_<AlgoWrapper>(m, "Algo")
        .def(py::init<>())
        .def("checksum", [](AlgoWrapper &self, py::bytes b) {
            // 将 Python bytes 转为 vector<unsigned char>
            std::string s = b;
            std::vector<unsigned char> v(s.begin(), s.end());
            return self.checksum(v);
        })
        .def("checksum_batch", [](AlgoWrapper &self, std::vector<py::bytes> arr) {
            std::vector<std::vector<unsigned char>> inputs;
            inputs.reserve(arr.size());
            for (auto &b : arr) {
                std::string s = b;
                inputs.emplace_back(s.begin(), s.end());
            }
            return self.checksum_batch(inputs);
        });
}
