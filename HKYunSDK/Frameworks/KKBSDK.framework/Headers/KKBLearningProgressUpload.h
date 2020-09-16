//
//  KKBLearningProgressUpload.h
//  KaiKeBa
//
//  Created by zddMac on 2019/5/10.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBLearningProgressUpload : KKBLearningCenterRequest

- (instancetype)initWithContentId:(uintID)contentId WithProgress:(NSUInteger)progress WithStudyTimeLen:(NSUInteger)timeLen;

@end

NS_ASSUME_NONNULL_END
