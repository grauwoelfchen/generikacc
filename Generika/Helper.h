//
//  Helper.h
//  Generika
//
//  Copyright (c) 2013-2017 ywesee GmbH. All rights reserved.
//

@interface Helper : NSObject

+ (UIColor *)activeUIColor;
+ (CGSize)getSizeOfLabel:(UILabel *)label inWidth:(CGFloat)width;

+ (NSString *)detectStringWithRegexp:(NSString *)regexpString
                                from:(NSString *)fromString;

@end
