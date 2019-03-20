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
#include <thrift/async/TEvhttpClientChannel.h>
#include <stdint.h>

#include <stdio.h>
//#include <getopt.h>
//#include <event.h>
#include <string>
#include <iostream>
#include <boost/bind.hpp>
#include <boost/function.hpp>
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>
#include <thrift/async/TEvhttpClientChannel.h>
#include <thrift/server/TNonblockingServer.h>

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::concurrency;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using namespace apache::thrift::server;
using namespace apache::thrift::async;
using boost::shared_ptr;
using namespace ::apache::thrift::stdcxx;

class testClient : public HelloServiceCobClient
{
public:
	testClient(::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::async::TAsyncChannel> channel, TProtocolFactory* protocolFactory)
		: HelloServiceCobClient(channel, protocolFactory)
	{ };

	virtual void completed__(bool success)
	{
		if (success)
		{// 输出返回结果
			printf("respone : %s \n", res.c_str()); 
		}
		else
		{
			printf("failed to respone\n");
		}
		fflush(0);
	};

	string res;
};

// callback function

static int16_t my_recv_addxy(HelloServiceCobClient* client)
{
	//int16_t HelloServiceClient::recv_addxy()
	//int16_t HelloServiceClient::recv_addxy()
	//client->recv_addxy(dynamic_cast<testClient *>(client)->res);
	client->recv_addxy();
};

static int16_t sendaddxy(testClient& client)
{
	printf("sendaddxy start\n");
	function<void(HelloServiceCobClient* client)> cob = bind(&my_recv_addxy);
	//function<void(HelloServiceCobClient* client)> cob = bind(&my_recv_addxy, _1);
	client.addxy(cob, 8,9);   // 发送并注册回调函数
	printf("sendaddxy end\n");
}

static void DoSimpleTest(const std::string& host, int port)
{
	printf("running DoSimpleTest( %s, %d) ...\n",host.c_str(), port);

	event_base* base = event_base_new();
	//TAsyncChannel *ptmp = new TEvhttpClientChannel(host, "/", host.c_str(), port, base, 0);
	boost::shared_ptr< ::apache::thrift::async::TAsyncChannel>  channel1(new TEvhttpClientChannel(host, "/", host.c_str(), port, base));
	//shared_ptr<TAsyncChannel> channxel1x(new TEvhttpClientChannel(host, "/", host.c_str(), port, base, 0));
//	boost::shared_ptr<TAsyncChannel> channxel1x(new TEvhttpClientChannel(host, "/", host.c_str(), port, base, 0));
	//shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
	//::apache::thrift::stdcxx::shared_ptr<TAsyncProcessor> underlying_pro(new HelloServiceAsyncProcessor(::apache::thrift::stdcxx::shared_ptr<HelloServiceCobSvIf>(new HelloServiceAsyncHandler())))


	testClient client1(channel1, new TBinaryProtocolFactory());

	sendaddxy(client1);   // 发送第一个请求

	boost::shared_ptr< ::apache::thrift::async::TAsyncChannel>  channel2(new TEvhttpClientChannel(host, "/", host.c_str(), port, base ));

	testClient client2(channel2, new TBinaryProtocolFactory());

	sendString(client2);  // 发送第二个请求

	event_base_dispatch(base);

	event_base_free(base);

	printf("done DoSimpleTest().\n");
}


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