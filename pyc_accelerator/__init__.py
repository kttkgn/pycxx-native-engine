# package shim: import the compiled extension module when available.
# After build, the compiled .so/.pyd should be importable as 'pyc_accelerator'.
# This file intentionally left minimal.
try:
    # If the compiled extension is discoverable on sys.path, this import will succeed.
    from .pyc_accelerator import *  # type: ignore
except Exception:
    # fallback: allow python-only import for docs or code editors
    pass
