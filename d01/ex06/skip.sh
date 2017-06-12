# `-n` suppressing it until explict with sed commands `p` and `n`.
# `p` will print the pattern.
# `n` will print and replace pattern with next line.
find . |sed -n 'p;n'