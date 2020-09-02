//
//  LEAccountCenterController.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/10.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LEBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LEAccountCenterController : LEBaseViewController
@property (nonatomic, copy) void(^selectBannerAtIndex)(NSInteger index);
@end

NS_ASSUME_NONNULL_END
