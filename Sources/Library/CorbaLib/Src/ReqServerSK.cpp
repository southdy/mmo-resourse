// This file is generated by omniidl (C++ backend)- omniORB_3_0. Do not edit.

#include "ReqServer.h"
#include <omniORB3/callDescriptor.h>

static const char* _0RL_library_version = omniORB_3_0;

ReqServer_ptr ReqServer_Helper::_nil() {
  return ReqServer::_nil();
}

CORBA::Boolean ReqServer_Helper::is_nil(ReqServer_ptr p) {
  return CORBA::is_nil(p);

}

void ReqServer_Helper::release(ReqServer_ptr p) {
  CORBA::release(p);
}

void ReqServer_Helper::duplicate(ReqServer_ptr p) {
  if( p && !p->_NP_is_nil() )  omni::duplicateObjRef(p);
}

size_t ReqServer_Helper::NP_alignedSize(ReqServer_ptr obj, size_t offset) {
  return ReqServer::_alignedSize(obj, offset);
}

void ReqServer_Helper::marshalObjRef(ReqServer_ptr obj, NetBufferedStream& s) {
  ReqServer::_marshalObjRef(obj, s);
}

ReqServer_ptr ReqServer_Helper::unmarshalObjRef(NetBufferedStream& s) {
  return ReqServer::_unmarshalObjRef(s);
}

void ReqServer_Helper::marshalObjRef(ReqServer_ptr obj, MemBufferedStream& s) {
  ReqServer::_marshalObjRef(obj, s);
}

ReqServer_ptr ReqServer_Helper::unmarshalObjRef(MemBufferedStream& s) {
  return ReqServer::_unmarshalObjRef(s);
}

ReqServer_ptr
ReqServer::_duplicate(ReqServer_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);

  return obj;
}

ReqServer_ptr
ReqServer::_narrow(CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}

ReqServer_ptr
ReqServer::_nil()
{
  static _objref_ReqServer* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
  if( !_the_nil_ptr )  _the_nil_ptr = new _objref_ReqServer;
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
}

const char* ReqServer::_PD_repoId = "IDL:ReqServer:1.0";

_objref_ReqServer::~_objref_ReqServer() {}

_objref_ReqServer::_objref_ReqServer(const char* mdri,
   IOP::TaggedProfileList* p, omniIdentity* id, omniLocalIdentity* lid) :
   
   omniObjRef(ReqServer::_PD_repoId, mdri, p, id, lid)
{
  _PR_setobj(this);
}

void*
_objref_ReqServer::_ptrToObjRef(const char* id)
{
  if( !strcmp(id, CORBA::Object::_PD_repoId) )
    return (CORBA::Object_ptr) this;
  if( !strcmp(id, ReqServer::_PD_repoId) )
    return (ReqServer_ptr) this;
  
  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  void_i_clong_i_clong_i_clong
class _0RL_cd_d47783c81a1a3517_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_d47783c81a1a3517_00000000(LocalCallFn lcfn, const char* op, size_t oplen, _CORBA_Boolean oneway, CORBA::Long a_0, CORBA::Long a_1, CORBA::Long a_2):
     omniCallDescriptor(lcfn, op, oplen, oneway),
     arg_0(a_0),
     arg_1(a_1),
     arg_2(a_2) {}

  virtual CORBA::ULong alignedSize(CORBA::ULong size_in);
  virtual void marshalArguments(GIOP_C&);
  
  CORBA::Long arg_0;
  CORBA::Long arg_1;
  CORBA::Long arg_2;
  
};

CORBA::ULong _0RL_cd_d47783c81a1a3517_00000000::alignedSize(CORBA::ULong msgsize)
{
  msgsize = omni::align_to(msgsize, omni::ALIGN_4) + 4;
  
  msgsize = omni::align_to(msgsize, omni::ALIGN_4) + 4;
  
  msgsize = omni::align_to(msgsize, omni::ALIGN_4) + 4;
  
  return msgsize;
}

void _0RL_cd_d47783c81a1a3517_00000000::marshalArguments(GIOP_C& giop_client)
{
  arg_0 >>= giop_client;
  arg_1 >>= giop_client;
  arg_2 >>= giop_client;
  
}

// Local call call-back function.
static void
_0RL_lcfn_d47783c81a1a3517_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_d47783c81a1a3517_00000000* tcd = (_0RL_cd_d47783c81a1a3517_00000000*) cd;
  _impl_ReqServer* impl = (_impl_ReqServer*) svnt->_ptrToInterface(ReqServer::_PD_repoId);
  impl->SendResult(tcd->arg_0, tcd->arg_1, tcd->arg_2);
}

void _objref_ReqServer::SendResult(CORBA::Long id, CORBA::Long index, CORBA::Long reserve)
{
  _0RL_cd_d47783c81a1a3517_00000000 _call_desc(_0RL_lcfn_d47783c81a1a3517_10000000, "SendResult", 11, 0, id, index, reserve);
  
  _invoke(_call_desc);
  
}

