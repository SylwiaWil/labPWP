
#ifndef Trygonometria_EXPORT_H
#define Trygonometria_EXPORT_H

#ifdef Trygonometria_BUILT_AS_STATIC
#  define Trygonometria_EXPORT
#  define TRYGONOMETRIA_NO_EXPORT
#else
#  ifndef Trygonometria_EXPORT
#    ifdef Trygonometria_EXPORTS
        /* We are building this library */
#      define Trygonometria_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define Trygonometria_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef TRYGONOMETRIA_NO_EXPORT
#    define TRYGONOMETRIA_NO_EXPORT 
#  endif
#endif

#ifndef TRYGONOMETRIA_DEPRECATED
#  define TRYGONOMETRIA_DEPRECATED __declspec(deprecated)
#endif

#ifndef TRYGONOMETRIA_DEPRECATED_EXPORT
#  define TRYGONOMETRIA_DEPRECATED_EXPORT Trygonometria_EXPORT TRYGONOMETRIA_DEPRECATED
#endif

#ifndef TRYGONOMETRIA_DEPRECATED_NO_EXPORT
#  define TRYGONOMETRIA_DEPRECATED_NO_EXPORT TRYGONOMETRIA_NO_EXPORT TRYGONOMETRIA_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define TRYGONOMETRIA_NO_DEPRECATED
#endif

#endif
