//
//  LEViewController.m
//  LinKingEnSDK
//
//  Created by dml1630@163.com on 08/07/2020.
//  Copyright (c) 2020 dml1630@163.com. All rights reserved.
//

#import "LEViewController.h"
#import <LinKingEnSDK/LinKingEnSDK.h>
@interface LEViewController ()<LEAdManagerDelegate>
@property (nonatomic, strong) LESDKManager *manager;
@end

@implementation LEViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [LESDKManager shared].initializeSDKCallBack = ^(LESDKManager * _Nonnull manager, NSError * _Nonnull error) {
        self.manager = manager;
        [manager.oauthManager loginWithDashboardRootViewController:self complete:^(LEUser * _Nonnull user, NSError * _Nonnull error) {
            NSLog(@"登录回调=====>%@",user.id);
        }];
       
        [manager.adManager registerAd];
    };
}
- (IBAction)showLoginAction:(id)sender {
//
//    [[LEOauthManager shared] showLoginAlterViewRootViewController:self withAgreement:YES];
}
- (IBAction)userCenterAction:(id)sender {
//    [[LEOauthManager shared] showUserCenterViewRootViewController:self];
}

- (IBAction)agreementAction:(id)sender {
    
//    [[LEOauthManager shared] showUseAgreementViewRootViewController:self];
}

- (IBAction)matrixAction:(id)sender {
//    [[LEOauthManager shared] showMatrixController:self];
    CGRect rect = CGRectMake(80, [UIScreen mainScreen].bounds.size.height - 200, 200, 160);
    [[LEOauthManager shared] showMatrixVieWithFrame:rect];
}


- (IBAction)accountCenterAction:(id)sender {
//    [[LEOauthManager shared] showAccountCenterController:self];
    
}

- (IBAction)bindingAccountAction:(id)sender {
//     [[LEOauthManager shared] showBindingAccountCenterController:self];
}


- (IBAction)bannerAction:(UIButton *)sender {
    
    [self.manager.adManager initializationBannerRootViewController:self superView:self.view];
    
    self.manager.adManager.delegate = self;
//    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
//        [self.manager.adManager showBanner];
//    });
}

- (IBAction)chapingAction:(id)sender {
    [self.manager.adManager initializationInterstitialAd:self];
     self.manager.adManager.delegate = self;
}
- (IBAction)rewardAction:(id)sender {
    [self.manager.adManager initializationRewardVideoAd:self];
     self.manager.adManager.delegate = self;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



- (void)bannerAdDidLoadPlatform:(LEPLATFORM)platform subManager:(id)manager{
    
    [self.manager.adManager showBanner];
    
}
- (void)bannerAdPlatform:(LEPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error{
    
}
- (void)bannerAdDidClosePlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}
- (void)bannerAdDidClickPlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}
- (void)bannerAdDidVisiblePlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}


- (void)rewardAdDidLoadPlatform:(LEPLATFORM)platform subManager:(id)manager{
     [self.manager.adManager showRewardVideoAd];
}
- (void)rewardAdPlatform:(LEPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error{
    
}
- (void)rewardAdDidClosePlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}
- (void)rewardAdDidClickPlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}
- (void)rewardAdDidVisiblePlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}
- (void)rewardAdWinRewardPlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}


- (void)interstitialAdDidLoadPlatform:(LEPLATFORM)platform subManager:(id)manager{
    [self.manager.adManager showInterstitialAd];
}
- (void)interstitialAdPlatform:(LEPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error{
    
}
- (void)interstitialAdDidClosePlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}
- (void)interstitialAdDidClickPlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}
- (void)interstitialAdDidVisiblePlatform:(LEPLATFORM)platform subManager:(id)manager{
    
}

@end
