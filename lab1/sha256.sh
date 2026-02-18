#!/bin/bash

CPU=$(uname -p 2>/dev/null || sysctl -n machdep.cpu.brand_string 2>/dev/null)

MAC=$(ip link | awk '/link\/ether/ {print $2; exit}' 2>/dev/null || ifconfig | awk '/ether/ {print $2; exit}')


DISK=$(df -h / | awk 'NR==2 {print $2}')


INFO="${CPU}_${MAC}_${DISK}"

echo "Info string: $INFO"

HASH=$(echo -n "$INFO" | shasum -a 256 | awk '{print $1}')

echo "SHA256 hash: $HASH"

