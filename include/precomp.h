#ifndef __PRECOMP_H__
#define __PRECOMP_H__

//#define WIN32_LEAN_AND_MEAN

//STL
#include <iostream>
#include <regex>
#include <algorithm>
#include <fstream>

//Project header files
#include "Svandex.h"

/*
rapidjson include header files

https://github.com/tencent/rapidjson
*/
#pragma push_macro("min")
#pragma push_macro("max")
#undef min
#undef max
#include "rapidjson/stringbuffer.h"
#include "rapidjson/reader.h"
#include "rapidjson/writer.h"

#include "rapidjson/document.h"
#include "rapidjson/error/en.h"
#include "rapidjson/istreamwrapper.h"
#pragma pop_macro("min")
#pragma pop_macro("max")

/*
mysql xdev api header files

https://github.com/mysql/mysql-connector-cpp
#include "mysqlx/xdevapi.h"
*/

/*
sqlite header file
*/
#include "sqlite3.h"

/*
libjpeg-turbo header
*/
#include "jpeglib.h"

/*
Module header file
*/
#include "tvutility.h"
#include "mysqlmodulec.h"
/*
#include "RigNetModule.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Data.Json.h"
*/

#endif