# Description

`[code + shared_lib -> executable]`

## Bazel

```console
$ bazel build //:project_4
INFO: Analyzed target //:project_4 (2 packages loaded, 6 targets configured).
INFO: Found 1 target...
INFO: From Linking lib/hydra/hydra.dll:
   Creating library bazel-out/x64_windows-fastbuild/bin/lib/hydra/hydra.if.lib and object bazel-out/x64_windows-fastbuild/bin/lib/hydra/hydra.if.exp
Target //:project_4 up-to-date:  
  bazel-bin/project_4.exe
INFO: Elapsed time: 0.951s, Critical Path: 0.83s
INFO: 8 processes: 3 internal, 5 local.
INFO: Build completed successfully, 8 total actions

$ "bazel-bin/project_4.exe"
shared foobar
Tue Dec 29 00:44:33 2020

```
