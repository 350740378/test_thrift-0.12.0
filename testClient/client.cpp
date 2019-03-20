#include "HelloService.h"
#include <thrift/concurrency/ThreadManager.h>
#include <thrift/concurrency/PlatformThreadFactory.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/server/TThreadPoolServer.h>
#include <thrift/server/TThreadedServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>
#include <thrift/TToString.h>
#include <thrift/stdcxx.h>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <stdint.h>

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::concurrency;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using namespace apache::thrift::server;
using boost::shared_ptr;

int main(int argc, char** argv)
{
	stdcxx::shared_ptr<TTransport> socket(new TSocket("localhost", 9090));
	stdcxx::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
	stdcxx::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
	HelloServiceClient client(protocol);

	try
	{
		transport->open();
		int16_t x = 8;
		int16_t y = 87;
		int16_t ret = client.addxy(x, y);
		printf("testClient11111  %d\n", ret);
		getchar();
		transport->close();
	}
	catch (TException& tx)
	{
		printf("ERROR:%s\n", tx.what());
	}
}