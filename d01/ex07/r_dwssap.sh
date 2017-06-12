# Display `/etc/passwd`, strip lines starting with #, print from line 2 alternating lines, extract logins, sorted, in reverse order, replace newlines with `,`, replace `,` with `, `, and replace `, $` with `.`.
cat /etc/passwd | sed 's/#.*$//' | sed '/^$/d' |sed -n '2,$p;2,$n'| sed 's/:.*[^:]//' |sort | rev | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' "," | sed 's/,/, /g' | sed 's/, $/./'