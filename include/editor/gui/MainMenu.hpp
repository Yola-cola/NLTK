#pragma once

#ifndef MAINMENU_HPP
#define MAINMENU_HPP

namespace Editor
{
    bool SaveCheck(void);
    void Draw_MainMenu(void);
    int Spawn_MainMenu(Save *saveFile);

} // namespace Editor

#endif