//
//  LELoginView.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/10.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LELoginView : UIView
+ (instancetype)instanceOauthView;
@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property(nonatomic, copy)void(^startLoginCallBack)(void);
@property(nonatomic, copy)void(^thirdLoginCallBack)(UIButton *sender);
@property(nonatomic, copy)void(^changeBoxCallBack)(UIButton *sender);
@property(nonatomic, copy)void(^useAgreemmentCallBack)(BOOL isAgreement,UIButton *sender);
@property (weak, nonatomic) IBOutlet UIImageView *imageView_close;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_box;
@property (weak, nonatomic) IBOutlet UIButton *button_box;
@property (weak, nonatomic) IBOutlet UILabel *label_or;
@property (weak, nonatomic) IBOutlet UILabel *label_oneTip;
@property (weak, nonatomic) IBOutlet UILabel *label_twoTip;
@property (weak, nonatomic) IBOutlet UIButton *button_start;
@property (weak, nonatomic) IBOutlet UIButton *button_UserAgreement;
@property (weak, nonatomic) IBOutlet UIButton *button_PrivacyPolicy;

- (void)setLESuperView:(UIView *)superView;
@end

NS_ASSUME_NONNULL_END
