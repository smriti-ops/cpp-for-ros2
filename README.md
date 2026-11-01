# C++ for ROS 2

My C++ practice on the way to building robots with ROS 2 (Humble).
Each program is small and focused on one concept, with robotics-flavoured examples where possible.

## Programs

| # | File | What it does | Concepts |
|---|------|--------------|----------|
| 01 | [`01_encoder_distance.cpp`](practice/01_encoder_distance.cpp) | Converts wheel encoder ticks into revolutions and distance travelled | `constexpr`, `static_cast`, fixed-width ints, `auto`, `std::boolalpha` |

## Build and run

```bash
g++ -std=c++17 -Wall practice/01_encoder_distance.cpp -o encoder_distance
./encoder_distance
```

## Roadmap

- [x] Basics: types, constants, casting
- [ ] Pointers and references
- [ ] Stack vs heap, dynamic memory
- [ ] Classes and OOP
- [ ] STL containers and algorithms
- [ ] Smart pointers and modern C++ (C++11/14/17)
- [ ] Templates
- [ ] First ROS 2 publisher / subscriber node
