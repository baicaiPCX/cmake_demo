# cmake_demo
Standard cmake demo for c++ project of multiple directories

## Usage
### 1.只编译静态库
```
mkdir build
cd build
cmake .. -A x64
cmake --build . --config Release
```
静态库输出到build/lib目录下， 
可执行文件输出到build/bin目录下

### 2.同时编译静态库和动态库
```
mkdir build
cd build
cmake .. -A x64 -D USE_INSTALL=ON
cmake --build . config Release
cmake --install ./
```
静态库和动态库会输出到install_dir目录下，   
可执行文件输出到build/bin目录下