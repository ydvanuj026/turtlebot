#ifndef SPIRAL1__VISIBILITY_CONTROL_H_
#define SPIRAL1__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define SPIRAL1_EXPORT __attribute__ ((dllexport))
    #define SPIRAL1_IMPORT __attribute__ ((dllimport))
  #else
    #define SPIRAL1_EXPORT __declspec(dllexport)
    #define SPIRAL1_IMPORT __declspec(dllimport)
  #endif
  #ifdef SPIRAL1_BUILDING_LIBRARY
    #define SPIRAL1_PUBLIC SPIRAL1_EXPORT
  #else
    #define SPIRAL1_PUBLIC SPIRAL1_IMPORT
  #endif
  #define SPIRAL1_PUBLIC_TYPE SPIRAL1_PUBLIC
  #define SPIRAL1_LOCAL
#else
  #define SPIRAL1_EXPORT __attribute__ ((visibility("default")))
  #define SPIRAL1_IMPORT
  #if __GNUC__ >= 4
    #define SPIRAL1_PUBLIC __attribute__ ((visibility("default")))
    #define SPIRAL1_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define SPIRAL1_PUBLIC
    #define SPIRAL1_LOCAL
  #endif
  #define SPIRAL1_PUBLIC_TYPE
#endif
#endif  // SPIRAL1__VISIBILITY_CONTROL_H_
// Generated 10-Jan-2025 16:53:52
 