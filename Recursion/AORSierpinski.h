//
//  AORSierpinski.h
//  Recursion
//
//  Created by Ayaka Nonaka on 12/7/12.
//  Copyright (c) 2012 CIS 399 Project. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AORObject.h"

@class CAShapeLayer;

@interface AORSierpinski : NSObject <AORObject>

@property (strong, nonatomic) CALayer *layer;

-(id)initWithP1:(CGPoint)p1 p2:(CGPoint)p2 p3:(CGPoint)p3;
-(id)initWithP1:(CGPoint)p1 p2:(CGPoint)p2 p3:(CGPoint)p3 depth:(int)depth;
-(void)startDrawing;
-(void)stopDrawing;
@end

