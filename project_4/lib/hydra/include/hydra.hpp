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

}
