/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef HelloService_H
#define HelloService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "Hello_types.h"

namespace HelloThrift { namespace Interface {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class HelloServiceIf {
 public:
  virtual ~HelloServiceIf() {}
  virtual void HelloString(std::string& _return, const std::string& para) = 0;
  virtual int32_t HelloInt(const int32_t para) = 0;
  virtual bool HelloBoolean(const bool para) = 0;
  virtual void HelloVoid() = 0;
  virtual void HelloNull(std::string& _return) = 0;
};

class HelloServiceIfFactory {
 public:
  typedef HelloServiceIf Handler;

  virtual ~HelloServiceIfFactory() {}

  virtual HelloServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(HelloServiceIf* /* handler */) = 0;
};

class HelloServiceIfSingletonFactory : virtual public HelloServiceIfFactory {
 public:
  HelloServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<HelloServiceIf>& iface) : iface_(iface) {}
  virtual ~HelloServiceIfSingletonFactory() {}

  virtual HelloServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(HelloServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<HelloServiceIf> iface_;
};

class HelloServiceNull : virtual public HelloServiceIf {
 public:
  virtual ~HelloServiceNull() {}
  void HelloString(std::string& /* _return */, const std::string& /* para */) {
    return;
  }
  int32_t HelloInt(const int32_t /* para */) {
    int32_t _return = 0;
    return _return;
  }
  bool HelloBoolean(const bool /* para */) {
    bool _return = false;
    return _return;
  }
  void HelloVoid() {
    return;
  }
  void HelloNull(std::string& /* _return */) {
    return;
  }
};

typedef struct _HelloService_HelloString_args__isset {
  _HelloService_HelloString_args__isset() : para(false) {}
  bool para :1;
} _HelloService_HelloString_args__isset;

class HelloService_HelloString_args {
 public:

  HelloService_HelloString_args(const HelloService_HelloString_args&);
  HelloService_HelloString_args& operator=(const HelloService_HelloString_args&);
  HelloService_HelloString_args() : para() {
  }

  virtual ~HelloService_HelloString_args() throw();
  std::string para;

  _HelloService_HelloString_args__isset __isset;

  void __set_para(const std::string& val);

