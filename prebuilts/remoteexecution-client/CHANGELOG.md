## Release 0.57.0 (2022-03-03)
```
Changes:
 + 704e84b:
 Revert "Add environment variables support to GomaIP"
 + 6a296b5:
 Run lerc integ test on Windows
 + 74c8721:
 Setup chromium win integration test
 + 3043c41:
 Bump SDK to head.
 + 9b3ab7d:
 Add -MF handler for clangcl
 + 93850ac:
 Move canonicalize_working_dir flag to rewrapper
 + 2351382:
 Add script to clone chromium windows.
```

## Release 0.56.0 (2022-02-24)
```
Changes:
 + 61a43e0:
 Fix Windows NOTICE in cipd yaml
 + 9a825a7:
 Roll goma to cc1d13f0e8c6338751e74f0df5ecc9858b5aaea0
 + 727673d:
 Run grpc_test integ test on Windows
 + 917a496:
 Remove compare mode related changes from runLERC
 + 4b729d6:
 Update release scripts to use Kokoro GCS uploads
 + 467a172:
 Adds downloadmismatch cmd
 + b4837ad:
 Change docker image used by rbe_action on Windows
 + 2f5bccc:
 Add environment variables support to GomaIP
 + c76ca3b:
 Add logdump to release
 + d12a632:
 Fix macos release script.
```

## Release 0.55.0 (2022-02-22)
```
Changes:
 + 4a2a05e:
 Remove deprecated ioutil references
 + 2f7c304:
 Tweak Mac secure release scripts
 + d1beb5f:
 Fix win release again
 + 5eb20a2:
 [releases] Fix windows release instance
 + 9f91490:
 Setup Chromium linux integration test
 + fb04b4e:
 Update action count in Android test
 + d85a729:
 Update action counts in test.
 + a85a8ad:
 Update Android source image so postsubmits can pass.
 + 28a476c:
 Adds the ability to ssh into an existing workstation
 + edfac5f:
 Add Android RBE experiment with CXX_Links enabled.
```

## Release 0.54.0 (2022-02-08)
```
Changes:
 + 6ecff23:
 Remove logic to check for collisions in virtual and physical inputs.
 + c6a643e:
 Bump SDK to latest version
 + 8db0646:
 Better handle auth errors in re-client
 + 9b74d57:
 Upload local artifacts after reruns.
 + 3b5791c:
 Add system disk size field to VMSettings
 + 4825f25:
 Experiment proto for attempting to identify release with regression.
 + ae19bc2:
 Add chrome-android-arm64-dbg experiment
 + d6a7a30:
 Add simple RBE Android build experiment
```

## Release 0.53.0 (2022-01-26)
```
Changes:
 + 91c2b17:
 Update remote-apis-sdks dependency
 + d91dc5f:
 Write Goma IP crash dump files and log files to reproxy log dir.
 + fa493d2:
 Add integration tests for compare mode.
 + 5aa6c61:
 Add output directories to rerun/compare mode unit tests.
 + 86992cb:
 `go get` -> `go install` for gen_schema script
 + 8871ab5:
 Fix crash when building Android with compare mode. When compare mode is enabled, reclient will try to stash and restore input/output files. However, when the exec strategy is racing the restore function is not defined causing a seg fault.
 + 6022889:
 Move set outside of if in windows release scrpit
 + 08c009e:
 Remove --host_platform remote configs
```

## Release 0.52.0 (2022-01-21)
```
Changes:
 + 31b4ca1:
 Don't normalize flags sent to dependency scanners
 + 5a91e49:
 Update bazel to 5.0.0
 + ab23a57:
 Fix create-qt-release script to find the drop commit correctly.
 + f15b879:
 Deprecate the environment field in rbe_metrics
 + f2bd229:
 Allows compare mode to be used with reruns and deprecates num_retries_if_mismatched.
 + ad44af2:
 Fix a typo in reproxy_win.cfg
 + c7e98b3:
 Made remote cache agnostic to local working dir
 + f0e60a4:
 Modify tool label behavior to not include files from the cmd
 + c2f58fd:
 Remove color code prefix from bootstrap output instead of removing it in Android Platform code
 + 18d56e7:
 Added TestChromiumCPPCrossOutDirCache for Windows
 + 830a9d3:
 Added canonicalize_working_dir flag to reproxy
 + c645e14:
 Added clang_depscan_ignored_plugins flag that allows to specify which plugins should be ignored during dependency scanning
```

## Release 0.51.0 (2022-01-07)
```
Changes:
 + 1f719e4:
 Update Android disk image.
 + 4507708:
 Removed duplicated resourceDir logic in clangcl preprocessor
 + 6bc1f1a:
 Removed duplicated buildCommandLine and virtualInputs from clangcl
 + c7ddf5f:
 Cleaned up legacy parser behavior from clang preprocessors
 + bcc2992:
 Migrated clangcl.Preprocessor to a new flags format
 + d3fa8e4:
 Use GetOutputDigests function from SDK to compute output file/directory digests for local and remote reruns.
 + ab17e2a:
 Migrated nacl.Preprocessor to a new flags format
 + 649972d:
 Migrated clanglint.Preprocessor to a new flags format
 + 939d114:
 Migrated headerabi.Preprocessor to a new flags format
 + 693ccfd:
 Refactored cppcompile/preprocessor to leverage flag scanning within clangparser and reduce code duplication
 + 90c4195:
 Fix windows cross path \ -> / change
```

## Release 0.50.0 (2021-12-10)
```
Changes:
 + 9932016:
 Use configured service account when talking to GCS.
 + e0cef9f:
 Add keystore config for mac build
 + d0a8450:
 Revert "Remove reclient version cache silo"
 + d2d8695:
 Fix bug in release script where common.sh needs to run from source root.
 + 6170173:
 Add periodic macos release configs.
 + 35bb744:
 [windows] Rem vcredist from CI scripts
 + dc8fb6a:
 Added README.md describing how to work with patches
 + a58db58:
 Remove reclient version cache silo
 + d5bb258:
 Updated version of LLVM to match the version used in chromium/src
 + 8b1be90:
 Add support for building for Apple silicon.
 + 0b6888e:
 Upgrade go to 1.17.4
 + d4ea280:
 roll goma client to avoid linking msvcr100.dll
 + f78fdc5:
 Add num_remote_reruns flag.
 + 19ab839:
 Adding integration tests for xattr
 + bcf4d9f:
 Added batch scripts to simplify testing integ tests on Windows
 + 89b3ed2:
 Merged in RE API SDK changes making output paths working dir relative
 + 6736d60:
 Add num_local_reruns flag.
 + d3722ae:
 [windows][release] Set git basic config
 + 52e6f98:
 roll goma client to VERSION=239
```

## Release 0.49.0 (2021-11-24)
```
Changes:
 + 6938ae5:
 Remove the LD_LIBRARY_PATH variable
 + 6986389:
 Update rules_go & gazelle
 + b44aeb4:
 Check for number of expected action types in integ test
 + 2615514:
 [windows][release] Do not reuse release dirs
 + 3a942a8:
 [windows][release] Create release dir before copy
 + 326a1cd:
 Refactor android integration test to reuse script checked-in locally
 + 980bebd:
 [windows] Fix .bat calls again
 + 9295341:
 Update bazel to 4.2.1
 + bd29036:
 Fix virtual input behavior without fmc.
```

## Release 0.48.0 (2021-11-19)
```
Changes:
 + 02fa2d6:
 Update to latest image
 + 8480aa4:
 Remove redundant virtual inputs
 + ca1fad1:
 Fix ubuntu release container image
 + a54d6b9:
 Upgrade choco during windows release
 + 2afb58b:
 Fix windows release error handling and variables
 + 08a76f7:
 roll goma client and drop use_system_xcode=true
 + e112172:
 Add Windows Secure release workflow
 + 13e16f1:
 gclient.bzl: fix __is_macos
```

