#!/bin/bash

echo "System Information"
echo "------------------"

echo "CPU Info:"
sysctl -n machdep.cpu.brand_string

echo "CPU ID (UUID):"
ioreg -rd1 -c IOPlatformExpertDevice | awk '/IOPlatformUUID/ {print $3}' | tr -d '"'

echo "Memory:"
vm_stat | awk '
BEGIN {print "Used / Free / Total:"}
/Pages/ { 
    free += $3 
}
END { 
    total = free + 0
    printf("%.2f GB\n", free * 4096 / (1024*1024*1024))
}'

echo "Disk:"
diskutil list

echo "MAC address(es):"
ifconfig | awk '/ether/{print $2}'

echo "OS version:"
sw_vers
