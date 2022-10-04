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

struct SDL_RWops;

/**
 * std::unique_ptr defines for SDL types, with appropriate deleters defined
 */
struct SDLDeleter
{
    void operator()(SDL_RWops* ptr) const;
};

using UniqueSDLRWOps = std::unique_ptr<SDL_RWops, SDLDeleter>;
