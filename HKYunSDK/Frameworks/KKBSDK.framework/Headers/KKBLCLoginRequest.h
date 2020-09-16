//
//  KKBLCLoginRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/1.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBLCLoginRequest : KKBLearningCenterRequest

- (instancetype)initWithSSOToken:(NSString *)ssoToken;

@end

@interface KKBLCLogoutRequest : KKBLearningCenterRequest

@end

@interface KKBLCRefreshTokenRequest : KKBLearningCenterRequest

@end

NS_ASSUME_NONNULL_END
