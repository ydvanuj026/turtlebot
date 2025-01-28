#ifndef TRAJECTORY2__VISIBILITY_CONTROL_H_
#define TRAJECTORY2__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TRAJECTORY2_EXPORT __attribute__ ((dllexport))
    #define TRAJECTORY2_IMPORT __attribute__ ((dllimport))
  #else
    #define TRAJECTORY2_EXPORT __declspec(dllexport)
    #define TRAJECTORY2_IMPORT __declspec(dllimport)
  #endif
  #ifdef TRAJECTORY2_BUILDING_LIBRARY
    #define TRAJECTORY2_PUBLIC TRAJECTORY2_EXPORT
  #else
    #define TRAJECTORY2_PUBLIC TRAJECTORY2_IMPORT
  #endif
  #define TRAJECTORY2_PUBLIC_TYPE TRAJECTORY2_PUBLIC
  #define TRAJECTORY2_LOCAL
#else
  #define TRAJECTORY2_EXPORT __attribute__ ((visibility("default")))
  #define TRAJECTORY2_IMPORT
  #if __GNUC__ >= 4
    #define TRAJECTORY2_PUBLIC __attribute__ ((visibility("default")))
    #define TRAJECTORY2_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TRAJECTORY2_PUBLIC
    #define TRAJECTORY2_LOCAL
  #endif
  #define TRAJECTORY2_PUBLIC_TYPE
#endif
#endif  // TRAJECTORY2__VISIBILITY_CONTROL_H_
// Generated 27-Jan-2025 18:07:40
 