// Proxy call descriptor class. Mangled signature:
//  _cstring
class _0RL_cd_d47783c81a1a3517_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_d47783c81a1a3517_20000000(LocalCallFn lcfn, const char* op, size_t oplen, _CORBA_Boolean oneway):
     omniCallDescriptor(lcfn, op, oplen, oneway) {}

  virtual void unmarshalReturnedValues(GIOP_C&);
    
  inline char * result() { return pd_result; }
  
  char * pd_result;
};

void _0RL_cd_d47783c81a1a3517_20000000::unmarshalReturnedValues(GIOP_C& giop_client)
{
  
  {
    CORBA::String_member _0RL_str_tmp;
    _0RL_str_tmp <<=  giop_client;
    pd_result = _0RL_str_tmp._ptr;
    _0RL_str_tmp._ptr = 0;
  }
  
}

// Local call call-back function.
static void
_0RL_lcfn_d47783c81a1a3517_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_d47783c81a1a3517_20000000* tcd = (_0RL_cd_d47783c81a1a3517_20000000*) cd;
  _impl_ReqServer* impl = (_impl_ReqServer*) svnt->_ptrToInterface(ReqServer::_PD_repoId);
  tcd->pd_result = impl->GetServerInfo();
}

char* _objref_ReqServer::GetServerInfo()
{
  _0RL_cd_d47783c81a1a3517_20000000 _call_desc(_0RL_lcfn_d47783c81a1a3517_30000000, "GetServerInfo", 14, 0);
  
  _invoke(_call_desc);
  return _call_desc.result();
}

_pof_ReqServer::~_pof_ReqServer() {}

omniObjRef*
_pof_ReqServer::newObjRef(const char* mdri, IOP::TaggedProfileList* p,
               omniIdentity* id, omniLocalIdentity* lid)
{
  return new _objref_ReqServer(mdri, p, id, lid);
}

CORBA::Boolean
_pof_ReqServer::is_a(const char* id) const
{
  if( !strcmp(id, ReqServer::_PD_repoId) )
    return 1;
  
  return 0;
}

const _pof_ReqServer _the_pof_ReqServer;

_impl_ReqServer::~_impl_ReqServer() {}

CORBA::Boolean
_impl_ReqServer::_dispatch(GIOP_S& giop_s)
{
  if( !strcmp(giop_s.operation(), "SendResult") ) {
    
    CORBA::Long arg_id;
    
    arg_id <<= giop_s;
    CORBA::Long arg_index;
    
    arg_index <<= giop_s;
    CORBA::Long arg_reserve;
    
    arg_reserve <<= giop_s;
    
    giop_s.RequestReceived();
    
    this->SendResult(arg_id, arg_index, arg_reserve);
    
    if( giop_s.response_expected() ) {
      size_t msgsize = (size_t) GIOP_S::ReplyHeaderSize();
      
      giop_s.InitialiseReply(GIOP::NO_EXCEPTION, (CORBA::ULong) msgsize);
      
    }
    giop_s.ReplyCompleted();
    return 1;
  }

  if( !strcmp(giop_s.operation(), "GetServerInfo") ) {
    
    giop_s.RequestReceived();
    CORBA::String_var result;
    
    result = this->GetServerInfo();
    
    if( giop_s.response_expected() ) {
      size_t msgsize = (size_t) GIOP_S::ReplyHeaderSize();
      msgsize = omni::align_to(msgsize, omni::ALIGN_4) + 4;
      msgsize += ((const char*) result) ? strlen((const char*) result) + 1 : 1;
      
      giop_s.InitialiseReply(GIOP::NO_EXCEPTION, (CORBA::ULong) msgsize);
      {
        CORBA::ULong _len = (((const char*) result)? strlen((const char*) result) + 1 : 1);
        
        _len >>= giop_s;
        if (_len > 1)
          giop_s.put_char_array((const CORBA::Char *)((const char*)result),_len);
        else {
          if ((const char*) result == 0 && omniORB::traceLevel > 1)
            _CORBA_null_string_ptr(0);
          CORBA::Char('\0') >>= giop_s;
        }
      }
      
    }
    giop_s.ReplyCompleted();
    return 1;
  }

  return 0;
}

void*
_impl_ReqServer::_ptrToInterface(const char* id)
{
  if( !strcmp(id, CORBA::Object::_PD_repoId) )
    return (void*) 1;
  if( !strcmp(id, ReqServer::_PD_repoId) )
    return (_impl_ReqServer*) this;
  
  return 0;
}

const char*
_impl_ReqServer::_mostDerivedRepoId()
{
  return ReqServer::_PD_repoId;
}

POA_ReqServer::~POA_ReqServer() {}

