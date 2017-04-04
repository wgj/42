ldapsearch "(cn=*bon*)" 2>&1|grep search: | sed 's/.*: //'
