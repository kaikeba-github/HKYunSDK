//
//  KKBWeixinBindRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/9.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBWeixinBindRequest : KKBLearningCenterRequest

- (instancetype)initWithAuthModel:(KKB3rdAuthModel *)authModel;

@end

@interface KKBWeixinReBindRequest : KKBWeixinBindRequest

@end

NS_ASSUME_NONNULL_END
