#pragma once
#include "fin/app/iapp.h"
#include "fin/app/components/icomponent.h"
#include "fin/graphics/igraphics.h"

namespace fin::app {
  class IRenderComponent : IComponent {
    public:

    void render(graphics::IGraphics* g ) {

    }
  };
}
