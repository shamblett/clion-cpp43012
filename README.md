# clion-cpp43012
Test repo for Clion issue CPP-43012

1. Sync the repo

2. Build it, ```bazel build //...```

3. Run the tests to check they work, ```bazel test //...```

4. Goto any of the test cases in test/adder/adder_tests.cpp

5. Select the carat in the gutter against any of the test cases and chose debug

6. Test log for the ```"Adder - Simple"``` test case -

```
exec ${PAGER:-/usr/bin/less} "$0" || exit 1
Executing tests from //test/adder:adder
-----------------------------------------------------------------------------
Process test/adder/adder created; pid = 34
Listening on port 5006
Remote debugging from host ::1, port 35896
Warning: Bazel shard configuration is missing 'TEST_SHARD_INDEX'. Shard configuration is skipped.
Warning: Bazel shard configuration is missing 'TEST_TOTAL_SHARDS'. Shard configuration is skipped.
Warning: Bazel shard configuration is missing 'TEST_SHARD_STATUS_FILE'. Shard configuration is skipped.
Filters: "Adder - Simple"
Randomness seeded to: 640862190
No test cases matched '"Adder - Simple"'
===============================================================================
No tests ran


Child exited with status 2
```

If you select to run the test from the carat it works. Also note that the carat entries name the test as 'unnamed' initially,
you have to run them once for the name to appear.