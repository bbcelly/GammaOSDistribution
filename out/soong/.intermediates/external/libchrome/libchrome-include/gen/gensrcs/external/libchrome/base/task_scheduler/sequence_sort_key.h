// Generated by out/soong/.temp/sbox/a7f98b4eac1e435e2f231d69eccf4832d8f07bb3/tools/src/external/libchrome/libchrome_tools/include_generator.py
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BASE_TASK_SCHEDULER_SEQUENCE_SORT_KEY_H_
#define BASE_TASK_SCHEDULER_SEQUENCE_SORT_KEY_H_

#include "base/base_export.h"
#include "base/task_scheduler/task_traits.h"
#include "base/time/time.h"

namespace base {
namespace internal {

// An immutable but assignable representation of the priority of a Sequence.
class BASE_EXPORT SequenceSortKey final {
 public:
  SequenceSortKey(TaskPriority priority, TimeTicks next_task_sequenced_time);

  TaskPriority priority() const { return priority_; }
  TimeTicks next_task_sequenced_time() const {
    return next_task_sequenced_time_;
  }

  bool operator<(const SequenceSortKey& other) const;
  bool operator>(const SequenceSortKey& other) const { return other < *this; }

  bool operator==(const SequenceSortKey& other) const {
    return priority_ == other.priority_ &&
           next_task_sequenced_time_ == other.next_task_sequenced_time_;
  }
  bool operator!=(const SequenceSortKey& other) const {
    return !(other == *this);
  };

 private:
  // The private section allows this class to keep its immutable property while
  // being copy-assignable (i.e. instead of making its members const).

  // Highest task priority in the sequence at the time this sort key was
  // created.
  TaskPriority priority_;

  // Sequenced time of the next task to run in the sequence at the time this
  // sort key was created.
  TimeTicks next_task_sequenced_time_;
};

}  // namespace internal
}  // namespace base

#endif  // BASE_TASK_SCHEDULER_SEQUENCE_SORT_KEY_H_
#pragma GCC diagnostic pop
