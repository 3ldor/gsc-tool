// Copyright 2022 xensik. All rights reserved.
//
// Use of this source code is governed by a GNU GPLv3 license
// that can be found in the LICENSE file.

#include "stdafx.hpp"
#include "s1c.hpp"

namespace xsk::gsc::s1c
{

void context::init(build mode, read_cb_type callback)
{
    compiler_.mode(mode);
    resolver::init(callback);
}

void context::cleanup()
{
    resolver::cleanup();
}

} // namespace xsk::gsc::s1c