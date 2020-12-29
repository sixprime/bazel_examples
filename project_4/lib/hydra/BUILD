load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "hydra",
    srcs = ["src/hydra.cpp"],
    hdrs = ["include/hydra.hpp"],
    includes = ["include/"],
    copts = [
        "/DHYDRA_SHARED_LIBRARY",
        "/DHYDRA_EXPORT"
    ],
    visibility = ["//visibility:public"],
)
