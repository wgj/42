#! /bin/sh 
ldapwhoami 2>&1 |grep uid|awk -F: '{print $2}'