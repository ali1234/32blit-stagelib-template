#include "StageTitle.hpp"
#include "StageGame.hpp"
#include "FancyText.hpp"


void StageTitle::update(uint32_t time, ButtonState buttons) {
    if (!finished()) {
        if (buttons.pressed(ButtonState::ABXY)) {
            finish(std::make_shared<Fade>(shared_from_this(), std::make_shared<StageGame>()));
        }
    }
}

void StageTitle::render() {
    blit::screen.pen = blit::Pen(200, 20, 20);
    blit::screen.clear();
    fancy_text("Title Screen\nPress Button", blit::Point(160, 120), false, blit::TextAlign::center_center);
}