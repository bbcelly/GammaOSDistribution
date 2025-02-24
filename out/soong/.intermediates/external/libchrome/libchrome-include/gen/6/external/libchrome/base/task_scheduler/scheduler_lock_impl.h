// Generated by out/soong/.temp/sbox/a7f98b4eac1e435e2f231d69eccf4832d8f07bb3/tools/src/external/libchrome/libchrome_tools/include_generator.py
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BASE_TASK_SCHEDULER_SCHEDULER_LOCK_IMPL_H
#define BASE_TASK_SCHEDULER_SCHEDULER_LOCK_IMPL_H

#include <memory>

#include "base/base_export.h"
#include "base/macros.h"
#include "base/synchronization/lock.h"

namespace base {

class ConditionVariable;

namespace internal {

// A regular lock with simple deadlock correctness checking.
// This lock tracks all of the available locks to make sure that any locks are
// acquired in an expected order.
// See scheduler_lock.h for details.
class BASE_EXPORT SchedulerLockImpl {
 public:
  SchedulerLockImpl();
  explicit SchedulerLockImpl(const SchedulerLockImpl* predecessor);
  ~SchedulerLockImpl();

  void Acquire();
  void Release();

  void AssertAcquired() const;

  std::unique_ptr<ConditionVariable> CreateConditionVariable();

 private:
  Lock lock_;

  DISALLOW_COPY_AND_ASSIGN(SchedulerLockImpl);
};

}  // namespace internal
}  // namespace base

#endif  // BASE_TASK_SCHEDULER_SCHEDULER_LOCK_IMPL_H
#pragma GCC diagnostic pop
