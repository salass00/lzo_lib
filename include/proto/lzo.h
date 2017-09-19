#ifndef PROTO_LZO_H
#define PROTO_LZO_H

/*
**	$Id$
**
**	Prototype/inline/pragma header file combo
**
**	Copyright (c) 2010 Hyperion Entertainment CVBA.
**	All Rights Reserved.
*/

#ifndef LIBRARIES_LZO_H
#include <libraries/lzo.h>
#endif

/****************************************************************************/

#ifndef __NOLIBBASE__
 #ifndef __USE_BASETYPE__
  #if defined(__cplusplus) && defined(__USE_AMIGAOS_NAMESPACE__)
   extern struct AmigaOS::Library * LZOBase;
  #else
   extern struct Library * LZOBase;
  #endif
 #else
  #if defined(__cplusplus) && defined(__USE_AMIGAOS_NAMESPACE__)
   extern struct AmigaOS::LZOBase * LZOBase;
  #else
   extern struct LZOBase * LZOBase;
  #endif
 #endif /* __USE_BASETYPE__ */
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#ifdef __amigaos4__
 #include <interfaces/lzo.h>
 #ifdef __USE_INLINE__
  #include <inline4/lzo.h>
 #endif /* __USE_INLINE__ */
 #ifndef CLIB_LZO_PROTOS_H
  #define CLIB_LZO_PROTOS_H 1
 #endif /* CLIB_LZO_PROTOS_H */
 #ifndef __NOGLOBALIFACE__
  #if defined(__cplusplus) && defined(__USE_AMIGAOS_NAMESPACE__)
   extern struct AmigaOS::LZOIFace * ILZO;
  #else
   extern struct LZOIFace * ILZO;
  #endif
 #endif /* __NOGLOBALIFACE__ */
#else /* __amigaos4__ */
 #ifndef CLIB_LZO_PROTOS_H
  #include <clib/lzo_protos.h>
 #endif /* CLIB_LZO_PROTOS_H */
 #if defined(__GNUC__)
  #ifndef __PPC__
   #include <inline/lzo.h>
  #else /* __PPC__ */
   #include <ppcinline/lzo.h>
  #endif /* __PPC__ */
 #elif defined(__VBCC__)
  #ifndef __PPC__
   #include <inline/lzo_protos.h>
  #endif /* __PPC__ */
 #else /* __GNUC__ */
  #include <pragmas/lzo_pragmas.h>
 #endif /* __GNUC__ */
#endif /* __amigaos4__ */

/****************************************************************************/

#endif /* PROTO_LZO_H */
