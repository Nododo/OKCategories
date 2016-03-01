//
//  NSString+Device.h
//
//  Created by SHB on 16/1/4.
//  Copyright © 2016年 OKCoin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Device)

/*!
 *  判断是否是iPhone4,4S
 */
+ (BOOL)isiPhone4;

/*!
 *  判断是否是iPhone5,5C,5S
 */
+ (BOOL)isiPhone5;

/*!
 *  判断是否是iPhone6,6S
 */
+ (BOOL)isiPhone6;

/*!
 *  判断是否是iPhone6 Plus,6S Plus
 */
+ (BOOL)isiPhone6P;

@end