# Description

`[code -> executable]`

## Bazel

```console
$ bazel build //:project_2
INFO: Analyzed target //:project_2 (0 packages loaded, 0 targets configured).
INFO: Found 1 target...
Target //:project_2 up-to-date:
  bazel-bin/project_2.exe
INFO: Elapsed time: 0.129s, Critical Path: 0.01s
INFO: 1 process: 1 internal.
INFO: Build completed successfully, 1 total action

$ "bazel-bin/project_2.exe" 
foobar

```
