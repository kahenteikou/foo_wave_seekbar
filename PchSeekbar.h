//          Copyright Lars Viklund 2008 - 2011.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#pragma once
#pragma warning(disable: 4005)
#define D3D_DEBUG_INFO
#define _WIN32_WINNT 0x0501
#define BOOST_SPIRIT_USE_PHOENIX_V3

#define NOMINMAX
#define BOOST_ASIO_NO_WIN32_LEAN_AND_MEAN
#include <boost/algorithm/string.hpp>
#include <boost/asio.hpp>
#include <boost/assign.hpp>
#include <boost/cstdint.hpp>
#include <boost/foreach.hpp>
#include <boost/format.hpp>
#include <boost/function.hpp>
#include <boost/thread.hpp>
#include <boost/noncopyable.hpp>
#include <boost/regex.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/spirit/home/karma.hpp>
#include <boost/make_shared.hpp>
using boost::scoped_ptr;
using boost::shared_ptr;
typedef boost::recursive_mutex::scoped_lock scoped_lock;

using boost::int8_t;
using boost::int16_t;
using boost::int32_t;
using boost::int64_t;
using boost::uint8_t;
using boost::uint16_t;
using boost::uint32_t;
using boost::uint64_t;

using boost::function;

#include <boost/range/iterator_range.hpp>
namespace karma = boost::spirit::karma;

#include <algorithm>
using std::min;
using std::max;

#include <comdef.h>
#include <d3d10_1.h>
#include <d3dx10.h>
#include <d3d9.h>
#include <d3dx9.h>
#include <dxerr.h>
#include <tchar.h>

#include "../ATLHelpers/ATLHelpers.h"
#include <atlframe.h>
#include <atlcrack.h>
#include "../columns_ui-sdk/ui_extension.h"
#include <dwmapi.h>

#include <map>
#include <vector>

using namespace boost::assign;

using boost::noncopyable;

#include <boost/scoped_ptr.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>
#include <boost/make_shared.hpp>
using boost::scoped_ptr;
using boost::shared_ptr;
using boost::weak_ptr;
using boost::make_shared;


#include <boost/cstdint.hpp>

using boost::uint8_t;
using boost::uint16_t;
using boost::uint32_t;

#include <boost/enable_shared_from_this.hpp>
#include <boost/optional.hpp>

using boost::enable_shared_from_this;
using boost::optional;


#include <delayimp.h>

#include "sqlite3.h"

#undef SelectBitmap
#undef SelectBrush
#undef SelectPen

#define BOOST_UTF8_BEGIN_NAMESPACE namespace utf8 {
#define BOOST_UTF8_END_NAMESPACE }
#define BOOST_UTF8_DECL
#include <boost/detail/utf8_codecvt_facet.hpp>

#include <boost/foreach.hpp>