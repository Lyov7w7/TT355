#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "System Information\n------------------\n";

    std::cout << "CPU Info:\n";
    std::system("uname -p");
    std::system("nproc 2>/dev/null || sysctl -n hw.ncpu");  // CPU cores

    std::cout << "\nOS Version:\n";
    std::system("uname -a");

    std::cout << "\nMemory Info:\n";
    std::system("free -h 2>/dev/null || vm_stat");

    std::cout << "\nDisk Info:\n";
    std::system("lsblk 2>/dev/null || df -h");

    std::cout << "\nMAC Addresses:\n";
    std::system("ip link | awk '/link\\/ether/ {print $2}' 2>/dev/null || ifconfig | awk '/ether/ {print $2}'");

    return 0;
}
