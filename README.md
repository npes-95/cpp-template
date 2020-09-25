# C++ Template

C++ project template with build (CMake) and testing (Catch) environment.

The project is built against the C++17 standard, make sure your compiler supports it (GCC >= 7, 
Clang >= 5).

## Requirements

Assuming a *nix system, the only requirements are:
- build-essentials (or distro equivalent)
- cmake 3.0.0 or greater

## Build
From the project `root` directory, run:
```
mkdir build
cd build
cmake ..
make
```
Output is the executable `cpp-template`.

## Tests
From the `build` directory run:
```
ctest
```
For more detail, run:
```
./tests/cpp-template-test -s
```