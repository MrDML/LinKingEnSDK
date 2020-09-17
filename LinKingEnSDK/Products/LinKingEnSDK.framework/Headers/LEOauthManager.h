//
//  LEOauthManager.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/7.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class LEUser;
@interface LEOauthManager : NSObject
+ (instancetype)shared;
@property (nonatomic, strong) UIViewController *viewController;
@property (nonatomic,copy)void(^changeAccountCallBack)(void);
@property (nonatomic,copy)void(^bindingAccountCompleteCallBack)(LEUser *user,NSError *error);
/// Dashboard方式登录
/// @param viewController 根控制器
/// @param complete 完成登录回调
- (void)loginWithDashboardRootViewController:(UIViewController *)viewController complete:(void(^)(LEUser *user,NSError *error))complete;
/// API方式登录
/// @param viewController 根控制器
/// @param complete 完成登录回调
- (void)loginApiWithRootViewController:(UIViewController *_Nullable)viewController complete:(void(^)(LEUser *user,NSError *error))complete;
/// 显示仪表盘
/// @param viewController 根控制器
- (void)showFloatViewDashboard:(UIViewController *)viewController;
// 隐藏仪表盘
- (void)hiddenFloatViewDashboard;
/// 退出登录
- (void)logOutSDK;
/// 显示矩阵
/// @param frame frame description
-(void)showMatrixVieWithFrame:(CGRect)frame;
// 隐藏矩阵
- (void)hiddenMatrixView;
// 展示粉丝页
- (void)showFacebookFansPage;
@end

NS_ASSUME_NONNULL_END
