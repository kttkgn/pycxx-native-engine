import pytest
from pyc_accelerator import Algo

def test_checksum_len():
    a = Algo()
    out = a.checksum(b"hello")
    assert isinstance(out, str)
    assert len(out) == 64

def test_batch():
    a = Algo()
    outs = a.checksum_batch([b"a", b"bc", b""]) 
    assert len(outs) == 3
    for o in outs:
        assert len(o) == 64
