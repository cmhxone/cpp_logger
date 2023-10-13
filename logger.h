// ----------------------------------------------------------------------------
// Copyright (C) 2023 Cho Mu Hyeon
//
// Author: Cho Mu Hyeon
// ----------------------------------------------------------------------------
#pragma once

#include <string_view>
#include <source_location>

#include <spdlog/spdlog.h>

#ifndef __CHOMUHYEON_LOGGER__
#define __CHOMUHYEON_LOGGER__
#define __TRACE_LOG(FMT, ...) spdlog::trace(util::logger::formatSourceLocation(FMT), __VA_ARGS__)
#define __DEBUG_LOG(FMT, ...) spdlog::debug(util::logger::formatSourceLocation(FMT), __VA_ARGS__)
#define __INFO_LOG(FMT, ...) spdlog::info(util::logger::formatSourceLocation(FMT), __VA_ARGS__)
#define __WARN_LOG(FMT, ...) spdlog::warn(util::logger::formatSourceLocation(FMT), __VA_ARGS__)
#define __ERROR_LOG(FMT, ...) spdlog::error(util::logger::formatSourceLocation(FMT), __VA_ARGS__)
#define __FATAL_LOG(FMT, ...) spdlog::critical(util::logger::formatSourceLocation(FMT), __VA_ARGS__)
#endif

namespace util
{
    namespace logger
    {
        const std::string formatSourceLocation(const std::string_view format, const std::source_location location = std::source_location::current());
    }
}
