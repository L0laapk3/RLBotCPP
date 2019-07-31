#pragma once

#include "namedrenderer.h"

#include <string>

class ScopedRenderer : public NamedRenderer {
public:
  ScopedRenderer(std::string name);
  ~ScopedRenderer();

  ScopedRenderer &operator=(const ScopedRenderer &) = delete;
  ScopedRenderer(const ScopedRenderer &) = delete;
};