## Release 0.47.0 (2021-11-17)
```
Changes:
 + c77ff62:
 Add support for xattr hash
 + edbad5e:
 Fail the integration test if the Android image is older than 30 days
 + 90d56d1:
 Add a script to run Android build
 + ca210f0:
 Placed reproxy response dump files in logDir, and added logic removing them alongside with old log files
 + 053881e:
 roll goma client to VERSION=238
 + 711239d:
 Updated grpc_test integration test to verify truncated responses
 + 633696d:
 Filter out virtual inputs that are not physically existing directories or exist as a parent of a physical input. Also, remove .keep_me from virtual inputs.
 + 4e4989f:
 rbe_action.sh to support running an action from an arbitrary wd.
 + e369d6f:
 roll goma client to VERSION=237
 + 7e1efd3:
 Allow kbuilder user write access to depot_tools
 + eb51a8b:
 Turn on Windows Goma IP CI
 + ddacfd9:
 Fix reclient + gomaip windows integration tests
 + 55183b2:
 Improve gclient's patch code.
 + 0814c78:
 allow relative path for rewrapper --exec_root=
 + 9f2d565:
 Update Kokoro Win to run all unittests
 + 4d21183:
 Remove env_var_whitelist flag
 + 8a8f4a0:
 Added handling for re-proxy responses exceeding 32MB limit (b/201316487)
 + 6d3284b:
 Add CPU Arch to rbe_metrics.txt
 + 7d5b4f8:
 Remove include scanner suffix to the version number.
 + 48f05cb:
 Statically link non-system dlls and update builder
 + ff7f365:
 roll goma client to VERSION=236
 + 4a0c264:
 Update Android integration test
 + e9ada74:
 Update android snapshot
 + 3ff95a2:
 Scripts to create and push gerrit CLs.
 + eb3495f:
 Yank bazel racing strategy in different config
 + d0d4ef2:
 fixed a typo in install_precommit.sh
```

## Release 0.46.0 (2021-11-04)
```
Changes:
 + 4302b6f:
 Input processor should try to find SDKSettings.json file on Mac.
```

## Release 0.45.0 (2021-11-03)
```
 + 5c3aa6e:
 Bump version to 0.45.0
 + e67bac3:
 Added inputprocessor.Options to errors returned by populateCommandIO
 + 4621094:
 rbe_action.sh fixed to shutdown reproxy with correct cfg.
 + da319a0:
 Add tool to dump entire reproxy log in raw format.
 + e582014:
 Add sha256 to llvm checkout
 + 9b9200d:
 Reclient + gomaip on windows!!!!
 + e58defc:
 Forward error logs to stdout and stderr.
 + aa7a69a:
 remove BAZEL_VERSION and BAZELRC
 + 925f763:
 Build reclient remotely when using rbe_action.sh
 + a06ab8c:
 roll goma client: candidate VERSION=235 to VERSION=235
 + b91b800:
 Compile reclient + goma IP on windows.
 + 53e446e:
 mac: bazel shutdown before changing directory
 + 9aa7bdb:
 Bump rules_foreign_cc to 0.6.0
 + 94a1e58:
 Do not try to trigger release workflows
 + 630be19:
 Chromium migration helper script.
```

## Release 0.44.0 (2021-10-19)
```
Changes:
 + 4294878:
 roll goma client: VERSION=233 to candidate of VERSION=235 for MinGW tweaks
 + 2aa7cad:
 roll github.com/Microsoft/go-winio v0.5.0 -> v0.5.1
 + 55eb546:
 Add reclient fail early support.
 + 8310d93:
 Fix race condition in remote-apis-sdks
 + 0925f65:
 Remove kokoro artifacts from release.
 + c39831c:
 Attempt to make a _succesful_ upload.
 + 5c7ed11:
 Add release artifacts to our new secure release workflow.
 + c90256e:
 fix prod:re-client/macos_external_gomaip/continuous_goma
```

## Release 0.43.0 (2021-10-12)
```
Changes:
 + 8a8f769:
 shutdown bazel at the end of scripts.
 + b44ad4d:
 Change create release workflow for new release process.
 + 8d52ef5:
 add macos_external/release_goma as one of release jobs
 + 7a9d4f0:
 Support gomaip in mac
 + 75af96c:
 roll goma client: VERSION=231 to VERSION=233
 + 3e40878:
 setup mac gomaip continous/release
 + 064e574:
 Script to automate qt-dev cherrypick.
 + b908bb6:
 Add "new" no-unilateral-access release script.
 + 0a9d21d:
 Add rpl2trace to release.
 + c32fbd7:
 Specify a more meaningful commit message to re-client releases in Android
```

## Release 0.42.0 (2021-09-24)
```
Changes:
 + dc2bd51:
 Update ubuntu and windows workflows to stop fetching a key.
 + 61b1f42:
 roll goma client: VERSION=227 to VERSION=231
 + 8e862ab:
 Update LLVM version.
 + 59189c6:
 Sort input process files in test
```

## Release 0.42 (2021-09-24)
```
Changes:
 + dc2bd51:
 Update ubuntu and windows workflows to stop fetching a key.
 + 61b1f42:
 roll goma client: VERSION=227 to VERSION=231
 + 8e862ab:
 Update LLVM version.
 + 59189c6:
 Sort input process files in test
```

## Release 0.41.4 (2021-09-21)
```
Changes:
 + d52629e:
 fix cipd-mac.yaml path for cipd create
```

## Release 0.41.4 (2021-09-21)
```
Changes:
 + d52629e:
 fix cipd-mac.yaml path for cipd create
```

## Release 0.41.3 (2021-09-21)
```
Changes:
 + 2f72937:
 add kokoro/macos_external/vars.sh
 + eab5c19:
 fix install_precommit.sh
 + 448918d:
 Add macos_external/presubmit_goma
```

## Release 0.41.2 (2021-09-20)
```
Changes:
 + d3d8254:
 fix macos_external/release.sh
 + a8a4f02:
 fix macosx release
```

## Release 0.41.0 (2021-09-16)
```
Changes:
 + b21aa95:
 fix re-client-builder to allow depot_tools autoupdate
 + f0651a6:
 Add re-client/macos_external/release to kokoro release worflow
 + 53fc515:
 add mac release
 + 40ff5a5:
 Fix typo in linux goma release job name
```

## Release 0.40.0 (2021-08-26)
```
Changes:
 + 0631fed:
 Add typescript labels and typescript integration into re-client.
 + 355f235:
 Change exprunner example run to reflect new perfgate wrapper name
 + 5d17c7b:
 Add tags to experiment proto. This allows for perfgate to add user defined tags for data segregation.
 + 26d1974:
 Implement recursive deps traversal.
```

## Release 0.39.0 (2021-08-10)
```
Changes:
 + 3dec0c7:
 Remove TOC files from link actions.
 + 67fd920:
 Print the number of verified in the stats.
 + 5f131f2:
 Add flag to set deps cache max size for goma deps cache.
 + a0c511f:
 Implement direct deps retrieval for tsconfig and tsfile.
```

## Release 0.38.0 (2021-07-29)
```
Changes:
 + 63cb7c8:
 Have ShutDownProxy check that the reproxy process is done.
 + 8a30379:
 Update windows release workflow to pick cipd from PATH
 + e0c0ef3:
 Add perfgate support to experiment runner.
 + 58a4659:
 Do not record CPPInputProcessorMillis metric if using goma deps cache.
 + 4b386fb:
 add tsfile parser, to parse lines of import statement and fine its relative path.
```

## Release 0.37.0 (2021-07-21)
```
Changes:
 + 41e4884:
 Update goma's version to remove patch.
 + 26a265e:
 Fix bug preventing integration tests from running on reproxy goma ip.
 + 1c0f984:
 Use goma's native deps cache.
 + dde54a8:
 Add the action digest that produced a mismatch to log files
 + 9c5299e:
 Add extends to tsconfig_parser.
 + 4822715:
 Add kokoro windows recient + goma IP presubmits
 + 1a1e16f:
 Tweak kokoro win creation script.
 + c91486a:
 Add chrome build experiment
```

## Release 0.36.0 (2021-07-15)
```
Changes:
 + 3053713:
 Add release support for goma-ip build.
 + cf1a3db:
 Make goma builds cacheable.
 + efc18c1:
 Enable go race detection in re-client presubmits
 + f9a2401:
 Add kokoro workflows for reclient + goma input processor.
 + 9d43a21:
 Fix unit test fails in TestNoRemoteOnInputFail
 + e549c61:
 Print the type of include scanner being used in reproxy in logs.
 + 87f718f:
 Do not adjust command if using goma's input processor.
 + 1f84511:
 Fix no remote execution when input processing fails for CPP
 + 7c70244:
 Add a build configuration for include scanning.
 + cf80535:
 Add binary to run experiment runner and tabulator
 + d8f7d6c:
 Add the goma input processor as a cgo library and bridge to C++ goma.
 + 4914fd4:
 Turn on compiling the goma input processor on linux CI
 + 1c59d33:
 Add gclient support to windows.
 + f375c72:
 Build libs and headers needed for the goma input processor.
 + e5d2e1f:
 Refactor integration test configuration to use args and cfg files.
 + 4a98e2b:
 Remove couple of lines from readme.MD.
 + d656d2d:
 Separate experiments logic in runner and tabulator from binary
 + c7a794d:
 Revert "Fix no remote execution when input processing fails"
 + 52a6816:
 Fix no remote execution when input processing fails
 + 497cfda:
 Add deps cache example experiment proto
 + 03fb41a:
 Trim build.ninja file.
 + 1af19ef:
 [goma] Add rules to compile goma from reclient.
 + 57e4b28:
 Update kokoro windows custom VM to add depot tools to path.
 + 2518f71:
 Add better error messages for auth related RBE errors
```

