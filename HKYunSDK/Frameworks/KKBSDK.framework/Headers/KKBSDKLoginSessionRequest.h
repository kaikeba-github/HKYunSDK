//
//  KKBSDKLoginSessionRequest.h
//  KKBSDK
//
//  Created by Duane on 2020/7/18.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBPassportRequest.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKLoginSessionRequest : KKBPassportRequest

- (instancetype)initWithSSOToken:(NSString *)ssoToken appId:(NSString *)appId appKey:(NSString *)appKey;

@end

NS_ASSUME_NONNULL_END
