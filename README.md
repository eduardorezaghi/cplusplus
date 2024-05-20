# C++ learning

This repository holds code and notes for my personal journey of learning C++.  
I am using the book "C++ Primer" by Stanley B. Lippman, Josée Lajoie, and Barbara E. Moo as my primary resource, but I also use Udemy's Beginning C++ Programming - From Beginner to Beyond course by Tim Buchalka and Dr. Frank Mitropoulos."  

### Downloading the book
You can download the book from the following link:
[Download C++ Primer](https://www.pdfdrive.com/c-primer-5th-edition-e15825891.html)

### Running a C++ program
To run a C++ program, you need to compile it first.
For that, you need a compiler toolchain, such as:
- MinGW with the GCC compiler (for Windows)
- GCC (GNU Compiler Collection) (for Linux)
- Clang (for Linux or MacOS)
- MSVC (Microsoft Visual C++) (for Windows)
- Meson/Ninja (for Linux)

To compile the programs, I'll use the latest C++ standard, which is C++23:
- -Wall: Show all warnings
- -std=c++23: Use the C++23 standard

In Windows, I use the MinGW compiler toolchain:
```bash
# One-liner for compilling and running the code
g++ -Wall -std=c++23 basics/helloworld.cpp -o basics/helloworld && ./basics/helloworld
```

In Linux, you can use the GNU compiler toolchain (which is the same line as above) or the Clang compiler toolchain:
```bash
clang++ -o <output_file> <source_file> && <output_file>
```
Using Meson/Ninja:
```bash
meson build
ninja -C build
./build/<output_file>
```