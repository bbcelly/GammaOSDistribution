// Generated by out/soong/.temp/sbox/fffc56dfdd7bcb4bf9fd22f02bfb84789b220196/tools/src/external/libchrome/libchrome_tools/include_generator.py
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BASE_BASE64_H_
#define BASE_BASE64_H_

#include <string>

#include "base/base_export.h"
#include "base/strings/string_piece.h"

namespace base {

// Encodes the input string in base64. The encoding can be done in-place.
BASE_EXPORT void Base64Encode(const StringPiece& input, std::string* output);

// Decodes the base64 input string.  Returns true if successful and false
// otherwise. The output string is only modified if successful. The decoding can
// be done in-place.
BASE_EXPORT bool Base64Decode(const StringPiece& input, std::string* output);

}  // namespace base

#endif  // BASE_BASE64_H_
#pragma GCC diagnostic pop
