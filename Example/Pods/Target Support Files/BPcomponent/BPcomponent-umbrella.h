#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Aspects.h"
#import "BPAspectManager.h"
#import "Header.h"

FOUNDATION_EXPORT double BPcomponentVersionNumber;
FOUNDATION_EXPORT const unsigned char BPcomponentVersionString[];

