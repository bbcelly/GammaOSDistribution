#include <iostream>

#include "dex/dex_file_layout.h"

// This was automatically generated by art/tools/generate_operator_out.py --- do not edit!
namespace art {
std::ostream& operator<<(std::ostream& os, LayoutType rhs) {
  switch (rhs) {
    case LayoutType::kLayoutTypeHot: os << "LayoutTypeHot"; break;
    case LayoutType::kLayoutTypeSometimesUsed: os << "LayoutTypeSometimesUsed"; break;
    case LayoutType::kLayoutTypeStartupOnly: os << "LayoutTypeStartupOnly"; break;
    case LayoutType::kLayoutTypeUsedOnce: os << "LayoutTypeUsedOnce"; break;
    case LayoutType::kLayoutTypeUnused: os << "LayoutTypeUnused"; break;
    case LayoutType::kLayoutTypeCount: os << "LayoutTypeCount"; break;
  }
  return os;
}
}  // namespace art

// This was automatically generated by art/tools/generate_operator_out.py --- do not edit!
namespace art {
std::ostream& operator<<(std::ostream& os, MadviseState rhs) {
  switch (rhs) {
    case MadviseState::kMadviseStateAtLoad: os << "MadviseStateAtLoad"; break;
    case MadviseState::kMadviseStateFinishedLaunch: os << "MadviseStateFinishedLaunch"; break;
    case MadviseState::kMadviseStateFinishedTrim: os << "MadviseStateFinishedTrim"; break;
  }
  return os;
}
}  // namespace art

// This was automatically generated by art/tools/generate_operator_out.py --- do not edit!
namespace art {
std::ostream& operator<<(std::ostream& os, DexLayoutSections::SectionType rhs) {
  switch (rhs) {
    case DexLayoutSections::SectionType::kSectionTypeCode: os << "SectionTypeCode"; break;
    case DexLayoutSections::SectionType::kSectionTypeStrings: os << "SectionTypeStrings"; break;
    case DexLayoutSections::SectionType::kSectionCount: os << "SectionCount"; break;
  }
  return os;
}
}  // namespace art

