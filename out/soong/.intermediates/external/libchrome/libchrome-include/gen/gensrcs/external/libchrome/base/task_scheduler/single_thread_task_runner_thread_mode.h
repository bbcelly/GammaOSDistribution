// Generated by out/soong/.temp/sbox/a7f98b4eac1e435e2f231d69eccf4832d8f07bb3/tools/src/external/libchrome/libchrome_tools/include_generator.py
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BASE_TASK_SCHEDULER_SINGLE_THREAD_TASK_RUNNER_THREAD_MODE_H_
#define BASE_TASK_SCHEDULER_SINGLE_THREAD_TASK_RUNNER_THREAD_MODE_H_

namespace base {

enum class SingleThreadTaskRunnerThreadMode {
  // Allow the SingleThreadTaskRunner's thread to be shared with others,
  // allowing for efficient use of thread resources when this
  // SingleThreadTaskRunner is idle. This is the default mode and is
  // recommended for most code.
  SHARED,
  // Dedicate a single thread for this SingleThreadTaskRunner. No other tasks
  // from any other source will run on the thread backing the
  // SingleThreadTaskRunner. Use sparingly as this reserves an entire thread for
  // this SingleThreadTaskRunner.
  DEDICATED,
};

}  // namespace base

#endif  // BASE_TASK_SCHEDULER_SINGLE_THREAD_TASK_RUNNER_THREAD_MODE_H_
#pragma GCC diagnostic pop
