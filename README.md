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

Command line output in debug window -
```
Running debug binary
Command: /usr/bin/setsid --wait bazel test --tool_tag=ijwb:CLion --compilation_mode=dbg --strip=never --dynamic_mode=off --fission=yes --copt=-g2 --copt=-O0 --nocache_test_results --test_strategy=exclusive --test_sharding_strategy=disabled --test_timeout=3600 "--run_under='bash' '/home/steve/.local/share/JetBrains/CLion2026.1/clwb/gdb/gdbserver' '/usr/bin/gdbserver' --once localhost:5006 --target" --color=yes --progress_in_terminal_title=no --runs_per_test=1 --flaky_test_attempts=1 --build_event_binary_file=/tmp/intellij-bep-3c11f6ee-5a5b-4462-8e83-14b9b3f6db60 --nobuild_event_binary_file_path_conversion --build_event_publish_all_actions "--test_filter=Adder - Simple" -- //test/adder:adder
```