///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2000-2019 Ericsson Telecom AB
//
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Eclipse Public License v2.0
// which accompanies this distribution, and is available at
// https://www.eclipse.org/org/documents/epl-2.0/EPL-2.0.html
///////////////////////////////////////////////////////////////////////////////
//
//  File:               IPL4asp_User_CtrlFuncDef.ttcn
//  Rev:                R29B
//  Prodnr:             CNL 113 531
//  Updated:            2008-01-28
//  Contact:            http://ttcn.ericsson.se
//  Reference:          

//  Template to define the port control functions
//  Replace the <user port type> tag with your user port type and
//  the <user types module> tag with the module name in which the
//  user port type is declared.
//  Remember to replace the underscores in the TTCN name with
//  double underscore!
//  Feel free to rename this file according to your naming conventions.


#include "IPL4asp_PortType.hh"
#include "IPL4asp_PT.hh"
#include "<user types module>.hh"


namespace IPL4asp__User__CtrlFunct {


  IPL4asp__Types::Result f__IPL4__listen(
    <user types module>::<user port type>& portRef,
    const IPL4asp__Types::HostName& locName,
    const IPL4asp__Types::PortNumber& locPort,
    const IPL4asp__Types::ProtoTuple& proto,
    const IPL4asp__Types::OptionList& options)
  {
    PORT* p = portRef.get_provider_port();
    if (p == NULL) {
      // Should be impossible
    }
    IPL4asp__PortType::IPL4asp__PT_PROVIDER& provider_port = static_cast<IPL4asp__PortType::IPL4asp__PT_PROVIDER&>(*p);
    return f__IPL4__PROVIDER__listen(provider_port, locName, locPort, proto, options);//1
  }
  
  IPL4asp__Types::Result f__IPL4__connect(
    <user types module>::<user port type>& portRef,
    const IPL4asp__Types::HostName& remName,
    const IPL4asp__Types::PortNumber& remPort,
    const IPL4asp__Types::HostName& locName,
    const IPL4asp__Types::PortNumber& locPort,
    const IPL4asp__Types::ConnectionId& connId,
    const IPL4asp__Types::ProtoTuple& proto,
    const IPL4asp__Types::OptionList& options)
  {
    PORT* p = portRef.get_provider_port();
    if (p == NULL) {
      // Should be error
    }
    IPL4asp__PortType::IPL4asp__PT_PROVIDER& provider_port = static_cast<IPL4asp__PortType::IPL4asp__PT_PROVIDER&>(*p);
    return f__IPL4__PROVIDER__connect(provider_port, remName, remPort,
                                      locName, locPort, connId, proto, options);
  }

  IPL4asp__Types::Result f__IPL4__close(
    <user types module>::<user port type>& portRef, 
    const IPL4asp__Types::ConnectionId& connId, 
    const IPL4asp__Types::ProtoTuple& proto)
  {
    PORT* p = portRef.get_provider_port();
    if (p == NULL) {
      // Should be error
    }
    IPL4asp__PortType::IPL4asp__PT_PROVIDER& provider_port = static_cast<IPL4asp__PortType::IPL4asp__PT_PROVIDER&>(*p);
    return f__IPL4__PROVIDER__close(provider_port, connId, proto);
  }

  IPL4asp__Types::Result f__IPL4__setUserData(
    <user types module>::<user port type>& portRef,
    const IPL4asp__Types::ConnectionId& connId,
    const IPL4asp__Types::UserData& userData)
  {
    PORT* p = portRef.get_provider_port();
    if (p == NULL) {
      // Should be error
    }
    IPL4asp__PortType::IPL4asp__PT_PROVIDER& provider_port = static_cast<IPL4asp__PortType::IPL4asp__PT_PROVIDER&>(*p);
    return f__IPL4__PROVIDER__setUserData(provider_port, connId, userData);
  }
  
  IPL4asp__Types::Result f__IPL4__getUserData(
    <user types module>::<user port type>& portRef,
    const IPL4asp__Types::ConnectionId& connId,
    IPL4asp__Types::UserData& userData)
  {
    PORT* p = portRef.get_provider_port();
    if (p == NULL) {
      // Should be error
    }
    IPL4asp__PortType::IPL4asp__PT_PROVIDER& provider_port = static_cast<IPL4asp__PortType::IPL4asp__PT_PROVIDER&>(*p);
    return f__IPL4__PROVIDER__getUserData(provider_port, connId, userData);
  }

  void f__IPL4__setGetMsgLen(
    <user types module>::<user port type>& portRef,
    const IPL4asp__Types::ConnectionId& connId,  //2
    IPL4asp__Types::f__IPL4__getMsgLen& f, //3
    const Socket__API__Definitions::ro__integer& msgLenArgs) //4
  {
    PORT* p = portRef.get_provider_port();
    if (p == NULL) {
      // Should be error
    }
    IPL4asp__PortType::IPL4asp__PT_PROVIDER& provider_port = static_cast<IPL4asp__PortType::IPL4asp__PT_PROVIDER&>(*p);
    f__IPL4__PROVIDER__setGetMsgLen(provider_port, connId, f, msgLenArgs);
  }
  
} // namespace IPL4asp__user__CtrlFunct

