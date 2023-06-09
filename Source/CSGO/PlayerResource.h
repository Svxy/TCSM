#pragma once

#include "../Netvars.h"
#include "VirtualMethod.h"

namespace csgo
{

struct Vector;

struct IPlayerResource : private VirtualCallable {
    using VirtualCallable::VirtualCallable;

    VIRTUAL_METHOD_V(bool, isAlive, 5, (int index), (index))
    VIRTUAL_METHOD_V(const char*, getPlayerName, 8, (int index), (index))
    VIRTUAL_METHOD_V(int, getPlayerHealth, 14, (int index), (index))
};

struct PlayerResource {
    auto getIPlayerResource() noexcept
    {
        return IPlayerResource{ retSpoofGadgets->client, std::uintptr_t(this) + WIN32_LINUX(0x9D8, 0xF68) };
    }

    NETVAR(bombsiteCenterA, "CCSPlayerResource", "m_bombsiteCenterA", Vector)
    NETVAR(bombsiteCenterB, "CCSPlayerResource", "m_bombsiteCenterB", Vector)
    NETVAR(musicID, "CCSPlayerResource", "m_nMusicID", int[65])
    NETVAR(activeCoinRank, "CCSPlayerResource", "m_nActiveCoinRank", int[65])
};

}
