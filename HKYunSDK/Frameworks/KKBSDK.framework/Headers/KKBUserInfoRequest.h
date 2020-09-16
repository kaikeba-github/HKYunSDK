//
//  KKBUserInfoRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/1.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBUserInfoRequest : KKBLearningCenterRequest

@end

@interface KKBUpdateUserInfoRequest : KKBLearningCenterRequest

- (instancetype)initWithModel:(KKBUserInfoModel *)newModel oldModel:(KKBUserInfoModel *)oldModel;

@end

@interface KKBAvatarTokenRequest : KKBLearningCenterRequest

@end

@interface KKBUserStudyInfoRequest : KKBLearningCenterRequest

@end

@interface KKBStudentWalletBalanceRequest : KKBLearningCenterRequest

@end

NS_ASSUME_NONNULL_END
