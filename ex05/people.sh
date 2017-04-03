#! /bin/sh

ldapsearch -LLL "(uid=z*)" cn 2>&1 |grep cn: |cut -c 5- |sort -fr
echo 0