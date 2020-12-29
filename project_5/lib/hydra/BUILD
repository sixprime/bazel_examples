load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "hydra",
    srcs = ["src/hydra.cpp", "include/hydra.hpp"],
    includes = ["include/"],
    copts = [
        "/DHYDRA_SHARED_LIBRARY",
        "/DHYDRA_EXPORT"
    ],
    linkshared = True
)
