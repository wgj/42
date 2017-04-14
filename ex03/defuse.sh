#! /bin/sh
/bin/echo `/usr/bin/stat -f '%a' bomb.txt` - 1  | /usr/bin/bc