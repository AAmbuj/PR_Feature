load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
    name = "calculator",
    srcs = ["calculator.cpp"],
    hdrs = ["calculator.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "calculator_test",
    size = "small",
    srcs = ["calculator_test.cpp"],
    deps = [
        ":calculator",
        "@googletest//:gtest_main",
    ],
)
