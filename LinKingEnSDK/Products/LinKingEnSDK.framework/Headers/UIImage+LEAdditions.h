//
//  UIImage+LEAdditions.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/10.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (LEAdditions)
+ (UIImage *)le_ImageNamed:(NSString *)name;
+ (UIImage *)le_ImageNamed:(NSString *)name withCls:(Class)cls;
@end

NS_ASSUME_NONNULL_END
