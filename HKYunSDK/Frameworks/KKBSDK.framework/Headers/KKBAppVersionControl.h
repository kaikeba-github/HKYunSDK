//
//  KKBAppVersionControl.h
//  KaiKeBa
//
//  Created by zddMac on 2019/4/4.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKBLibrary/KKBBasicMacro.h>

@interface KKBAppVersionControl : NSObject

DEFINE_SINGLETON_FOR_H(KKBAppVersionControl)

@property (nonatomic, assign, readonly) BOOL showThirdLogin;

- (void)configAppType:(KKBAppClientType)appType apiVersion:(NSInteger)apiVersion appStoreId:(NSString *)appStoreId;

- (void)checkVersion;
- (void)setThirdLoginSwitch:(BOOL)showThirdLogin;
- (void)checkThirdLoginSwitch:(KKBBlockBool)completion;

- (NSString *)localAppVersion;

@end

