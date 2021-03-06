/** **********************************************************************
    * This file is auto-generated by nxsdk_remote_stub_gen.py 
    * at 2018-09-26 21:31:54.740607
    * 
    * Copyright (c) 2017 by cisco Systems, Inc.
    *
    * All rights reserved.
************************************************************************/
#include "nx_dme_impl.h" 
   
using namespace nxos;

   
    
// Implementation for class  
NxDmeImpl::NxDmeImpl()
{

}

NxDmeImpl::~NxDmeImpl()
{

}

std::string 
NxDmeImpl::getDn()
{
   return "";
}

void 
NxDmeImpl::setProperty(const std::string& sInPropName, const std::string& sInValue, int* err)
{
   return;
}

std::string 
NxDmeImpl::getProperty(const std::string& sInPropName, int* err)
{
   return "";
}

std::string 
NxDmeImpl::commit(int* err)
{
   return "";
}

std::string 
NxDmeImpl::getDataJson()
{
   return "";
}

std::string 
NxDmeImpl::iterateProperties(bool fromFirst)
{
   return "";
}

nxos::event_type_e 
NxDmeImpl::getEvent()
{
   return (nxos::event_type_e)0;
}

bool 
NxDmeImpl::getEventIsPropertyChanged(const std::string& property)
{
   return false;
}

std::string
NxDmeImpl::iterateEventUpdatedProperties(bool fromFirst)
{
   return "";
}

bool 
NxDmeImpl::operator==(NxDme const& dme_obj) const
{
   return false;
}

bool 
NxDmeImpl::operator!=(NxDme const& dme_obj) const
{
   return false;
}

bool 
NxDmeImpl::equal(NxDme const& dme_obj) const
{
   return false;
}
    
// Implementation for class  
NxDmeMgrImpl::NxDmeMgrImpl()
{

}

NxDmeMgrImpl::~NxDmeMgrImpl()
{

}

NxDme* 
NxDmeMgrImpl::getDmeObj(const std::string& Dn)
{
   return NULL;
}

NxDme* 
NxDmeMgrImpl::addDmeObj(const std::string& sInDn, int* error)
{
   return NULL;
}

int 
NxDmeMgrImpl::delDmeObj(const std::string& sInDn)
{
   return (int)0;
}

std::string 
NxDmeMgrImpl::getMoJson(const std::string& sInDn, int* error)
{
   return "";
}

std::string 
NxDmeMgrImpl::getChildrenMoJson(const std::string& sInDn, int* error)
{
   return "";
}

bool 
NxDmeMgrImpl::existsDmeObj(const std::string& sInDn)
{
   return false;
}

bool 
NxDmeMgrImpl::watch(const std::string& sInDn, const std::string& pattern, bool download)
{
   return false;
}

bool 
NxDmeMgrImpl::unwatch(const std::string& sInDn, const std::string& pattern)
{
   return false;
}

bool 
NxDmeMgrImpl::setDmeHandler(NxDmeMgrHandler* handler)
{
   return false;
}

NxDmeMgrHandler* 
NxDmeMgrImpl::getDmeHandler()
{
   return NULL;
}
