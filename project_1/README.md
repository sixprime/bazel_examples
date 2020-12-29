# Description

`[code -> executable]`

## Bazel

```console
$ bazel build //:project_1
INFO: Analyzed target //:project_1 (0 packages loaded, 0 targets configured).
INFO: Found 1 target...
Target //:project_1 up-to-date:
  bazel-bin/project_1.exe
INFO: Elapsed time: 0.127s, Critical Path: 0.01s
INFO: 1 process: 1 internal.
INFO: Build completed successfully, 1 total action

$ "bazel-bin/project_1.exe" 
Hello World!

```