## Release 0.35.0 (2021-06-21)
```
Changes:
 + c67dad9:
 Revert "Fixed bug to not do remote execution when input processing fails"
 + 21a1697:
 add defer log.Flush() in main
```

## Release 0.34.0 (2021-06-16)
```
Changes:
 + 1119aea:
 fix typo in cipd-linux.yaml
 + 1df31eb:
 Log reproxy flags in rpi file.
 + 56cadbc:
 add rpl2cloudtrace in cipd package
 + f26da5e:
 Fixed bug to not do remote execution when input processing fails
 + 958209d:
 Add rpl2cloudtrace command
```

## Release 0.33.0 (2021-06-10)
```
Changes:
 + 772456a:
 Switch out -fsanitize-ignorelist for -fsanitize-blacklist until clang-scan-deps version supports the ignore version of the argument.
 + 0b920df:
 Fix tabulator skipping experiment with no rbe_metrics.txt file.
 + 111fa64:
 Fix reproxy server tests.
 + 81e0385:
 golang: update to 1.15.13
 + 24dc9d9:
 Add bazel's "racing" version for faster reclient iteration.
```

## Release 0.32.0 (2021-06-08)
```
Changes:
 + 972b5da:
 [reproxy] Make reduced text the default.
 + bbe4ca7:
 Support remote archiving.
 + c956c10:
 Downgrade half-baked ar-reading errors to warnings
 + 5c8eb87:
 Fix Android Test numbers
 + 609c3b3:
 Add TODO to -fsanitize-ignorelist support.
 + 5c399ea:
 rbeflag: allow comment in config file
 + 96e391b:
 Adds -fsanitize-ignorelist to arg scanner Joined list.
 + 046bf31:
 add cloud profiler support in reproxy
 + a3d3d92:
 Handle -fsanitize-ignorelist.
 + 8a5da3c:
 Revert llvm update commits.
 + c24e0ae:
 Update aosp's snapshot.
 + 7b537a4:
 update llvm-bazel sha256hash
 + 73bf319:
 add preserve_symlink option.
 + 93ce047:
 [kokoro][windows] Add image creator script for our windows CI.
 + 01c2b31:
 Add deps cache integration test.
 + 45c8f8f:
 Update llvm version
 + 04f6197:
 [bazel] Update bazel to v4.1.0.
 + caaa265:
 Run gazelle in presubmit
```

## Release 0.31.0 (2021-05-26)
```
Changes:
 + 002ad3b:
 remove build_naming_convention from remote-apis-sdks
 + 5dfc16f:
 Update SDK version to f831c118b.
 + d591d46:
 Evict old entries from deps cache to prevent unbounded growth.
 + 59fdb1d:
 delete @com_github_bazelbuild_rules_go
 + 8176257:
 Add stats for deps cache loading and writing to rpi file.
 + ecb439f:
 Remove "cache siloing" reclient version from platform for non LERC.
 + 9e37e8c:
 Use deps cache in the cpp input processor.
 + aacbf57:
 Add depscache.
 + 7456489:
 Remove --windows_cross flag.
 + 97a6695:
 Exclude docker directory in gazelle config.
 + 0910580:
 Use RBE config in the install script.
 + 66bab18:
 Update SDK to 7447b28.
 + fbcdcbd:
 [experiments] Tweak saving inputs
 + 1ada4a5:
 [Links] Read `.a` files by launching `ar t myarchive.a`.
 + 4a2ee7c:
 Support windows cross for nacl
 + c974fe3:
 Normalize dirs for windows cross compile
 + f1e923e:
 Support windows cross compile
 + 3bdcdda:
 [golang] Update golang to 1.15.12
 + 848af86:
 update github.com/Microsoft/go-winio; 0.4.15 -> 0.5.0
```

## Release 0.30.0 (2021-05-11)
```
Changes:
 + 4d3a5ca:
 Add rpi file to host proxy instance level events and stats.
 + fa6b4c9:
 Expose minimized file header interface from cgo from clang-scan-deps
 + 03425a2:
 [rsp] Fix rsp file reading on links.
 + 86d4eb3:
 Speed up data loading into bigquery tables
 + 06dc659:
 [experiments] Fix experiments cleanup with num_machines
 + ebceda2:
 don't set OSFamily property if Pool or label: is set.
 + 39da0b0:
 [experiments] Add num_machines to experiments.
```

## Release 0.29.0 (2021-04-28)
```
Changes:
 + 6e850de:
 [SDK] Bump SDK version.
 + 49b123d:
 [experiments] Allow preserving inputs for future reference.
 + 1ea7c79:
 [experiments] Update chrome examples to reflect current setup.
 + 8e02ad8:
 [experiments] Add disk type options
 + 73e430e:
 [bootstrap] Send SIGINT on Windows
 + 9d020ec:
 Add experimental_cache_miss_rate flag to simulate cache misses.
```

## Release 0.28.0 (2021-04-13)
```
Changes:
 + f9c7042:
 [inputprocessor] Add pprof option.
 + 30eb390:
 [bootstrap] Send SIGTERMs on linux.
 + 5f0d773:
 Log C++ input processor overhead
 + d3edb35:
 [experiments] Upload experiment definition at the beginning of the run.
 + 46f5d67:
 [experiments] Fixes and tweaks
 + 6301694:
 [windows][experiments] Add basic windows support to exp framework.
```

## Release 0.27.0 (2021-04-07)
```
Changes:
 + 34e1d11:
 Bump remote-apis-sdks version
```

## Release 0.26.0 (2021-03-30)
```
Changes:
 + 0a60366:
 [llvm] Cleanups patches in separate folder.
 + 921688d:
 [llvm] Add llvm-bazel on windows.
 + afb93e3:
 [llvm] Remove llvm build warnings
 + b9d7261:
 [release] Allow creating release from version commit.
 + 4738e86:
 [release] Automate creating windows release.
 + 9ec35f8:
 Fix bug in create-release.sh script
```

## Release 0.25.0 (2021-03-23)
```
Changes:
 + 65ad975:
 Revert Go version back to 1.15
 + 5ac5cd7:
 Add remote and local status to the ActionLatency metric.
 + 59fe2c7:
 remove cmake, ninja for linux and macosx
 + 2800e67:
 chromium integ tests update to r863615 (VERSION 4450.0 to 4455.0)
 + 634cd9a:
 Print newline at the end of bandwidth stats
 + 3174046:
 [rules_go] Update rules go to v0.27.0
 + 8fe2853:
 [windows] Faster releases.
 + 92f2ee2:
 Better report bandwidth stats
 + 7e1a6e7:
 Bump gazelle to 0.23.0
 + e0165b9:
 [MacOS] Add remote cache to macos builds.
 + f178d72:
 Make build latency distribution metric buckets more granular.
 + 291b4fb:
 chromium integ tests update to r863615
 + c92a239:
 [llvm] Update LLVM version.
 + 30b4b42:
 [windows] Delete presubmit and continuous artifacts.
 + e740f8d:
 [windows] Better CI unzipping.
 + 9ac190d:
 Add an option to bootstrap to print bandwidth stats
 + 9966321:
 [Part 1] Automate staging release symlink creation for Android
```

## Release 0.24.0 (2021-03-16)
```
Changes:
 + 6efeeb8:
 [Windows] CI Remove setup.bat
 + 6f3283c:
 Change BuildFailureCount to BuildCount.
 + f64b773:
 [windows] Refactor integ tests structure.
 + edc831f:
 roll protobuf to 3.15.6
 + ea1e847:
 [integ] Add local tag to integration tests.
 + 3cd330e:
 [ci] Add remote config to converage tests.
 + 2f663d1:
 rpl2trace: ignore event if from/to is unset
 + 1c8b806:
 [kokoro] Use RBE on windows.
 + 9941d4f:
 Turn on strict action environment for Windows.
 + f40c97b:
 [bazel] Strict environments.
 + 21f3e0a:
 use go 1.16.2
 + b07259f:
 Rename left / right in compare to remote/local
 + da593bd:
 Run compare action on remote n times
 + 6dc3b1e:
 [toolchains] Add manual tags to prevent wrong OS attempt to compile
 + 5118588:
 Add script to automatically create rollback CLs to qt-dev
 + 4a1d133:
 Upgrade bazel version to 4.0.0
 + a5cb19f:
 [clang-scan-deps] Use bazel to compile clang.
 + 87dad6f:
 Bump rules go to 0.26.0
 + 8c6798a:
 Update remote-apis-sdks
 + b6ed9f7:
 clean up chromium basic compile test
 + 4084f98:
 Refactor and rearrange compare functions
 + 49c9b72:
 [windows] Add windows remote execution configs.
```

