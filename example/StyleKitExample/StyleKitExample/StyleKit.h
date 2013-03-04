//
// StyleKit
//
// Copyright Graphiclife 2013. All Rights Reserved.
//
// The copyright to the computer program(s) herein
// is the property of Graphiclife, Sweden. The
// program(s) may be used and/or copied only with the
// written permission of Graphiclife or in accordance
// with the terms and conditions stipulated in the
// agreement/contract under which the program(s) have
// been supplied. This copyright notice must not be
// removed.
//

#ifndef STYLE_KIT_H
#define STYLE_KIT_H

#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
# define SKView UIView
#else
# define SKView NSView
#endif

#define SKStyle(stname, attrs)            static inline void sk_style_ ## stname(id target) {\
                                            SKView *superview = [target valueForKey:@"superview"]; (void)superview;\
                                            NSDictionary *d = attrs;\
                                            for ( id key in d )\
                                            {\
                                              [target setValue:d[key] forKey:key];\
                                            }\
                                          }

#define SKStyleExt(stname, parent, attrs) static inline void sk_style_ ## stname(id target) {\
                                            SKView *superview = [target valueForKey:@"superview"]; (void)superview;\
                                            sk_style_ ## parent(target);\
                                            NSDictionary *d = attrs;\
                                            for ( id key in d )\
                                            {\
                                              [target setValue:d[key] forKey:key];\
                                            }\
                                          }

#define SKApply(stname, target)           sk_style_ ## stname(target)

#endif