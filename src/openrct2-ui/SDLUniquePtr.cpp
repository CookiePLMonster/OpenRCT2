/*****************************************************************************
 * Copyright (c) 2014-2022 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#include "SDLUniquePtr.h"

#include <SDL.h>

void SDLDeleter::operator()(SDL_RWops* ptr) const
{
    if (ptr != nullptr)
    {
        SDL_RWclose(ptr);
    }
}

void SDLDeleter::operator()(SDL_Window* ptr) const
{
    if (ptr != nullptr)
    {
        SDL_DestroyWindow(ptr);
    }
}
