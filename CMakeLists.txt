    cmake_minimum_required(VERSION 3.10)
    project(minheap)
    set(CMAKE_CXX_STANDARD 17)
    add_executable(minheap main.cpp)
    EOF

    cat > main.cpp << 'EOF'
    #include <iostream>

    int main() {
        return 0;
    }
