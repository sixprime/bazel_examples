#pragma once

#if defined(HYDRA_SHARED_LIBRARY)
    #if defined(HYDRA_EXPORT)
        #define HYDRA_API __declspec(dllexport)
    #else
        #define HYDRA_API __declspec(dllimport)
    #endif
#else
    #define HYDRA_API
#endif

extern "C"
{

class HYDRA_API hydra
{
public:
    void awake();
};

} // extern "C"

extern "C" HYDRA_API char* get_time();
extern "C" HYDRA_API void say_hello(char *);
