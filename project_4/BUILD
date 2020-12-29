load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "project_4",
    srcs = glob(["src/**/*.cpp"]),
    includes = ["include/"],
    deps = ["//lib/hydra:hydra"],
    copts = ["/DHYDRA_SHARED_LIBRARY"],
    linkstatic = False
)
