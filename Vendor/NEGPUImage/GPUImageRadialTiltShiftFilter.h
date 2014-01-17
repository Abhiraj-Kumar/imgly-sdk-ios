//
//  GPUImageRadialTiltShiftFilter.h
//  GPUImage
//
//  Created by Carsten Przyluczky on 19.08.13.
//  Copyright (c) 2013 Brad Larson. All rights reserved.
//

#import "GPUImageTwoInputFilter.h"

@interface GPUImageRadialTiltShiftFilter : GPUImageTwoInputFilter {
    GLint centerUniform, radiusUniform, scaleVectorUniform;
}

@property(readwrite, nonatomic, setter = setControlPoint1:) CGPoint controlPoint1;
@property(readwrite, nonatomic, setter = setControlPoint2:) CGPoint controlPoint2;
@property(readwrite, nonatomic, setter = setSclaeVector:) CGPoint scaleVector;

@end


