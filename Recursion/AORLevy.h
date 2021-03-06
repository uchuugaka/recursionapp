//
//  AORLevy.h
//  Recursion
//
//  Created by Elissa Wolf on 12/8/12.
//  Copyright (c) 2012 CIS 399 Project. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AORObject.h"

#define LEVY_MAX_DEPTH 8

@interface AORLevy : AORObject <AORObjectProtocol>
- (id)init;
- (id)drawWithP1:(CGPoint)p1 p2:(CGPoint)p2;
- (id)drawWithP1:(CGPoint)p1 p2:(CGPoint)p2 depth:(int)depth;

@end
