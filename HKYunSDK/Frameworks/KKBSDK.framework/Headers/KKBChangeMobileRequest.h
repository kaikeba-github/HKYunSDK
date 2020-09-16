//
//  KKBChangeMobileRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/7.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBChangeMobileCodeRequest : KKBLearningCenterRequest

@end

@interface KKBMobileChangeTokenRequest : KKBLearningCenterRequest

- (instancetype)initWithVerifyCode:(NSString *)verifyCode;

@end

@interface KKBNewMobileCodeRequest : KKBLearningCenterRequest

- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber;

@end

@interface KKBChangeMobileRequest : KKBLearningCenterRequest

- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber verifyCode:(NSString *)verifyCode token:(NSString *)token;

@end

NS_ASSUME_NONNULL_END
