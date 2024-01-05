#define _STANDARD_DETERMINED 98

#ifdef _MSVC_LANG
#if _MSVC_LANG >= 201103L
#define _STANDARD_DETERMINED 11
#endif  // C++11+
#if _MSVC_LANG >= 201402L
#define _STANDARD_DETERMINED 14
#endif  // C++14+
#if _MSVC_LANG >= 201703L
#define _STANDARD_DETERMINED 17
#endif  // C++17+
#if _MSVC_LANG >= 202002L
#define _STANDARD_DETERMINED 20
#endif  // C++20+
#else
#if __cplusplus >= 201103L
#define _STANDARD_DETERMINED 11
#endif  // C++11+
#if __cplusplus >= 201402L
#define _STANDARD_DETERMINED 14
#endif  // C++14+
#if __cplusplus >= 201703L
#define _STANDARD_DETERMINED 17
#endif  // C++17+
#if __cplusplus >= 202002L
#define _STANDARD_DETERMINED 20
#endif  // C++20+
#endif  // _MSVC_LANG

int main()
{
    if (_STANDARD_DETERMINED == CXX_STANDARD) {
        return 0;
    } else {
        return 1;
    }
}