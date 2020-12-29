load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "project_5",
    srcs = glob(["src/**/*.cpp"]),
    includes = [
        "include/",
        "lib/hydra/include/" # We should be able to replace this specific dependency
                             # by a generic include if we get our plugin arch right.
    ],
    linkstatic = False,
)
