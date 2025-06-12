// MIT License
// Copyright (c) 2024-2025 Tomáš Mark

#ifndef __DEARIMGUISDL2TEMPLATECLASS_HPP
#define __DEARIMGUISDL2TEMPLATECLASS_HPP

#include <DearImGuiSDL2TemplateClass/version.h>
#include <filesystem>
#include <string>

// Public API

namespace dotname {

  class DearImGuiSDL2TemplateClass {

    const std::string libName_ = std::string ("DearImGuiSDL2TemplateClass v.") + DEARIMGUISDL2TEMPLATECLASS_VERSION;

  public:
    DearImGuiSDL2TemplateClass ();
    DearImGuiSDL2TemplateClass (const std::filesystem::path& assetsPath);
    ~DearImGuiSDL2TemplateClass ();
  };

} // namespace dotname

#endif // __DEARIMGUISDL2TEMPLATECLASS_HPP