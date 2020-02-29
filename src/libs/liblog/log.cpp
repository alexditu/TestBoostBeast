#include "log.h"

void initLogger(spdlog::level::level_enum logLevel)
{
	spdlog::set_level(logLevel);
}