## Release 0.23.0 (2021-03-09)
```
Changes:
 + 0c607b4:
 Reenable error/warning/fatal logs in rewrapper
 + abb4e7a:
 roll protobuf to 3.15.5
 + ab08f5d:
 update chromium/linux integ tests
 + c92fef0:
 add compile error test case
 + 397da33:
 [windows] Add rules_go patch.
 + 6d584d6:
 Add BuildFailureCount metric to track number of reclient related failures.
 + 4654596:
 [windows] Add windows re-client builder Dockerfile
 + 87fbfcf:
 Bump up continuous android test timeout to 2 hours
 + ad12832:
 update chromium/windows integ tests
 + 88a814d:
 roll llvm to 6d52c4819294dafb2c072011d72bb523092248a2
 + 3d6a480:
 Support arbitrary labels for metrics.
 + 09078f1:
 Update integration tests to use aosp image
 + 5140ecf:
 Add scripts to clone and create an image for AOSP source
 + d3d607e:
 roll protobuf to 3.15.3
```

## Release 0.22.0 (2021-02-25)
```
Changes:
 + e00c829:
 [windows] Add RELEASE & NOTICE to windows kokoro release workflow.
 + 3f8f177:
 roll protobuf to 3.15.2
 + cdd4f79:
 Update llvm to 98c6110d9bdda166a6093f8fdf1320b5f477ecbe
 + 4f04dcd:
 Remove deprecated rbe_autoconfig.
 + 7d441d4:
 [experiments] Only cleanup experiment resources on success.
 + b6c7a0b:
 Prevent NOTICE file from causing conflicts when dropped into Android.
 + 0e8f5d3:
 Remove path and home variables
 + f7e32a2:
 roll protobuf to 3.15.1
 + 873c11f:
 Upgrade to new SDK version.
 + 33983cf:
 use go 1.16
 + 06d3401:
 Implement idle timeout in reproxy
 + 1a5f414:
 Add metrics_namespace flag to bootstrap
 + 04acc59:
 Add LICENSE and NOTICE files to kokoro release artifacts.
```

## Release 0.21.0 (2021-02-18)
```
Changes:
 + 2da7139:
 Add reducedtext log format to write abridged rpl log files.
 + b2fbbe6:
 Add reclient version label to all exported metrics.
 + 857f777:
 Add remote status label to exported metrics. Use GenericNode for reduced cardinality.
 + 4a455f7:
 Roll bazel-gazelle to 0.22.3
 + ac3ad59:
 [experiments] Cleanup outputs between trials
 + 6bd89dd:
 Pass re-client tool name and version to GWS logs
 + ee8c7bb:
 Add NaCl --target flags on dependency scanning & extract input nacl procesor.
 + 0f8c514:
 Fix experiments multi-run setup.
 + ded13c8:
 Add LICENSE and NOTICE files to the reclient repo.
 + afad219:
 Update compression test proto
 + b1b5cef:
 roll rules_foreign_cc to 78dd4749941c0031e107cccbc441c7eeb89accd0
 + 1b6a45d:
 Use mutex before updating map
 + cd7f9f4:
 Cleanup obsolete disk deletion code
 + 14a4efc:
 [experiments] Move the image disk creation to the source image creation.
 + bb8a304:
 Update RE SDK & Add logging for download metrics
```

## Release 0.20.1 (2021-02-09)
```
Changes:
 + bd96c99:
 Prevent bootstrap from exiting fatally when there are no reproxy log files.
 + cfe9ec3:
 Determine the current zone when the monitored resource is used.
 + c1d768e:
 Add the ability to copy local reclient binaries
 + ba6aebc:
 use go 1.15.8
 + addbed1:
 Add compression android multi region proto
```

## Release 0.20.0 (2021-02-05)
```
Changes:
 + e5aadb7:
 [chrome] Ignore pnacl flags on scan deps
 + a55fa20:
 Clear default labels and set a generic_task monitored resource.
 + e593c74:
 Disabling file logging + version logging in rewrapper.
 + 9723393:
 Printing version to INFO log unconditionally.
 + 5964b0e:
 kokoro widows: reinstall msys2
 + 385743b:
 Monitoring package to publish build and action metrics to stackdrier.
 + 78d0648:
 Upgrade bazel version to 3.7.2
 + 03e131a:
 Fix OS specific filepaths on server_test
 + 5d14e03:
 Deleting old logs on proxy startup
```

## Release 0.19.3 (2021-01-27)
```
Changes:
 + cce3f38:
 Updating SDK version to include digest mismatch retry
 + 8acc6d2:
 use go 1.15.7
 + 3a3970e:
 Fix continuous_android_lerc integration test
 + c70eef3:
 Add extra flags to reproxy
 + 222f05c:
 Revert "Revert "roll llvm to 94e4ec6499a237aeec4f1fe8f2cc1e9bcb33f971""
```

## Release 0.19.2 (2021-01-20)
```
Changes:
 + b908e73:
 Add some more logging statements to reproxy bootup process
 + a3c82ff:
 Bugfix: assignment to uninitialized map
 + a705a5a:
 Add cfg vs flag Chrome Build Runs
```

## Release 0.19.1 (2021-01-18)
```
Changes:
 + 91f67f1:
 Add reclientreport to Android release script
 + cbe0000:
 Revert "roll llvm to 94e4ec6499a237aeec4f1fe8f2cc1e9bcb33f971"
 + acc6880:
 Nit: adding some default values to rewrapper.
 + cb025fb:
 Add cfg for reproxy in bootstrap
 + d61141b:
 Change chrome goma experiments to use GCE service account.
 + 1588ff5:
 Bugfix: Making output_dir default value platform independent.
 + a850b69:
 roll rules_go to 0.25.0
 + 7400219:
 fix kokoro windows; download *.xz from gs://re-client-ci-prebuilts
 + 8c6a6b8:
 Do not delete temporary results folder in case of experiment failure
 + 2750b37:
 Add non-cached runs of chrome build experiments
 + 016753e:
 Add run instructions for chrome-goma.
 + ee2df8a:
 Fix multiple trial runs for chrome build experiments.
 + 7d2c643:
 Fix kokoro re-client/gcp_windows
 + 8093895:
 Add new post build configuration for experiments.
```

## Release 0.19.0 (2021-01-05)
```
Changes:
 + dca0beb:
 Add Chrome experiments
 + e23376f:
 Add reclientreport tool to releaes artifacts
 + 98abe06:
 rollup bazel to 3.4.1
 + a55450f:
 Update RE SDK version to current HEAD.
 + f9f4cb2:
 roll rules_go to 0.24.9
 + c02928a:
 roll rules_go to 0.24.8
```

## Release 0.18.0 (2020-12-03)
```
Changes:
 + af4481d:
 SDK version bump and flags to control unified operations.
 + c2ad346:
 Revert "Deprecate unified CAS ops flag and make it the default"
 + b3e3bee:
 Align the release tag name to be 'git_revision'
 + 74e63ea:
 Add remotetool to the released binaries.
 + ef2b875:
 Add a binary to aggregate log files generated by reclient
 + 9d16497:
 roll llvm to 94e4ec6499a237aeec4f1fe8f2cc1e9bcb33f971
 + 5a4c187:
 Update gerrit instructions in the README
 + 20c7b5b:
 Update RE SDK version
```

## Release 0.17.0 (2020-11-30)
```
Changes:
 + ebb42e2:
 Update RE SDK version.
 + b5ef442:
 Do not fallback to remote_disabled if we fail to connect to RBE.
 + 240865e:
 Flush flag logging in reproxy.
 + 6ff7000:
 Deprecate unified CAS ops flag and make it the default
 + 074382d:
 Remove file checked-in by accident
 + d52bfae:
 remove workaround http://b/167946840 gcp_windows/presubmit failing
 + e278e8e:
 Remove adjustCmdArgsForWindows
 + 0cba0e7:
 Check for protoc and output directions to install it.
 + dc40c2e:
 Add machine info to rbe_metrics file
 + 05cbc61:
 Fix bigquery translator
 + 241ee28:
 Clarify documentation about reproxy_log.txt specification
 + 227dcdc:
 Update the CIPD yaml files to point to the new package prefix.
 + d1df0bd:
 roll rules_go 0.24.7
 + 0483747:
 roll rules_go 0.24.6
```

## Release 0.16.1 (2020-11-18)
```
Changes:
 + 28a5cef:
 Fixing Kokoro Windows breakage.
```

