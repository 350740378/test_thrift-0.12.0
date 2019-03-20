/**
 * Autogenerated by Thrift Compiler (0.12.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "CCQCService.h"




CCQCService_DataTransfer_args::~CCQCService_DataTransfer_args() throw() {
}


uint32_t CCQCService_DataTransfer_args::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->iMessageType);
          this->__isset.iMessageType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->strMessageData);
          this->__isset.strMessageData = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CCQCService_DataTransfer_args::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CCQCService_DataTransfer_args");

  xfer += oprot->writeFieldBegin("iMessageType", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->iMessageType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("strMessageData", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->strMessageData);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


CCQCService_DataTransfer_pargs::~CCQCService_DataTransfer_pargs() throw() {
}


uint32_t CCQCService_DataTransfer_pargs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("CCQCService_DataTransfer_pargs");

  xfer += oprot->writeFieldBegin("iMessageType", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16((*(this->iMessageType)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("strMessageData", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString((*(this->strMessageData)));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


CCQCService_DataTransfer_result::~CCQCService_DataTransfer_result() throw() {
}


uint32_t CCQCService_DataTransfer_result::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->success.read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t CCQCService_DataTransfer_result::write(::apache::thrift::protocol::TProtocol* oprot) const {

  uint32_t xfer = 0;

  xfer += oprot->writeStructBegin("CCQCService_DataTransfer_result");

  if (this->__isset.success) {
    xfer += oprot->writeFieldBegin("success", ::apache::thrift::protocol::T_STRUCT, 0);
    xfer += this->success.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}


CCQCService_DataTransfer_presult::~CCQCService_DataTransfer_presult() throw() {
}


uint32_t CCQCService_DataTransfer_presult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += (*(this->success)).read(iprot);
          this->__isset.success = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void CCQCServiceClient::DataTransfer(ReResult& _return, const int16_t iMessageType, const std::string& strMessageData)
{
  send_DataTransfer(iMessageType, strMessageData);
  recv_DataTransfer(_return);
}

void CCQCServiceClient::send_DataTransfer(const int16_t iMessageType, const std::string& strMessageData)
{
  int32_t cseqid = 0;
  oprot_->writeMessageBegin("DataTransfer", ::apache::thrift::protocol::T_CALL, cseqid);

  CCQCService_DataTransfer_pargs args;
  args.iMessageType = &iMessageType;
  args.strMessageData = &strMessageData;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();
}

void CCQCServiceClient::recv_DataTransfer(ReResult& _return)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  iprot_->readMessageBegin(fname, mtype, rseqid);
  if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
    ::apache::thrift::TApplicationException x;
    x.read(iprot_);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
    throw x;
  }
  if (mtype != ::apache::thrift::protocol::T_REPLY) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  if (fname.compare("DataTransfer") != 0) {
    iprot_->skip(::apache::thrift::protocol::T_STRUCT);
    iprot_->readMessageEnd();
    iprot_->getTransport()->readEnd();
  }
  CCQCService_DataTransfer_presult result;
  result.success = &_return;
  result.read(iprot_);
  iprot_->readMessageEnd();
  iprot_->getTransport()->readEnd();

  if (result.__isset.success) {
    // _return pointer has now been filled
    return;
  }
  throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "DataTransfer failed: unknown result");
}

bool CCQCServiceProcessor::dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) {
  ProcessMap::iterator pfn;
  pfn = processMap_.find(fname);
  if (pfn == processMap_.end()) {
    iprot->skip(::apache::thrift::protocol::T_STRUCT);
    iprot->readMessageEnd();
    iprot->getTransport()->readEnd();
    ::apache::thrift::TApplicationException x(::apache::thrift::TApplicationException::UNKNOWN_METHOD, "Invalid method name: '"+fname+"'");
    oprot->writeMessageBegin(fname, ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return true;
  }
  (this->*(pfn->second))(seqid, iprot, oprot, callContext);
  return true;
}

void CCQCServiceProcessor::process_DataTransfer(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext)
{
  void* ctx = NULL;
  if (this->eventHandler_.get() != NULL) {
    ctx = this->eventHandler_->getContext("CCQCService.DataTransfer", callContext);
  }
  ::apache::thrift::TProcessorContextFreer freer(this->eventHandler_.get(), ctx, "CCQCService.DataTransfer");

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preRead(ctx, "CCQCService.DataTransfer");
  }

  CCQCService_DataTransfer_args args;
  args.read(iprot);
  iprot->readMessageEnd();
  uint32_t bytes = iprot->getTransport()->readEnd();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postRead(ctx, "CCQCService.DataTransfer", bytes);
  }

  CCQCService_DataTransfer_result result;
  try {
    iface_->DataTransfer(result.success, args.iMessageType, args.strMessageData);
    result.__isset.success = true;
  } catch (const std::exception& e) {
    if (this->eventHandler_.get() != NULL) {
      this->eventHandler_->handlerError(ctx, "CCQCService.DataTransfer");
    }

    ::apache::thrift::TApplicationException x(e.what());
    oprot->writeMessageBegin("DataTransfer", ::apache::thrift::protocol::T_EXCEPTION, seqid);
    x.write(oprot);
    oprot->writeMessageEnd();
    oprot->getTransport()->writeEnd();
    oprot->getTransport()->flush();
    return;
  }

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->preWrite(ctx, "CCQCService.DataTransfer");
  }

  oprot->writeMessageBegin("DataTransfer", ::apache::thrift::protocol::T_REPLY, seqid);
  result.write(oprot);
  oprot->writeMessageEnd();
  bytes = oprot->getTransport()->writeEnd();
  oprot->getTransport()->flush();

  if (this->eventHandler_.get() != NULL) {
    this->eventHandler_->postWrite(ctx, "CCQCService.DataTransfer", bytes);
  }
}

::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > CCQCServiceProcessorFactory::getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) {
  ::apache::thrift::ReleaseHandler< CCQCServiceIfFactory > cleanup(handlerFactory_);
  ::apache::thrift::stdcxx::shared_ptr< CCQCServiceIf > handler(handlerFactory_->getHandler(connInfo), cleanup);
  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > processor(new CCQCServiceProcessor(handler));
  return processor;
}

void CCQCServiceConcurrentClient::DataTransfer(ReResult& _return, const int16_t iMessageType, const std::string& strMessageData)
{
  int32_t seqid = send_DataTransfer(iMessageType, strMessageData);
  recv_DataTransfer(_return, seqid);
}

int32_t CCQCServiceConcurrentClient::send_DataTransfer(const int16_t iMessageType, const std::string& strMessageData)
{
  int32_t cseqid = this->sync_.generateSeqId();
  ::apache::thrift::async::TConcurrentSendSentry sentry(&this->sync_);
  oprot_->writeMessageBegin("DataTransfer", ::apache::thrift::protocol::T_CALL, cseqid);

  CCQCService_DataTransfer_pargs args;
  args.iMessageType = &iMessageType;
  args.strMessageData = &strMessageData;
  args.write(oprot_);

  oprot_->writeMessageEnd();
  oprot_->getTransport()->writeEnd();
  oprot_->getTransport()->flush();

  sentry.commit();
  return cseqid;
}

void CCQCServiceConcurrentClient::recv_DataTransfer(ReResult& _return, const int32_t seqid)
{

  int32_t rseqid = 0;
  std::string fname;
  ::apache::thrift::protocol::TMessageType mtype;

  // the read mutex gets dropped and reacquired as part of waitForWork()
  // The destructor of this sentry wakes up other clients
  ::apache::thrift::async::TConcurrentRecvSentry sentry(&this->sync_, seqid);

  while(true) {
    if(!this->sync_.getPending(fname, mtype, rseqid)) {
      iprot_->readMessageBegin(fname, mtype, rseqid);
    }
    if(seqid == rseqid) {
      if (mtype == ::apache::thrift::protocol::T_EXCEPTION) {
        ::apache::thrift::TApplicationException x;
        x.read(iprot_);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
        sentry.commit();
        throw x;
      }
      if (mtype != ::apache::thrift::protocol::T_REPLY) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();
      }
      if (fname.compare("DataTransfer") != 0) {
        iprot_->skip(::apache::thrift::protocol::T_STRUCT);
        iprot_->readMessageEnd();
        iprot_->getTransport()->readEnd();

        // in a bad state, don't commit
        using ::apache::thrift::protocol::TProtocolException;
        throw TProtocolException(TProtocolException::INVALID_DATA);
      }
      CCQCService_DataTransfer_presult result;
      result.success = &_return;
      result.read(iprot_);
      iprot_->readMessageEnd();
      iprot_->getTransport()->readEnd();

      if (result.__isset.success) {
        // _return pointer has now been filled
        sentry.commit();
        return;
      }
      // in a bad state, don't commit
      throw ::apache::thrift::TApplicationException(::apache::thrift::TApplicationException::MISSING_RESULT, "DataTransfer failed: unknown result");
    }
    // seqid != rseqid
    this->sync_.updatePending(fname, mtype, rseqid);

    // this will temporarily unlock the readMutex, and let other clients get work done
    this->sync_.waitForWork(seqid);
  } // end while(true)
}



