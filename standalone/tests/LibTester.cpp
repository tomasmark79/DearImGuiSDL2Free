// MIT License
// Copyright (c) 2024-2025 Tomáš Mark

#include "../src/AppCore.hpp"
#include <gtest/gtest.h>

TEST (DotNameStandaloneLogic, HandlesArguments) {
  const char* argv[] = { "DotNameStandalone", "--help" };
  EXPECT_EQ (runDotNameStandalone (2, argv), 0);
}

TEST (DotNameStandaloneLogic, HandlesArgumentsNoLibrary) {
  const char* argv[] = { "DotNameStandalone", "--omit" };
  EXPECT_EQ (runDotNameStandalone (2, argv), 0);
}

TEST (DotNameStandaloneLogic, HandlesArgumentsLog2File) {
  const char* argv[] = { "DotNameStandalone", "--log2file" };
  EXPECT_EQ (runDotNameStandalone (2, argv), 0);
}
