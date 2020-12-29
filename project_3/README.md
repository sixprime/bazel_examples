# Description

`[code + static_lib -> executable]`

## Bazel

```console
$ bazel build //:project_3  
INFO: Analyzed target //:project_3 (2 packages loaded, 6 targets configured).
INFO: Found 1 target...
Target //:project_3 up-to-date:
  bazel-bin/project_3.exe
INFO: Elapsed time: 0.743s, Critical Path: 0.60s
INFO: 7 processes: 4 internal, 3 local.
INFO: Build completed successfully, 7 total actions

$ "bazel-bin/project_3.exe" 
foobar
Tue Dec 29 00:11:42 2020

```