## Release 0.16.0 (2020-11-17)
```
Changes:
 + b4adeb9:
 Bumping SDK version
 + 268123a:
 rbe_action.sh to use reclient binaries from an arbitrary directory.
 + c127c9c:
 rpl2trace - simple tool to convert *.rpl into trace.json
 + a216000:
 Add a flag to turn on unified uploader
 + 39aa3bb:
 clangcl: no /showIncludes for clang-scan-deps
 + 9854072:
 add /debug/pprof
 + 2d9a23d:
 logger: don't log huge virtual input contents
 + fa615b4:
 Modify rbe_action to use RBE_cfg
 + c5853a4:
 Tool to test upload speeds
 + 33cb85d:
 Document and add logging for labels to label-digests
 + b2460ac:
 roll github.com/Microsoft/go-winio to 0.4.15
 + 0e446be:
 Bump sdk commit and log remote execution error in racing.
 + 3d7900d:
 cppdependencyscanner: fix clang-scan-deps output parser
 + f76ef51:
 roll rules_go to 0.24.5
 + 7d28f9e:
 Handle cancelled RunRequest without crashing reproxy.
 + 583f22a:
 Set cap on racing holdoff
 + 8c3abda:
 check compiler update for resource dir cache
 + 39edb8f:
 Log warning in string instead of bytes
 + 6a9f633:
 use filename on disk
```

## Release 0.15.0 (2020-10-27)
```
Changes:
 + 296553b:
 Bump remote-apis-sdks version
 + 2269809:
 Pick minimum of total available system resources vs required resources
 + dd2ea00:
 make resourceDirs as reproxy process global.
 + f8d1d0d:
 Bugfix: too many records overflow gRPC message size.
 + 56e2f6f:
 Bugfix: errors channel should not block
 + 2ed9b57:
 refactor bigquerytranslator
 + 13adf37:
 Add config file support.
 + 9e75557:
 Minor fixes to download tool
 + 8c0a1b2:
 clangscandeps: add debug log
 + 5e31cf9:
 clang-cl: set -resource-dir for clang-scan-deps
 + 773aa22:
 Load reproxy_log.txt into bigquery
 + 12c9b2b:
 Add automation around generating bigquery schema from log.proto
 + 308f5fa:
 Minor fixes to download tool
 + a5ec303:
 clang-cl: ignore -Xclang -debug-info-kind=constructor
 + 91ff539:
 roll rules_go to 0.24.4
```

## Release 0.14.5 (2020-10-16)
```
Changes:
 + 8bfe4dd:
 roll gazelle to 0.22.2
 + 773b963:
 win integ: show reproxy log if test failed
 + a0b10db:
 Bump SDK version
 + 5e5b390:
 Do not use printf when printing stdout/stderr.
 + 00bffc7:
 Add rbe_action.sh script to run an action through rewrapper and reproxy.
 + 8626317:
 Add tests to ensure raced actions pass through stdout.
 + f27e51e:
 Bump SDK version to include DownloadOutputs fix.
 + 685f10b:
 Add a stat for racing finalization overhead.
```

## Release 0.14.4 (2020-10-09)
```
Changes:
 + 720d85a:
 Add doc on CIPD package stuff.
 + bf43144:
 Adaptive racing.
 + 8c3bb05:
 Store invocation IDs in the rbe_metrics file.
 + b0a9161:
 kokoro release job for windows
 + 29deac4:
 Script to benchmark disk IO on Linux machines
 + f42aa3a:
 Latest SDK: fix deadlock when context is canceled
 + 1b45a8d:
 Performance evaluation framework.
```

## Release 0.14.3 (2020-10-06)
```
Changes:
 + ff8215b:
 Refactor integration tests so that they can be run using bazelisk
 + 057114d:
 Getting latest version of SDK with Capabilities check flag
```

## Release 0.14.2 (2020-10-01)
```
Changes:
 + d70e820:
 Removing Capabilities check from reproxy (SDK does it now)
 + 98155c5:
 Bump remote-apis-sdks commit to include Ola's upload fix
```

## Release 0.14.1 (2020-09-30)
```
Changes:
 + a5f1897:
 Designate more resources for local execution of javac/r8/d8.
 + 4523b7a:
 Add a context timeout when dialing IPC
 + 5137a1a:
 Capture reproxy_log.txt in addition to reproxy.* files
 + d99e00f:
 roll gazelle to 0.22.1
 + 8167699:
 roll rules_go to 0.24.3
 + b841b34:
 Revert "roll llvm to d0abc757495349fd053beeaea81cd954c2e457e7"
 + ecf8e74:
 Bump up remote-apis-sdks commit
 + 40f2af8:
 Rearrange kokoro directory
 + 2f2aa3f:
 Run with latest version of gazelle
 + a3d94e3:
 Tool to load tests parallel downloads
 + c705fc7:
 Don't include failed remote action log when in remote-local-fallback mode if local fallback succeeds.
 + d2ff96f:
 roll rules_go to 0.24.2
 + 47809b3:
 Markdown version of the command line flags docs.
 + 5c34ba1:
 Move some docker options inside the bazel_rbe function
 + 0baf0b2:
 roll llvm to d0abc757495349fd053beeaea81cd954c2e457e7
 + 5cfd408:
 static link mingw libraries
```

## Release 0.14.0 (2020-09-11)
```
Changes:
 + d91fa91:
 roll bazel_gazelle to v0.22.0
 + 2d0e007:
 bootstrap: delete isProxyRunning
 + f72dc2c:
 roll google.golang.org/protobuf to v1.25.0
 + ce3415c:
 use named-pipe for rewrapper<->reproxy on windows
 + e3c3cfd:
 reproxy: fail early by checking capabilities at startup
 + 179f7f1:
 set cipd tag and ref
 + 204335e:
 kookro/gcp_windows: factor out setup.bat
 + 1eb8585:
 Holdoff: don't race until need for execution is confirmed.
 + 6500ce5:
 Bump remote-apis-sdks to include revert of batch download change
 + 6e51ab5:
 Simplifying existing racing code a bit
 + 1d7399a:
 Bump remote-apis-sdks commit
 + 17bd91b:
 workaround http://b/167946840 gcp_windows/presubmit failing
 + d491028:
 Move CIPD package to correct location.
 + bbb12bc:
 Deprecate the env_var_whitelist flag.
 + 5858398:
 roll rules_go to 0.24.1
 + e7fd4a9:
 bootstrap to persist a pid file for identifying reproxy in shutdown.
 + 210eeea:
 test tests/integ/remoteexec in gcp_windows/continous
 + 0a146ec:
 Add flag to control local pool parallelism.
 + 1bb012a:
 Change stdout/stderr to bytes instead of string
 + 48dfb08:
 Run the cipd binary after a release to create and upload the cipd package for the rbe binaries.
 + 40635e5:
 chromium windows integration test
 + f09e059:
 roll rules_go to v0.24.0
 + 33f1571:
 Fix various issues with racing.
 + 8396941:
 Change default bootstrap wait time to 20 seconds.
 + 507c0e7:
 Add the racing exec strategy.
 + 050d94d:
 Add the action struct to improve server.go readability.
 + 3bc22d0:
 Update preprocessor so it removes flags we want removed when the previous flag is -Xclang.
 + d0b12c2:
 fix precommit for windows
 + 3258cff:
 Refactor local execution to use the outerr package and add non-blocking execution.
 + feb33b8:
 Add instructions on how to install the precommit hook.
 + 470d4bc:
 Add precommit script to run gofmt/golint/gazelle.
```

