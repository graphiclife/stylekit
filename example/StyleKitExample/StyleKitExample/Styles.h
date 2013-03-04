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

#ifndef STYLES_H
#define STYLES_H

#import "StyleKit.h"

SKStyle(basic, (@{ @"font" : [UIFont systemFontOfSize:12.0],
                   @"backgroundColor" : [UIColor clearColor],
                   @"shadowColor" : [UIColor greenColor],
                   @"shadowOffset" : [NSValue valueWithCGSize:CGSizeMake(2, 2)],
                   @"textAlignment" : @(NSTextAlignmentCenter)}) );

SKStyleExt(better, basic, (@{@"font" : [UIFont systemFontOfSize:24.0]}));
SKStyleExt(best, better, (@{@"shadowColor" : [UIColor redColor],
                            @"center" : [NSValue valueWithCGPoint:CGPointMake(superview.center.x, 40.0)]}));

#endif