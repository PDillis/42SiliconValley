read -p "FT_LINE1: " FT_LINE1
read -p "FT_LINE2: " FT_LINE2
cat /etc/passwd | grep -v '^#' | cut -d : -f 1 | sed -n "n;p" | rev | sort -r | awk "NR==$FT_LINE1,NR==$FT_LINE2" | tr '\n' ' ' | sed -e 's/ $/\./' -e 's/ /, /g' 