## Release 0.13.7 (2020-08-21)
```
Changes:
 + 0d25d98:
 Increase gRPC max message size
 + 85c7538:
 Do not use toolchain inputs when there's an error
 + 97b2e33:
 integ test doesn't need to use moreflag
 + b04537c:
 Remove the metalava version check from the toolchain input processor.
 + 9f14c07:
 delete gazell:ignore
 + e9fe9f2:
 roll protobuf to 3.13.0
 + 79d5af9:
 roll bazel-gazelle to 0.21.1
 + eb2e12d:
 Add writable to the cipd install directory.
 + 0df8d29:
 use test_env rather than action_env for test
 + ac6bc28:
 integ: use data deps instead of flag with $(location)
 + 7dde86c:
 refactor BuildClangCommand
 + 165e768:
 flagsparser: use clang's Options.td to parse clang flags.
 + 11c7804:
 move reproxy_dep_test into own dir
 + 61500ef:
 roll rules_go 0.23.8
 + 7344b85:
 reproxy: set default platform OSFamily properties.
 + 5e7b160:
 make sure remoteexec calls remote-apis, not local fallback
 + 8622f88:
 roll rules_go 0.23.7
 + b9c7215:
 Revert "Merge "Fixing remote compare mode to update the action result with the local run results.""
 + 41c7c67:
 Migrate javac input processor to the new preprocessor.
 + 9cdbae9:
 Cleanup clang related input processors now that all clang dependent input processors are migrated.
 + 87c1361:
 Migrate clang links to the new preprocessor.
 + 5aee2df:
 Migrate clang CL to the new preprocessor.
 + 5136612:
 Migrate header abi dumper to the new preprocessor.
 + 7e40a68:
 Migrate clanglint to the new prerprocessor.
 + a39a537:
 Migrate cpp input processor to the new Preprocessor.
 + 2f043c3:
 Move the clang flagparser to a new package.
 + df3ae15:
 Migrate metalava to the new preprocessor.
 + 1e4dffc:
 Migrate r8 input processor to the new Preprocessor.
 + 1441cc4:
 Migrate the d8 label to the new Preprocessor.
 + 7199f56:
 Migrate the tool label to the new Preprocessor.
 + b0593d3:
 Add Preprocessor and BasePreprocessor
 + 0f1d451:
 roll rules_go v0.23.6
 + 3bd9fd2:
 cleanup patch for llvm.
 + 470f86c:
 install the new msys2 keyring
 + 48d326d:
 roll rules_go to 0.23.5
 + db0c65a:
 Fix broken gazelle after adding gen_clang_cl_flags
 + 204d8a1:
 Remove shadow headers.
 + f221db8:
 Add a coverage report to the linux presubmit.
```

## Release 0.13.5 (2020-07-23)
```
Changes:
 + 16831e5:
 Do not store cache entries for directories
 + 45dce2b:
 roll rules_go to v0.23.4
 + 07ee194:
 kokoro/macos_extenral: enabe unit tests
 + f45e5be:
 chromium linux integration test
 + ab096bd:
 Do not add dependencies from the CLI for signapk actions
 + eb92c1c:
 Invalidate output file cache entries before uploading LERC cache outputs
 + 4691c35:
 Add verification of LERC stats in integration test
 + dc2894c:
 Hide cpp dependency scanner inside input processor
 + d74d8f1:
 Remove the need to verify timestamp set by clang binary
 + 9ea12a5:
 handle clang-cl flags
 + ab6e77b:
 Disable local fallback when LERC local execution fails with a user error.
 + 9780e32:
 refactor flagsparser
 + 750690c:
 remoteexec test: show reproxy log if failed.
 + 88ba17a:
 Fixing remote compare mode to update the action result with the local run results.
 + 2207a13:
 Bumping SDK version to propagate recent bug fixes
 + 175cdbe:
 Add Dockerfile for ubuntu container with strace for RE debugging.
 + 0c4fab3:
 Add instructions on how to fetch dev-foundry.json file
 + 98f89d7:
 Removing a no longer needed ProxyResponseMillies stat.
 + 1537b7f:
 Add reproxy option to dump input tree of all actions it receives.
 + 09d4d6c:
 kokoro: Add Mac presubmit build
 + 53e3c14:
 Fix scripts to reflect current locations of bazel binaries.
 + 545b29a:
 kokoro: Set GOPATH, GOBIN, PATH for Mac builds
```

## Release 0.13.4 (2020-06-30)
```
Changes:
 + 3af712d:
 kokoro: Set directory in mac continuous build
 + 4ad36dd:
 Rewrite environment variables to have relative paths.
 + eba7afc:
 kokoro: Add macos_external dir with continuous build
 + d245833:
 gcp_windows: use --test_output=streamed
 + 6b2ce38:
 Centralize config_setting in BUILD.bazel file
 + 73e7928:
 gazelle: no need to exclude internal/pkg/cppdependencyscanner
 + 498daa8:
 swig is no longer needed
 + 7c18a43:
 windows presubmit builder
 + d989ccf:
 Fix kokoro windows
 + 854eeec:
 update go protobuf
 + 02cf17f:
 fix BUILD.bazel by gazelle
 + 54a6cfb:
 don't run cp command
```

## Release 0.13.3 (2020-06-25)
```
Changes:
 + e0ce5e9:
 Update remote-apis-sdks to include fix for cache issue
 + 1bb305e:
 Switching to SDK version of Cache.
 + 1d54d28:
 use --experimental_allow_tags_propagation
 + 729dee1:
 fix build on linux
 + 147ae72:
 kokoro for windows
 + 856638b:
 enable windows build
 + 823753f:
 cppdependencyscanner: no need to link libdl
 + 6186c4c:
 inputprocessor: Add .keep_me to -sysroot, etc
 + 43befec:
 Add doc for rules_foreign_cc patch
 + 4dec8c3:
 cppcompile: fix test on windows
 + d48f808:
 reproxy: static link libstdc++
 + 8a52c03:
 Add remote execution support for clang-tidy actions
 + 677ac78:
 Patch osx_commands.bzl in rules_foreign_cc
 + df50112:
 cppcompile: Use WorkingDirectory in unit test
 + 36ad52f:
 cppdependencyscanner: don't use -Bstatic for macosx
 + 52995ef:
 Use v3 docker image (adds cipd binaries)
 + b986df7:
 Add cipd.yaml file.
 + f68612c:
 Add depot_tools to re-client-builder DockerFile.
 + 7335e04:
 fix mac build
 + 0b11193:
 cppdependencyscanner as go_library
 + e709044:
 remove custom plugin build rule
 + 1f7d8c1:
 Fix bump-version script to ignore merge commits
```

## Release 0.13.2 (2020-06-08)
```
Changes:
 + 8d702db:
 Parse metalava dep file if present.
 + 476583e:
 Add a script to autogenerate version bump commit
 + 0ef1512:
 Add a test to make sure version numbers dont contain undefined string
 + 5ef722c:
 cleanup //internal/pkg/bootstrap
 + 5f23182:
 inputprocessor recognizes clang '-arch' flag
 + f0ae1e9:
 clangscandeps: get rid of swig
 + 66741fb:
 Bump bazel version to 3.2.
 + 428104c:
 Add -fsanitize-blacklist argument to 'toAbsArgs' list.
 + c8d7682:
 use protocmp for cmp.Diff
 + 4b64c20:
 Revert "Revert "fix .bazelrc for windows""
 + 0756620:
 cleanup BUILD.bazel
 + 5aa7bea:
 cleanup //pkg/cache
 + ca687d4:
 remove //internal/pkg/cli
 + 41e60cf:
 skip TestCleanIncludePaths on windows
 + 3e5e8bc:
 Remove sync.Once from feature config since its not needed.
```

## Release 0.13.1 (2020-05-27)
```
Changes:
  + 6ef0853:
    Revert "fix .bazelrc for windows"
```
This release fixes the re-client version number to re-include git commit sha.

