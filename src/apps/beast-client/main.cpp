
#include <log.h>

#include <boost/asio/io_context.hpp>

int main(int argc, char** argv)
{
	initLogger();

	logD("Hello world");

	boost::asio::io_context ioContext;

	return 0;
}