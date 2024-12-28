#pragma once

#include "esphome/components/switch/switch.h"
#include "../radsens.h"

namespace esphome {
namespace radsens {

class LowPowerControl : public switch_::Switch, public Parented<RadSensComponent> {
 public:
  LowPowerControl() = default;
  void setup();

 protected:
  void write_state(bool state) override;
};

}  // namespace radsens
}  // namespace esphome