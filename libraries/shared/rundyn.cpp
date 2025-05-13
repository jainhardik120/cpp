#include <stdio.h>
#include <dlfcn.h>

int main()
{
    void *handle = dlopen("libdynamic.so", RTLD_NOW);
    if (!handle)
    {
        printf("Error loading library: %s\n", dlerror());
        return 1;
    }
    printf("Library loaded successfully\n");

    typedef void (*fun_t)(int, int);
    fun_t fun = (fun_t)dlsym(handle, "fun");
    if (!fun)
    {
        printf("Error loading symbol: %s\n", dlerror());
        return 1;
    }
    printf("Symbol loaded successfully\n");

    fun(1, 2);
    return 0;
}