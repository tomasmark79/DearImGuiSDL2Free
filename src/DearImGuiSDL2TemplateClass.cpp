// MIT License
// Copyright (c) 2024-2025 Tomáš Mark

#include <DearImGuiSDL2TemplateClass/DearImGuiSDL2TemplateClass.hpp>
#include <Assets/AssetContext.hpp>
#include <Logger/Logger.hpp>
#include <Utils/Utils.hpp>

#if defined(PLATFORM_WEB)
  #include <emscripten/emscripten.h>
#endif

namespace dotname {

  DearImGuiSDL2TemplateClass::DearImGuiSDL2TemplateClass () {
    LOG_D_STREAM << libName_ << " constructed ..." << std::endl;
    AssetContext::clearAssetsPath ();
  }

  DearImGuiSDL2TemplateClass::DearImGuiSDL2TemplateClass (const std::filesystem::path& assetsPath) : DearImGuiSDL2TemplateClass () {
    if (!assetsPath.empty ()) {
      AssetContext::setAssetsPath (assetsPath);
      LOG_D_STREAM << "Assets path given to the library\n"
                   << "╰➤ " << AssetContext::getAssetsPath () << std::endl;
      auto logo = std::ifstream (AssetContext::getAssetsPath () / "logo.png");
    }
  }

  DearImGuiSDL2TemplateClass::~DearImGuiSDL2TemplateClass () {
    LOG_D_STREAM << libName_ << " ... destructed" << std::endl;
  }

} // namespace dotname