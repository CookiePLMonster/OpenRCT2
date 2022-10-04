/*****************************************************************************
 * Copyright (c) 2014-2022 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include <memory>

struct SDL_Renderer;
struct SDL_RWops;
struct SDL_Window;

/**
 * std::unique_ptr defines for SDL types, with appropriate deleters defined
 */
struct SDLDeleter
{
    void operator()(SDL_Renderer* ptr) const;
    void operator()(SDL_RWops* ptr) const;
    void operator()(SDL_Window* ptr) const;
};

using UniqueSDLRenderer = std::unique_ptr<SDL_Renderer, SDLDeleter>;
using UniqueSDLRWOps = std::unique_ptr<SDL_RWops, SDLDeleter>;
using UniqueSDLWindow = std::unique_ptr<SDL_Window, SDLDeleter>;
