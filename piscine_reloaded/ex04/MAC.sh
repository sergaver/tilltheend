ifconfig | grep 'ether ' | sed 's/ether //' | cut -c 2-24