## Release 0.13.0 (2020-05-27)
```
Changes:
  + ac536bf:
    fix //internal/pkg/inputprocessor/action/r8 test for windows
  + 9685b69:
    Merge "fix //internal/pkg/reproxy test for windows"
  + 6ac7ff7:
    fix //internal/pkg/inputprocessor/toolchain test on windows
  + 63007d4:
    fix //internal/pkg/reproxy test for windows
  + 41a675a:
    fix //pkg/inputprocessor test on windows
  + e13bf22:
    Merge "Add an r8 input processor capable of parsing flags files and transitive includes."
  + 95ac626:
    Merge "fix //internal/pkg/subprocess"
  + c3002a1:
    Add an r8 input processor capable of parsing flags files and transitive includes.
  + 35e5cdf:
    fix //pkg/filemetadata test for windows
  + 99a4d56:
    fix //internal/pkg/subprocess
  + 1744d44:
    remove processToolchainInputsUsingStrace
  + 48993d9:
    Merge "fix internal/pkg/logger for windows"
  + 7ef55eb:
    Merge "fix //internal/pkg/inputprocessor/pathtranslator test for windows"
  + a97c325:
    fix internal/pkg/logger for windows
  + a932917:
    fix //internal/pkg/inputprocessor/pathtranslator test for windows
  + f44a68d:
    add totalRamMBs for windows
  + 5666f30:
    Merge "fix //internal/pkg/deps test for windows"
  + 27f7037:
    Merge "Use rules_go's bazel package to access runfiles"
  + a5c9bfe:
    Merge "Linux- and Mac-specific code for reproxy/localexec"
  + 564beb4:
    fix //internal/pkg/deps test for windows
  + 50ded68:
    Merge "fix //internal/pkg/inputprocessor/action/cppcompile test for windows"
  + 87a022d:
    Merge "fix //internal/pkg/deps test for windows"
  + 2e6868b:
    Merge "fix //internal/pkg/inputprocessor/flagparser test for windows"
  + d6c91db:
    Merge "fix //internal/pkg/inputprocessor/action/headerabi test for windows"
  + 45b5ed0:
    Merge "Support main-dex-list flag in r8 and d8 commands."
  + 66cefb8:
    fix //internal/pkg/deps test for windows
  + bf430b1:
    fix //internal/pkg/inputprocessor/action/cppcompile test for windows
  + b8f5819:
    fix //internal/pkg/inputprocessor/action/headerabi test for windows
  + d0bebef:
    fix //internal/pkg/inputprocessor/flagparser test for windows
  + 635625b:
    Use rules_go's bazel package to access runfiles
  + c83c795:
    execroot: fix for windows
  + b16b64b:
    Merge "don't use (*os.File).Chmod"
  + 9340e2d:
    Merge "Make feature config a singleton for use throughout reproxy."
  + aff8a35:
    don't use (*os.File).Chmod
  + 0d35981:
    Support main-dex-list flag in r8 and d8 commands.
  + 16d3015:
    update rules_go from 0.20.1 to 0.21.7
  + 5dbe23f:
    Make feature config a singleton for use throughout reproxy.
  + f98951c:
    Linux- and Mac-specific code for reproxy/localexec
  + de5ea79:
    Merge "fix .bazelrc for windows"
  + 556277e:
    Add feature for cleaning input paths.
  + c6b56a5:
    fix .bazelrc for windows
  + 703a714:
    Fix GoB/Gerrit URL in README.md
  + f86cb46:
    Merge "Revert "Include all package html files under sourcepath for metalava actions.""
  + 9b43238:
    Revert "Include all package html files under sourcepath for metalava actions."
  + ca42d0a:
    Merge "Include all package html files under sourcepath for metalava actions."
  + b83225b:
    Include all package html files under sourcepath for metalava actions.
  + 907ecd3:
    Add new metalava flags to the metalava flagparser.
  + 1bef273:
    Merge "Add file specified by -Wl,--out-implib as an output for link actions"
  + 4b9d944:
    Convert shallowFallback to a configuration in reproxy
  + 405f716:
    Merge "Add label-digest as well to command-id"
  + c74bf70:
    Exclude metalava sourcepath from inputs and make it a virtual directory instead.
  + 6892cfa:
    Add label-digest as well to command-id
  + 9a3b8ef:
    Merge "Include rsp file(s) as explicit inputs if passed explicitly to rewrapper."
  + 5830ee1:
    Add stat for local execution queuing time
  + 3bce8a5:
    Add 'fprofile-sample-use' to the list of arguments to make absolute paths before passing to clang-scan-deps.
  + 4ec62be:
    Update bazel version to 3.1.0.
  + 715602d:
    Add file specified by -Wl,--out-implib as an output for link actions
  + fbc78f7:
    Fix post-submits for bazelisk change.
  + c94dc5f:
    Update clang plugin custom rule to pass tags to its actions.
  + 660ef01:
    Merge "Change CI to use bazlisk, add new Docker image."
  + 9b15ee8:
    Fix continuous android integration tests
  + a8c2ed5:
    Change CI to use bazlisk, add new Docker image.
  + 5b837e8:
    Include rsp file(s) as explicit inputs if passed explicitly to rewrapper.
```
This release includes a number of fixes to:
1. Get re-client to build in Windows
2. Fix R8 mismatches
3. Change re-client builds to use Bazelisk
4. Fixes for C++ link action mismatches
5. Fixes to flag parser / input processor for metalava actions

## Release 0.12.2 (2020-04-15)
```
Changes:
  + d52f0b7:
    Remove un-needed chdir and fix integration tests
  + 34c2872:
    Remove -debug-info-kind flag in clang-scan-deps.
  + 0e25698:
    Fix how we invoke clang++ binary to find resource directory
  + 94f70cf:
    Add an rsp package for centralizing rsp file parsing.
```

This release primarily contains bug fixes to C++ input processor and rsp file
parsing.

## Release 0.12.1 (2020-04-10)
```
Changes:
  + 09a5526:
    Also cache when we fail to find the resource-directory
```

This release fixes input processor latency for header-abi-dumper actions.

## Release 0.12.0 (2020-04-08)
```
Changes:
  + 5b29aa6:
    Fix compare mode for actions where some inputs are also outputs.
  + 9c31e0d:
    Add .toc files as additional dependencies
  + 667c5e1:
    Supporting remote execution of header ABI dump actions
  + 625fc40:
    Add more details on how to build the code and run tests, and how to contribute.
  + 99426b0:
    Add support for Bazelisk and pin to Bazel 2.2.0.
```

This release adds support for remote execution of header ABI dumper and adds a fix
for compare mode of metalava actions.

## Release 0.11.0 (2020-04-02)
```
Changes:
  + b2836e1:
    Add output_directories and multiple rsp files flags to rewrapper.
  + 4559f40:
    Log flags in rewrapper after parsing.
  + 8afef4a:
    Removing flags logging from rewrapper, making it verbosity 1
  + b7447ea:
    Use LOG_DIR variable in android integration tests.
  + 74ec9b9:
    Add support in reproxy for link actions
```

This release adds support for linking, explicit output directories, and multiple
input file lists. Also includes logging fixes.

## Release 0.10.0 (2020-04-01)
```
Changes:
  + 3be02a4:
    Fix metalava input processor.
  + 7c66991:
    Add common config file with artifact definitions for log files.
  + c2a1d10:
    Local execution to support non-uniform resource requirements. Bug: b/151818457
  + 000cd94:
    Cache metalava version to avoid running metalava multiple times.
  + 9615ed6:
    Refactor toolchain input processor and support version checks.
  + 0a5b462:
    Add a metalava flag parser.
  + 13dc031:
    Remove support for async artifact upload in LERC.
  + b5d8485:
    Failure in the input processor should fallback to local execution.
  + 751faad:
    Using SDK command proto (latest SDK commit)
  + 836d908:
    Logging improvements: log all flags from all binaries, log server address on failed dial
  + 3e20ddd:
    Add remote_disabled mode to reproxy.
```

This release mainly adds metalava support to reproxy.

## Release 0.9.5 (2020-03-16)
```
Changes:
  + 0bd4e59:
    Add scripts to do global setup of RBE variables to android developers
  + 3ff26d6:
    Add reproxy support for cache-silo key
  + 614329a:
    Dont clean command args by default
```

This release makes reproxy support cache silo key and does not clean arguments
for remote execution to prevent bootloops on output images.

## Release 0.9.4 (2020-03-05)
```
Changes:
  + 250a753:
    Fix unnecessary deps validation when deep input processor succeeds.
  + 061b94c:
    Add the gcno file to the output spec if --coverage is passed to clang
```

This release has fixes for downloading coverage file generated as part of clang
compiles and fixes LERC to NOT do un-necessary dependency validation.

## Release 0.9.3 (2020-03-03)
```
Changes:
  + 9d89a75:
    Updated the clang flag parser to handle more general clang commands.
  + a9eddb0:
    Document that --toolchain_inputs is relative to the exec root.
  + 628a60a:
    Handle -B flag and add it as a dependency.
  + bd7abce:
    Bump SDK version to include fix for batch download of blobs.
  + a792271:
    Modify create-release script to drop CHANGELOG.md to test/ folder
```

This release has fixes with respect to C++ input processor and bumps RE-SDK
version to include fix for batch blob downloads.

## Release 0.9.2 (2020-02-28)
```
Changes:
  + e140d51:
    Replace moreflag with rbeflag in the version package.
  + 290e433:
    Upgrade sdk to include batch upload size fix.
  + 415cb83:
    Enforce all returned paths from input processor are under exec root.
  + 80fb1b3:
    Remove the -fintegrated-cc1 flag when doing clang-scan-deps.
  + 6d0e3f1:
    Remove changelog from prebuilt-drop tool invocation
```

This release fixes a bug in reading RBE flags and includes input processor
refactorings and fixes for supporting the nest/chrome builds.

## Release 0.9.1 (2020-02-25)
```
Changes:
  + f4fae4d:
    Pass vargs to clang-scan-deps instead of combined string
  + 1ff5530:
    Remove the invalidation check in dependency scanner plugin
```

This release changes scan-deps interface so that it takes an unescaped
list of arguments instead of a JSON database string.

