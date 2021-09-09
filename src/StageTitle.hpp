#pragma once

#include "Stage.hpp"


class StageTitle : public Stage {
    public:
        StageTitle() {}
        void update(uint32_t time, ButtonState buttons) override;
        void render() override;
};
