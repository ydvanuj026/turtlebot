#ifndef TRAJECTORY1__VISIBILITY_CONTROL_H_
#define TRAJECTORY1__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TRAJECTORY1_EXPORT __attribute__ ((dllexport))
    #define TRAJECTORY1_IMPORT __attribute__ ((dllimport))
  #else
    #define TRAJECTORY1_EXPORT __declspec(dllexport)
    #define TRAJECTORY1_IMPORT __declspec(dllimport)
  #endif
  #ifdef TRAJECTORY1_BUILDING_LIBRARY
    #define TRAJECTORY1_PUBLIC TRAJECTORY1_EXPORT
  #else
    #define TRAJECTORY1_PUBLIC TRAJECTORY1_IMPORT
  #endif
  #define TRAJECTORY1_PUBLIC_TYPE TRAJECTORY1_PUBLIC
  #define TRAJECTORY1_LOCAL
#else
  #define TRAJECTORY1_EXPORT __attribute__ ((visibility("default")))
  #define TRAJECTORY1_IMPORT
  #if __GNUC__ >= 4
    #define TRAJECTORY1_PUBLIC __attribute__ ((visibility("default")))
    #define TRAJECTORY1_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TRAJECTORY1_PUBLIC
    #define TRAJECTORY1_LOCAL
  #endif
  #define TRAJECTORY1_PUBLIC_TYPE
#endif
#endif  // TRAJECTORY1__VISIBILITY_CONTROL_H_
// Generated 27-Jan-2025 16:26:42
 