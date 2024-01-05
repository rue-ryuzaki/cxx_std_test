#undef _STANDARD_DETERMINED

#ifdef _MSVC_LANG
#if _MSVC_LANG >= 202002L
#define _STANDARD_DETERMINED 20
#elif _MSVC_LANG >= 201703L
#define _STANDARD_DETERMINED 17
#elif _MSVC_LANG >= 201402L
#define _STANDARD_DETERMINED 14
#elif _MSVC_LANG >= 201103L
#define _STANDARD_DETERMINED 11
#else
#define _STANDARD_DETERMINED 98
#endif  // C++20+
#else
#if __cplusplus >= 202002L
#define _STANDARD_DETERMINED 20
#elif __cplusplus >= 201703L
#define _STANDARD_DETERMINED 17
#elif __cplusplus >= 201402L
#define _STANDARD_DETERMINED 14
#elif __cplusplus >= 201103L
#define _STANDARD_DETERMINED 11
#else
#define _STANDARD_DETERMINED 98
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