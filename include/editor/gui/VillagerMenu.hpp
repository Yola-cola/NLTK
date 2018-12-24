#pragma once

#include <vector>
#include "CTRFont.hpp"
#include "imagebutton.h"
#include "villager.h"

namespace VillagerEditor {
    void Initialize();
    void Cleanup();
    void Draw();
    void ProcessInput();
    void Spawn();
    void DrawVillagerSprite(u16, const Point_t, const float, const float);

    static std::vector<ImageButton*> m_villagerEditorButtons;
    static Text* m_villagerNameText;
    static Villager* m_currentlySelectedVillager;
}