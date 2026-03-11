import ctypes
import pathlib

dll_path = pathlib.Path(__file__).parent / "PhoneticEngine.dll"
dll = ctypes.CDLL(str(dll_path))

dll.syllable_count.argtypes = [ctypes.c_char_p]
dll.syllable_count.restype = ctypes.c_int

print(dll.letter_count(b"hellodada"))