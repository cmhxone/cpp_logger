// ----------------------------------------------------------------------------
// Copyright (C) 2023 Cho Mu Hyeon
//
// Author: Cho Mu Hyeon
// ----------------------------------------------------------------------------
#include <util/logger.h>

#include <sstream>

namespace util
{
    namespace logger
    {
        const std::string formatSourceLocation(const std::string_view format, const std::source_location location)
        {
            std::stringstream ss{};
            ss << location.file_name() << "("
               << location.line() << ":"
               << location.column() << ") `"
               << location.function_name() << "`: "
               << format;

            return ss.str();
        }
    }
}
