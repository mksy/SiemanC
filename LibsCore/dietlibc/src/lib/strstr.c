#include <sys/types.h>
#include <string.h>
#include <swihelper.h>



#ifndef __BUILDIN_FUNCTIONS
char *strstr(const char *haystack, const char *needle) {
    size_t nl=strlen(needle);
    size_t hl=strlen(haystack);
    size_t i;
    if (!nl) goto found;
    if (nl>hl) return 0;
    for (i=hl-nl+1; __likely(i); --i) {
        if (*haystack==*needle && !memcmp(haystack,needle,nl))
found:
            return (char*)haystack;
        ++haystack;
    }
    return 0;
}
#else

char *strstr(const char *haystack, const char *needle) {
    __def_noinline(0x0118, char *, haystack, needle)
}


#endif
