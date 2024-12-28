#pragma once

#include "esphome/components/switch/switch.h"
#include "../radsense.h"

namespace esphome {
namespace radsense {

class LedControl : public switch_::Switch, public Parented<RadSenseComponent> {
 public:
  LedControl() = default;

 protected:
  void write_state(bool state) override;
};

}  // namespace radsense
}  // namespace esphome