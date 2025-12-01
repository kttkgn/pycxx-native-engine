# 使用示例（假设已成功构建并将扩展模块放在 Python path）
from pyc_accelerator import Algo

a = Algo()
print(a.checksum(b"hello world"))
print(a.checksum_batch([b"hello", b"world", b"!\n"])) 
