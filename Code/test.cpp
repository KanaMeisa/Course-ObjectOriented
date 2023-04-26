#include <iostream>
#include <cstring>
using namespace std;

void strcpy_s(char* dest, size_t dest_size, const char* src) {
    if (dest == nullptr || src == nullptr || dest_size == 0) {
        // 参数错误
        return;
    }

    // 复制字符串
    size_t src_size = strlen(src);
    if (src_size >= dest_size) {
        // 目标缓冲区太小
        dest[0] = '\0';
        return;
    }
    strcpy(dest, src);
}

class Human {
public:
    

}