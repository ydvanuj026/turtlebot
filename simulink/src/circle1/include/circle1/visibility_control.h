#ifndef CIRCLE1__VISIBILITY_CONTROL_H_
#define CIRCLE1__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define CIRCLE1_EXPORT __attribute__ ((dllexport))
    #define CIRCLE1_IMPORT __attribute__ ((dllimport))
  #else
    #define CIRCLE1_EXPORT __declspec(dllexport)
    #define CIRCLE1_IMPORT __declspec(dllimport)
  #endif
  #ifdef CIRCLE1_BUILDING_LIBRARY
    #define CIRCLE1_PUBLIC CIRCLE1_EXPORT
  #else
    #define CIRCLE1_PUBLIC CIRCLE1_IMPORT
  #endif
  #define CIRCLE1_PUBLIC_TYPE CIRCLE1_PUBLIC
  #define CIRCLE1_LOCAL
#else
  #define CIRCLE1_EXPORT __attribute__ ((visibility("default")))
  #define CIRCLE1_IMPORT
  #if __GNUC__ >= 4
    #define CIRCLE1_PUBLIC __attribute__ ((visibility("default")))
    #define CIRCLE1_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define CIRCLE1_PUBLIC
    #define CIRCLE1_LOCAL
  #endif
  #define CIRCLE1_PUBLIC_TYPE
#endif
#endif  // CIRCLE1__VISIBILITY_CONTROL_H_
// Generated 10-Jan-2025 17:44:49
 