// Copyright 2004-present Facebook. All Rights Reserved.
// Generated by: //native/museum/run_codegen.sh
// This is generated code -- do not modify manually.

// @generated SignedSource<<ed60d85ff974f5328ad3495bb27de439>>
// @model md5 1130e36993fd669a87f411dc6dbd4dc8


#include <museum/8.0.0/android-base/logging-inl.h>
#include <museum/8.0.0/android-base/logging.h>

#include <museum/libs.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION {



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityEi() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityEi",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace android { namespace base { 

  
   LogMessage::LogMessage(char const* p1, unsigned int p2, LogId p3, LogSeverity p4, int p5)   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityEi
      <void
        (LogMessage *, char const*, unsigned int, LogId, LogSeverity, int)>()
      (this, p1, p2, p3, p4, p5);
    
  }
} } // namespace android::base::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN7android4base10LogMessageD1Ev() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN7android4base10LogMessageD1Ev",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace android { namespace base { 

  
   LogMessage::~LogMessage()   {
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN7android4base10LogMessageD1Ev
      <void
        (LogMessage *)>()
      (this);
    
  }
} } // namespace android::base::


namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN7android4base10LogMessage6streamEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN7android4base10LogMessage6streamEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace android { namespace base { 

  
  std::ostream& LogMessage::stream()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN7android4base10LogMessage6streamEv
      <std::ostream&
        (LogMessage *)>()
      (this);
    
  }
} } // namespace android::base::



namespace libart { namespace lookups {
  template<typename T>
  T* lookup___ZN7android4base21GetMinimumLogSeverityEv() {
    static auto const symbol = ::facebook::libart().get_symbol<T>({
      "_ZN7android4base21GetMinimumLogSeverityEv",
    });
    return symbol;
  }
} } // namespace libart::lookups
namespace android { namespace base { 

  
  LogSeverity GetMinimumLogSeverity()   {
    return
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN7android4base21GetMinimumLogSeverityEv
      <LogSeverity
        ()>()
      ();
    
  }
} } // namespace android::base::


namespace libart {
  void preinitAndroidBaseSymbols() {
    using namespace ::facebook::museum::MUSEUM_VERSION::android::base;
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN7android4base10LogMessageC1EPKcjNS0_5LogIdENS0_11LogSeverityEi
        <void
          (LogMessage *, char const*, unsigned int, LogId, LogSeverity, int)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN7android4base10LogMessageD1Ev
        <void
          (LogMessage *)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN7android4base10LogMessage6streamEv
        <std::ostream&
          (LogMessage *)>();
    
    
    
      ::facebook::museum::MUSEUM_VERSION::libart::lookups::lookup___ZN7android4base21GetMinimumLogSeverityEv
        <LogSeverity
          ()>();
    
    
  }
} // namespace libart

} } } // namespace facebook::museum::MUSEUM_VERSION