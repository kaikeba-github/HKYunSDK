//
//  KKBInterfaceDomain+KKBSDK.h
//  KKBSDK
//
//  Created by Duane on 2020/7/10.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBLibrary/KKBLibrary.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBInterfaceDomain (KKBSDK)

+ (void)resetLearnHost:(NSString *)normal pre:(NSString *)pre qa:(NSString *)qa dev:(NSString *)dev;

+ (NSString *)passportHost;
+ (NSString *)learningCenterHost;
+ (NSString *)mmsHost;
+ (NSString *)liveStatHost;
+ (NSString *)adHost;

@end

NS_ASSUME_NONNULL_END
