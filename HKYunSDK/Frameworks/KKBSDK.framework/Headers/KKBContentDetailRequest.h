//
//  KKBContentDetailRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/5/10.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBContentDetailRequest : KKBLearningCenterRequest

- (instancetype)initWithContentId:(uintID)contentId;
- (instancetype)initWithContentId:(uintID)contentId WithIgnoreCache:(BOOL)ignoreCache;

@end

NS_ASSUME_NONNULL_END
