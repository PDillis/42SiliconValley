ldapsearch -LLL -Q "uid=z*" cn | grep "cn:" | sed -e "s/cn://g" | sort -d -f -r
