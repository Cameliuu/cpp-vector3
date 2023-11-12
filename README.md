# Vector3 Library

The Vector3 library provides a simple C++ class for three-dimensional vectors.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Examples](#examples)
- [Building](#building)
- [Contributing](#contributing)
- [License](#license)

## Features

- Basic vector operations: addition, subtraction, scalar multiplication.
- Magnitude and normalization of vectors.
- Dot and cross product calculations.
- Equality and inequality comparisons.

## Usage

1. **Include the Library:**
   - Include the `Vector3.h` header file in your C++ project.

   ```cpp
   #include "Vector3.h"

2. **Create Vector3 Objects:**
    
    - Create instances of the `Vector3` class using the provided constructors.
    ```cpp
    Vector3 v1(1.0f, 2.0f, 3.0f);
    Vector3 v2(4.0f, 5.0f, 6.0f);
3. **Perform Vector Operations:**
    - Use the various member functions to perform vector operations.
    ```cpp
    Vector3 sum = v1 + v2;
    Vector3 difference = v1 - v2;
    Vector3 scaled = v1 * 2.5f;

## Building
 **To build the library, follow these steps:**
 - Add Vector3.cpp to your project
 - Configure the project settings appropriately (e.g., include directories, linker settings).
 - Build the project.

 ## Contributing
 Contributions are welcome! If you find issues or have suggestions, please open an issue or create a pull request.

 ## LICENSE
  
**This library is licensed under the MIT License - see the LICENSE file for details.**

## Examples

```cpp
#include <iostream>
#include "Vector3.h"

int main() {
    // Create Vector3 objects
    Vector3 v1(1.0f, 2.0f, 3.0f);
    Vector3 v2(4.0f, 5.0f, 6.0f);

    // Perform vector operations
    Vector3 sum = v1 + v2;
    Vector3 difference = v1 - v2;
    Vector3 scaled = v1 * 2.5f;

    // Print results
    std::cout << "Vector v1: " << v1 << std::endl;
    std::cout << "Vector v2: " << v2 << std::endl;
    std::cout << "Sum (v1 + v2): " << sum << std::endl;
    std::cout << "Difference (v1 - v2): " << difference << std::endl;
    std::cout << "Scaled (v1 * 2.5): " << scaled << std::endl;

    // Magnitude and normalization
    float magV1 = v1.Magnitude();
    Vector3 normalizedV1 = v1.Normalize();

    std::cout << "Magnitude of v1: " << magV1 << std::endl;
    std::cout << "Normalized v1: " << normalizedV1 << std::endl;

    // Dot and cross product
    float dotProduct = v1.Dot(v2);
  

    std::cout << "Dot product of v1 and v2: " << dotProduct << std::endl;


    return 0;
} 
