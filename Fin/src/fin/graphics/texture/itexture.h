#pragma once

namespace fin::graphics {
  class ITexture {
    public:
    ITexture() {}

    virtual int get_width() const = 0;
    virtual int get_height() const = 0;
  };
}
