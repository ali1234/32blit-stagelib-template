#pragma once

#include "Stage.hpp"


class StageGame : public Stage {
    public:
        StageGame() {}
        void update(uint32_t time, ButtonState buttons) override;
        void render() override;
};
