// MIT License
// Copyright (c) 2024-2025 Tomáš Mark

#include "../src/AppCore.hpp"
#include <gtest/gtest.h>

TEST (DearImGuiSDL2AppLogic, HandlesArguments) {
  const char* argv[] = { "DearImGuiSDL2App", "--help" };
  EXPECT_EQ (runDearImGuiSDL2App (2, argv), 0);
}

TEST (DearImGuiSDL2AppLogic, HandlesArgumentsNoLibrary) {
  const char* argv[] = { "DearImGuiSDL2App", "--omit" };
  EXPECT_EQ (runDearImGuiSDL2App (2, argv), 0);
}

TEST (DearImGuiSDL2AppLogic, HandlesArgumentsLog2File) {
  const char* argv[] = { "DearImGuiSDL2App", "--log2file" };
  EXPECT_EQ (runDearImGuiSDL2App (2, argv), 0);
}
