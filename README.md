# superexceptions

## What

Supercharged C++ exceptions with support for source location and formatted strings, leveraging [fmt](https://github.com/fmtlib/fmt). Once you move to C++20, the external dependencies to *fmt* can be replaced by standard library headers. Requires C++17.

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


## How

This is a header-only library. Simply include the file [superexceptions.hpp](https://github.com/lheer/superexceptions/blob/main/include/lh/superexceptions.hpp) to your project and compile/link against [fmt](https://github.com/fmtlib/fmt).