## Release 0.9.0 (2020-02-21)
```
Changes:
  + 9bdf5ca:
    Support toolchain_inputs flag for explicitly specifying toolchain
  + 4f47570:
    Handle -fsanitize-blacklist and -fprofile-sample-use similar to fprofile-use
  + b29d7a3:
    Change default execution strategy to undefined
  + 52cb208:
    Fix broken javac integ test.
  + 17cd328:
    rbeflag package allows setting flags with RBE_ prefixed env vars.
  + faf5c1e:
    Remove workaround to not delete inputs under output directories in compare mode.
  + 6abae0d:
    Add escaping for spaces on clang build command.
  + 09f5abf:
    toolchain: toolchain executable is workdir relative
  + 7179410:
    Fixing tool commands to process inputs shallow
  + bf15e5b:
    Adding ability to parse logs from multiple files, and save to separate files.
```

This release contains support for the toolchain_inputs flag and other fixes.

## Release 0.8.2 (2020-02-10)
```
Changes:
  + cc4b9cf:
    Fix log messages missing printing the error.
```

This release fixes missing error logs in removal of output directories in
compare mode.

## Release 0.8.1 (2020-02-07)
```
Changes:
  + 2ae2a7f:
    Prevent deletion of inputs under output directories in compare mode.
  + 8365bbf:
    Added strings replacer to properly encode quotation marks on created.
  + c8b2db9:
    Change updated flags instead of actual flags.
  + 453eceb:
    Added a feature to enable/disable the use of the toolchain input file.
  + f8f49b9:
    Support remote execution of javac/r8/d8.
  + ee5e60c:
    Propagate RBE_HTTP_PROXY value to reproxy, if set.
  + 7761b78:
    Add a debug helper function for dumping inputs to a tmp directory.
  + 587f2d4:
    Add working directory to the joined path of the .keep_me file.
  + 0284950:
    Add a feature to enable/disable the command argument cleaning. Default is enabled.
```

This release fixes a breakage in D8 compare builds due to having inputs under output
directories.

## Release 0.8.0 (2020-02-03)
```
Changes:
  + 7af0844
    Fix mismatch in ab/6089871 due to missing dependency on the --system dir.
  + 4cf6a50
    Update Android internal image to 2020-01-22 snapshot.
  + 6d08ef5
    Merge toolchain inputs in returned results in case of shallow fallback
  + 86630ca
    Fix segmentation fault when both toolchain and clangscandeps fail
  + 5c040c2
    Add javac LERC integration test.
  + fd852e5
    Add feature to enable in band update of action results to test
    whether it has an impact on performance.
  + 59f7155
    Fix crash in stat logging when accept-cached is false
  + f4a59aa
    Fix the paths returned by toolchain input processor
  + 0132e03
    Add -Qunused-arguments parameter to scan-deps invocation to suppress warnings
```

This release adds a feature to enable synchronous upload of cached results in LERC mode
and has a couple of bug-fixes for remote-execution flow.

## Release 0.7.2 (2020-01-23)
```
Changes:
  + edfbaae:
    Remove -verify flag before calling clang-scan-deps
  + 4930837:
    Revert "Merge "Optimize the dependency scanner plugin to reuse workers""
```

This release reverts the clang-scan-deps optimization since we discovered a bug
in clang-scan-deps caching behaviour when workers are reused.

## Release 0.7.1 (2020-01-20)
```
Changes:
  + bfee822:
    Fix occasional failure in Javac/R8/D8 compare builds
  + 6a54076:
    Remote execution integration test for re-client
  + 3cefecc:
    Optimize the dependency scanner plugin to reuse workers
  + a172d20:
    Aggregating stats per label.
  + 31fbea5:
    Use a random socket file in integration tests
  + 98f775a:
    Per proxy invocation ID.
  + fd4a213:
    Make rewrapper block until it can dial to reproxy.
  + 2b43cf9:
    Part 2 of renaming continuous_android tests to continuous_android_lerc
  + b5ced78:
    Updated scripts/install to run on mac as well as linux.
  + e15143f:
    Updated cgo directives to selectively pick certain libraries.
  + 900dbff:
    Update the dep scanning build script to run on macos as well as linux.
  + d9b6602:
    Update the cpp dependency scanner integration test to explicitly
  + f5eac3c:
    Update .gitignore file to ignore MacOS .DS_Store files.
  + 53b2fe8:
    Add virtual inputs for all -I and -isystem dir paths
```

This release includes a potential fix for the flaky resource exhaustion issue
as well as an optimization for the clang-scan-deps plugin.

## Release 0.7.0 (2020-01-06)
```
Changes:
  + ea1b2a1:
    Wireup the new toolchain input processor as part of ProcessInputs fn
  + f0ae7a8:
    Script to test application default creds on Android corp buildbots
```

This release adds a feature to search for "remote_toolchain_inputs" file that
lives alongside LLVM toolchains in Android to specify the list of files that
constitute toolchain inputs.

## Release 0.6.2 (2019-12-19)
```
Changes:
  + 41c7b59:
    Update remote-apis-sdks commit to include the GRPC fix in SDK
  + bd18b14:
    Prevent failure to load clang-scan-deps from failing actions.
```

This release primarily fixes the GRPC max concurrent streams issue in the SDK
and goes back to using full input processor as default.

## Release 0.6.1 (2019-12-16)
```
Changes:
  + d3de0ae:
    Make shallow input processing the default.
  + 8ded0c8:
    Fix for flakiness in logger that potentially caused b/146229435.
  + 25dab52:
    Add clang-scan-deps to LERC.
  + 8e55b12:
    Add verification mode to runRemote.
```

## Release 0.6.0 (2019-12-03)
```
Changes:

  + 6882689:
    Compare mode for actions with output directories.
  + 08499f0:
    Add flag to enable shadow header detection.
  + 709061a:
    Switching SDK to latest commit (retries)
  + 04eb160:
    Add a tool action type to run any tool with the inputs/outputs
  + f6cc51b:
    Add reproxy version number as a cache silo to all actions.
  + 0519b5b:
    Move flags structs to a separate package: pkg/flags.
  + c16f9c8:
    Simplify the signature of ProcessInputsShallow.
  + 1165068:
    Fix flaky test due to non-deterministic order of include directories.
  + 4ff0a4b:
    Optimize shadow headers performance.
  + 04223fe:
    Refactor runLERC code to follow go readability guidelines.
  + 4087961:
    Switching to latest SDK version
  + be22f0b:
    Add documentation about the dependency scanner plugin
  + 996339d:
    Change V(2) log to warning log when RE fails and we fallback to local
  + 689c6cb:
    Update foundry-vars.sh to the correct instance name.
  + d8bcce5:
    Make rewrapper retries less aggresssive and increase max retry duration
  + 356debf:
    Fixing stats aggregation bug.
  + 222117f:
    Pass rewrapper start time to reproxy for logging and aggregation.
  + b6b1478:
    Restrict input processor parallelism to num CPU cores
  + 7b54918:
    Adding include processor timing stats.
  + fe28910:
    Adding end-to-end timing stats, minor refactoring
  + 9c1afd7:
    Adding local execution timing stats to the proxy
  + 2cac73d:
    Rename rbe_metrics file to rbe_metrics.txt
  + 82edf55:
    Adding LERC deps timing metadata
  + 50d62ad:
    Add dependency scanner plugin to the release script
```

This release adds local performance metrics and shadow header detection as an
off by default feature.

## Release 0.5.3 (2019-11-13)
```
Changes:

  + da676b7:
    Statically link libstdc++ with the Go plugin to avoid
    libstdc++ version issues on Android buildbot.
```

This release addresses libstdc++ loading issue on dependency scanner plugin.

## Release 0.5.2 (2019-11-13)
```
Changes:

  + 7a4cc47:
    Don't fail reproxy when loading of dependency scanner plugin fails.
  + efea8bf:
    Add a temporary workaround suggested in rules_go to fix issue
    with version number stamping.
```

This release makes reproxy not fail when it cannot load CPP dependency
scanner plugin.

## Release 0.5.1 (2019-11-11)
```
Changes:

  + 05875af:
    Add dependency_scanner_go_plugin.so to Kokoro regex too
```

This release makes the Kokoro workflow also upload dependency scanner
plugin.

## Release 0.5.0 (2019-11-11)
```
Changes:

  + 2904c9d:
    Implementing LERC with include directories awareness for constructing
    dependency file.
  + 2c7f757:
    Migrating to latest dependency versions and Bazel 1.1.
  + cc8cc63:
    Wire up clang-scan-deps to input processor.
  + 13374fc:
    Adding output metrics and digests to proxy log and stats.
  + a46e81f:
    Support rsp files for javac compiles.
```

This release mainly adds dependency scanner plugin to support remote execution
for C++ compile actions.

## Release 0.3.0 (2019-10-22)
```
Changes:

  + ba1466e:
    Add flag to control bootstrap timeout
  + 55d0ad6:
    Keep track of RBE tool version in Dremel
  + 3839b37:
    Renaming Dial to NewClient for clarity
```

This release mainly adds RBE tool version number to dumpstats.
