//
//  LEBindingView.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/15.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEBindingView : UIView

@property (weak, nonatomic) IBOutlet UIButton *faceBookBtn;

@property (nonatomic, copy) void(^closeAlterViewCallBack)(void);
@property (nonatomic, copy) void(^thirdBindingCallBack)(UIButton *sender);
@property (weak, nonatomic) IBOutlet UIView *contentView;

+ (instancetype)instanceBindingView;



@end

NS_ASSUME_NONNULL_END
