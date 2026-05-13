#
# Test suite adder tests
#

load("@rules_cc//cc:cc_library.bzl", "cc_library")
load("@rules_cc//cc:cc_test.bzl", "cc_test")

cc_library(
    name = "addertest",
    srcs = [
        "adder_tests.cpp",
    ],
    visibility = ["//test:__pkg__"],
    deps = [
        "//lib/adder",
         "//test/vendor/catch2v3",
    ],
)

cc_test(
    name = "adder",
    srcs = [
        "main.cpp",
    ],
    visibility = ["//test:__pkg__"],
    deps = [
        "addertest",
    ],
)
