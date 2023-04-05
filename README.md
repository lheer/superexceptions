# superexceptions

## What

Supercharged C++ exceptions with support for source location and formatted strings for pre-c++20, leveraging [fmt](https://github.com/fmtlib/fmt). Once you move to C++20, the external dependencies to *fmt* can be replaced by standard library headers.

## How

Instead of:

```cpp
if (x > threshold)
{
    throw std::runtime_error("Got " + std::to_string(x) + ", expected "  + std::to_string(threshold));
}
```
write:
```cpp
if (x > threshold)
{
    throw lh::FormattedException("Got {}, expected {}", x, threshold);
}
```

Also supports embedding the source location from where the exception was thrown:
```cpp
#include "source_location.hpp"
...
throw lh::LocatedException(nostd::source_location::current(), "Expection: {:#x}", 42);
```
