#pragma once

#ifndef GAMESELECTMENU_HPP
#define GAMESELECTMENU_HPP

namespace Core
{
    u64 Spawn_GameSelectMenu(FS_MediaType &mediaType, bool ResetOnExit = false);
    void Draw_GameSelectMenu(void);

    namespace GameSelectMenu
    {
        void Initialize(void);
    }
}

#endif