  bool operator == (const HelloService_HelloString_args & rhs) const
  {
    if (!(para == rhs.para))
      return false;
    return true;
  }
  bool operator != (const HelloService_HelloString_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloString_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HelloService_HelloString_pargs {
 public:


  virtual ~HelloService_HelloString_pargs() throw();
  const std::string* para;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HelloService_HelloString_result__isset {
  _HelloService_HelloString_result__isset() : success(false) {}
  bool success :1;
} _HelloService_HelloString_result__isset;

class HelloService_HelloString_result {
 public:

  HelloService_HelloString_result(const HelloService_HelloString_result&);
  HelloService_HelloString_result& operator=(const HelloService_HelloString_result&);
  HelloService_HelloString_result() : success() {
  }

  virtual ~HelloService_HelloString_result() throw();
  std::string success;

  _HelloService_HelloString_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const HelloService_HelloString_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const HelloService_HelloString_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloString_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HelloService_HelloString_presult__isset {
  _HelloService_HelloString_presult__isset() : success(false) {}
  bool success :1;
} _HelloService_HelloString_presult__isset;

class HelloService_HelloString_presult {
 public:


  virtual ~HelloService_HelloString_presult() throw();
  std::string* success;

  _HelloService_HelloString_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _HelloService_HelloInt_args__isset {
  _HelloService_HelloInt_args__isset() : para(false) {}
  bool para :1;
} _HelloService_HelloInt_args__isset;

class HelloService_HelloInt_args {
 public:

  HelloService_HelloInt_args(const HelloService_HelloInt_args&);
  HelloService_HelloInt_args& operator=(const HelloService_HelloInt_args&);
  HelloService_HelloInt_args() : para(0) {
  }

  virtual ~HelloService_HelloInt_args() throw();
  int32_t para;

  _HelloService_HelloInt_args__isset __isset;

  void __set_para(const int32_t val);

  bool operator == (const HelloService_HelloInt_args & rhs) const
  {
    if (!(para == rhs.para))
      return false;
    return true;
  }
  bool operator != (const HelloService_HelloInt_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloInt_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HelloService_HelloInt_pargs {
 public:


  virtual ~HelloService_HelloInt_pargs() throw();
  const int32_t* para;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HelloService_HelloInt_result__isset {
  _HelloService_HelloInt_result__isset() : success(false) {}
  bool success :1;
} _HelloService_HelloInt_result__isset;

class HelloService_HelloInt_result {
 public:

  HelloService_HelloInt_result(const HelloService_HelloInt_result&);
  HelloService_HelloInt_result& operator=(const HelloService_HelloInt_result&);
  HelloService_HelloInt_result() : success(0) {
  }

  virtual ~HelloService_HelloInt_result() throw();
  int32_t success;

  _HelloService_HelloInt_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const HelloService_HelloInt_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const HelloService_HelloInt_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloInt_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HelloService_HelloInt_presult__isset {
  _HelloService_HelloInt_presult__isset() : success(false) {}
  bool success :1;
} _HelloService_HelloInt_presult__isset;

class HelloService_HelloInt_presult {
 public:


  virtual ~HelloService_HelloInt_presult() throw();
  int32_t* success;

  _HelloService_HelloInt_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _HelloService_HelloBoolean_args__isset {
  _HelloService_HelloBoolean_args__isset() : para(false) {}
  bool para :1;
} _HelloService_HelloBoolean_args__isset;

class HelloService_HelloBoolean_args {
 public:

  HelloService_HelloBoolean_args(const HelloService_HelloBoolean_args&);
  HelloService_HelloBoolean_args& operator=(const HelloService_HelloBoolean_args&);
  HelloService_HelloBoolean_args() : para(0) {
  }

  virtual ~HelloService_HelloBoolean_args() throw();
  bool para;

  _HelloService_HelloBoolean_args__isset __isset;

  void __set_para(const bool val);

  bool operator == (const HelloService_HelloBoolean_args & rhs) const
  {
    if (!(para == rhs.para))
      return false;
    return true;
  }
  bool operator != (const HelloService_HelloBoolean_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloBoolean_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HelloService_HelloBoolean_pargs {
 public:


  virtual ~HelloService_HelloBoolean_pargs() throw();
  const bool* para;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HelloService_HelloBoolean_result__isset {
  _HelloService_HelloBoolean_result__isset() : success(false) {}
  bool success :1;
} _HelloService_HelloBoolean_result__isset;

class HelloService_HelloBoolean_result {
 public:

  HelloService_HelloBoolean_result(const HelloService_HelloBoolean_result&);
  HelloService_HelloBoolean_result& operator=(const HelloService_HelloBoolean_result&);
  HelloService_HelloBoolean_result() : success(0) {
  }

  virtual ~HelloService_HelloBoolean_result() throw();
  bool success;

  _HelloService_HelloBoolean_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const HelloService_HelloBoolean_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const HelloService_HelloBoolean_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloBoolean_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HelloService_HelloBoolean_presult__isset {
  _HelloService_HelloBoolean_presult__isset() : success(false) {}
  bool success :1;
} _HelloService_HelloBoolean_presult__isset;

class HelloService_HelloBoolean_presult {
 public:


  virtual ~HelloService_HelloBoolean_presult() throw();
  bool* success;

  _HelloService_HelloBoolean_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class HelloService_HelloVoid_args {
 public:

  HelloService_HelloVoid_args(const HelloService_HelloVoid_args&);
  HelloService_HelloVoid_args& operator=(const HelloService_HelloVoid_args&);
  HelloService_HelloVoid_args() {
  }

  virtual ~HelloService_HelloVoid_args() throw();

  bool operator == (const HelloService_HelloVoid_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const HelloService_HelloVoid_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloVoid_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HelloService_HelloVoid_pargs {
 public:


  virtual ~HelloService_HelloVoid_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HelloService_HelloVoid_result {
 public:

  HelloService_HelloVoid_result(const HelloService_HelloVoid_result&);
  HelloService_HelloVoid_result& operator=(const HelloService_HelloVoid_result&);
  HelloService_HelloVoid_result() {
  }

  virtual ~HelloService_HelloVoid_result() throw();

  bool operator == (const HelloService_HelloVoid_result & /* rhs */) const
  {
    return true;
  }
  bool operator != (const HelloService_HelloVoid_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloVoid_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HelloService_HelloVoid_presult {
 public:


  virtual ~HelloService_HelloVoid_presult() throw();

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class HelloService_HelloNull_args {
 public:

  HelloService_HelloNull_args(const HelloService_HelloNull_args&);
  HelloService_HelloNull_args& operator=(const HelloService_HelloNull_args&);
  HelloService_HelloNull_args() {
  }

  virtual ~HelloService_HelloNull_args() throw();

  bool operator == (const HelloService_HelloNull_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const HelloService_HelloNull_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloNull_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class HelloService_HelloNull_pargs {
 public:


  virtual ~HelloService_HelloNull_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HelloService_HelloNull_result__isset {
  _HelloService_HelloNull_result__isset() : success(false) {}
  bool success :1;
} _HelloService_HelloNull_result__isset;

class HelloService_HelloNull_result {
 public:

  HelloService_HelloNull_result(const HelloService_HelloNull_result&);
  HelloService_HelloNull_result& operator=(const HelloService_HelloNull_result&);
  HelloService_HelloNull_result() : success() {
  }

  virtual ~HelloService_HelloNull_result() throw();
  std::string success;

  _HelloService_HelloNull_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const HelloService_HelloNull_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const HelloService_HelloNull_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HelloService_HelloNull_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _HelloService_HelloNull_presult__isset {
  _HelloService_HelloNull_presult__isset() : success(false) {}
  bool success :1;
} _HelloService_HelloNull_presult__isset;

class HelloService_HelloNull_presult {
 public:


  virtual ~HelloService_HelloNull_presult() throw();
  std::string* success;

  _HelloService_HelloNull_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class HelloServiceClient : virtual public HelloServiceIf {
 public:
  HelloServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  HelloServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void HelloString(std::string& _return, const std::string& para);
  void send_HelloString(const std::string& para);
  void recv_HelloString(std::string& _return);
  int32_t HelloInt(const int32_t para);
  void send_HelloInt(const int32_t para);
  int32_t recv_HelloInt();
  bool HelloBoolean(const bool para);
  void send_HelloBoolean(const bool para);
  bool recv_HelloBoolean();
  void HelloVoid();
  void send_HelloVoid();
  void recv_HelloVoid();
  void HelloNull(std::string& _return);
  void send_HelloNull();
  void recv_HelloNull(std::string& _return);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class HelloServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<HelloServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (HelloServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_HelloString(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_HelloInt(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_HelloBoolean(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_HelloVoid(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_HelloNull(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  HelloServiceProcessor(::apache::thrift::stdcxx::shared_ptr<HelloServiceIf> iface) :
    iface_(iface) {
    processMap_["HelloString"] = &HelloServiceProcessor::process_HelloString;
    processMap_["HelloInt"] = &HelloServiceProcessor::process_HelloInt;
    processMap_["HelloBoolean"] = &HelloServiceProcessor::process_HelloBoolean;
    processMap_["HelloVoid"] = &HelloServiceProcessor::process_HelloVoid;
    processMap_["HelloNull"] = &HelloServiceProcessor::process_HelloNull;
  }

  virtual ~HelloServiceProcessor() {}
};

class HelloServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  HelloServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< HelloServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< HelloServiceIfFactory > handlerFactory_;
};

class HelloServiceMultiface : virtual public HelloServiceIf {
 public:
  HelloServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<HelloServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~HelloServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<HelloServiceIf> > ifaces_;
  HelloServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<HelloServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void HelloString(std::string& _return, const std::string& para) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->HelloString(_return, para);
    }
    ifaces_[i]->HelloString(_return, para);
    return;
  }

  int32_t HelloInt(const int32_t para) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->HelloInt(para);
    }
    return ifaces_[i]->HelloInt(para);
  }

  bool HelloBoolean(const bool para) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->HelloBoolean(para);
    }
    return ifaces_[i]->HelloBoolean(para);
  }

  void HelloVoid() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->HelloVoid();
    }
    ifaces_[i]->HelloVoid();
  }

  void HelloNull(std::string& _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->HelloNull(_return);
    }
    ifaces_[i]->HelloNull(_return);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class HelloServiceConcurrentClient : virtual public HelloServiceIf {
 public:
  HelloServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  HelloServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void HelloString(std::string& _return, const std::string& para);
  int32_t send_HelloString(const std::string& para);
  void recv_HelloString(std::string& _return, const int32_t seqid);
  int32_t HelloInt(const int32_t para);
  int32_t send_HelloInt(const int32_t para);
  int32_t recv_HelloInt(const int32_t seqid);
  bool HelloBoolean(const bool para);
  int32_t send_HelloBoolean(const bool para);
  bool recv_HelloBoolean(const int32_t seqid);
  void HelloVoid();
  int32_t send_HelloVoid();
  void recv_HelloVoid(const int32_t seqid);
  void HelloNull(std::string& _return);
  int32_t send_HelloNull();
  void recv_HelloNull(std::string& _return, const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

}} // namespace

#endif
