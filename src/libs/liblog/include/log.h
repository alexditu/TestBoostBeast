#ifndef __LIBLOG_H__
#define __LIBLOG_H__

#include <spdlog/spdlog.h>

#define logD spdlog::debug
#define logE spdlog::error
#define logW spdlog::warn
#define logT spdlog::trace

void initLogger(spdlog::level::level_enum logLevel = spdlog::level::trace);

#endif // __LIBLOG_H__