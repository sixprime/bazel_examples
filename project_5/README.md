# Description

`[code + dl_shared_lib -> executable]`

## Bazel

```console
$ bazel build //lib/hydra:hydra 
INFO: Analyzed target //lib/hydra:hydra (15 packages loaded, 71 targets configured).
INFO: Found 1 target...
INFO: From Linking lib/hydra/hydra.dll:
   Creating library bazel-out/x64_windows-fastbuild/bin/lib/hydra/hydra.if.lib and object bazel-out/x64_windows-fastbuild/bin/lib/hydra/hydra.if.exp
Target //lib/hydra:hydra up-to-date:
  bazel-bin/lib/hydra/hydra.dll
INFO: Elapsed time: 0.767s, Critical Path: 0.59s
INFO: 7 processes: 5 internal, 2 local.
INFO: Build completed successfully, 7 total actions

$ bazel build //:project_5      
INFO: Analyzed target //:project_5 (1 packages loaded, 3 targets configured).
INFO: Found 1 target...
Target //:project_5 up-to-date:
  bazel-bin/project_5.exe
INFO: Elapsed time: 0.682s, Critical Path: 0.59s
INFO: 7 processes: 4 internal, 3 local.
INFO: Build completed successfully, 7 total actions

$ "bazel-bin/project_5.exe"
ptr = 00007FFA0F3A0000
Hello from dll!
Tue Dec 29 02:15:14 2020       

```
