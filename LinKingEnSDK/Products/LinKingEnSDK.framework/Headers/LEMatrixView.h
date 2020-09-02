//
//  LEMatrixView.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/13.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEMatrixView : UIView
+ (instancetype)instanceMatrixViewWithViewController:(UIViewController *)viewController;
- (void)setMatrixConfig:(NSDictionary *)matrixConfig withGroup:(NSInteger)group;
@property (nonatomic, copy) void (^didSelectItemAtIndex)(NSString *appid);
@end

NS_ASSUME_NONNULL_END
