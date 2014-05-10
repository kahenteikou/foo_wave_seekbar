//          Copyright Lars Viklund 2008 - 2011.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#pragma once
#pragma warning(disable: 4005)
#define D3D_DEBUG_INFO
#include "util/Asio.h"

#include <algorithm>
using std::min;
using std::max;
#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <regex>
#include <tuple>
#include <vector>

#include <comdef.h>
#include <tchar.h>

#if 1
#include "../SDK/foobar2000.h"
#else
#include "../ATLHelpers/ATLHelpers.h"
#include <atlframe.h>
#include <atlcrack.h>
#include <dwmapi.h>
#endif

#include <delayimp.h>

#include "sqlite3.h"

#undef SelectBitmap
#undef SelectBrush
#undef SelectPen

#include "frontend_sdk/FrontendHelpers.h"
#include <boost/atomic.hpp>